#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MIN = 1; //Constante qui determine le Minimum du nombre a trouver.
    int MAX = 100, mystere = 0, chiffre = 0, restart = 1, coups = 0, niveau = 0; //Maximum du nombre a trouver, Variable nombre caché, Nombre inseré par le joueur, Recommencer le jeu, Nombre de coups, Niveau
    srand(time(NULL)); //Générateur du nombre caché au hasard.



    //Message quand le programme se lance.
    printf("▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓\n▓▒▓▒▓▒▓\t\t\t\t\t\t▓▒▓▒▓▒▓\n▓▒▓▒▓▒▓     BIENVENUE DANS LE JEU DU HASARD     ▓▒▓▒▓▒▓\n▓▒▓▒▓▒▓\t\t\t\t\t\t▓▒▓▒▓▒▓\n▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓ ");
    fflush(stdout);
   // sleep(4);
    printf("\e[1;1H\e[2J");

    printf("▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓\n▓▒▓▒▓\t\t\t      ▓▒▓▒▓\n▓▒▓▒▓  CHOISISSEZ UN NIVEAU   ▓▒▓▒▓\n▓▒▓▒▓\t\t\t      ▓▒▓▒▓\n▓▒▓▒▓   1 = Entre 1 & 100     ▓▒▓▒▓\n▓▒▓▒▓   2 = Entre 1 & 1000    ▓▒▓▒▓\n▓▒▓▒▓   3 = Entre 1 & 10000   ▓▒▓▒▓\n▓▒▓▒▓\t\t\t      ▓▒▓▒▓\n▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓\n\n\n=> ");
    fflush(stdout);
    scanf("%d", &niveau);

    switch(niveau)
    {
    case 1:
        MAX = 100;
        break;
    case 2:
        MAX = 1000;
        break;
    case 3:
        MAX = 10000;
        break;
    default:
        printf("\nNiveau non reconnu. Je choisis pour vous le niveau 2 (entre 1 et 100).\n\n");
        MAX = 100;
        sleep(4);
    }


    //Message debut du programme.
    printf("Un nombre entre 1 et %d a été choisi au hasard et vous devez le deviner !", MAX);
    fflush(stdout);
    sleep(4);
    printf("\e[1;1H\e[2J");

    //Message debut du programme.
    printf("Bonne chance ! :D");
    fflush(stdout);
    sleep(2);
    printf("\e[1;1H\e[2J");

    do
    {
        //Remet le compteur a 0.
        coups = 0;
        mystere = (rand() % (MAX - MIN + 1)) + MIN; //Mélangeur du nombre caché au hasard.

        do
        {
            //Debut compteur + Debut jeu.
            printf("Introduisez un nombre : ");
            scanf("%d", &chiffre);
            coups++;
            printf("\e[1;1H\e[2J");
            if(chiffre < mystere)
            {
                //Message pendant le jeu.
                printf("Le nombre est GRAND. Réessayez de nouveau.\n\n");
            }
            else if(chiffre > mystere)
            {
                //Message pendant le jeu.
                printf("Le nombre est PETIT. Réessayez de nouveau.\n\n");
            }
            else
            {
                //Message quand le joueur gagne + nombre de coups.
                printf("Bravo! Vous avez trouvé le nombre caché en %d coups. *clap* *clap*\n\n", coups);
            }

        } while(chiffre != mystere);

        //Menu pour recommencer le jeu.
        printf("Voulez-vous recommencer le jeu ?\n\n1 = OUI\n0 = NON\n\n=> ");
        scanf("%d", &restart);
        printf("\e[1;1H\e[2J");

        while(restart > 1)
        {
            //Message d'erreur SI le joueur selectionne une option erronée dans le menu.
            printf("Ce choix n'existe pas dans le menu.\n\n");
            printf("Voulez-vous recommencer le jeu ?\n\n1 = OUI\n0 = NON\n\n=> ");
            scanf("%d", &restart);
            printf("\e[1;1H\e[2J");
        }
        if(restart == 1)
        {
            //Message de chargement de la nouvelle partie.
            printf("Chargement de la partie");
            fflush(stdout);
            usleep(500000);
            printf(".");
            fflush(stdout);
            usleep(500000);
            printf(".");
            fflush(stdout);
            usleep(500000);
            printf(".");
            fflush(stdout);
            sleep(1);
            printf("\e[1;1H\e[2J");
        }
    } while(restart);

    //Message avant de quitter le terminal.
    printf("▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓\n▓▒▓▒▓▒▓     A LA PROCHAINE    ▓▒▓▒▓▒▓\n▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓\n\n\n\n\n\n");
    return 0;
}
