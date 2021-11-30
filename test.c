    int test()  {
        //Exo1----------------------------------------------------------------

        /*int nombreDeVies = 10;

        printf("Le geant debarque\n");
        printf("Vous avez %d points de vie\n", nombreDeVies);
        printf("Le geant vous porte un coup sur la tete\n");
        nombreDeVies = 5;
        printf("Il vous reste %d points de vie\n", nombreDeVies);*/

        //Exo2----------------------------------------------------------------

        /*int resultat = 0;

        resultat = 6 * 2;
        printf("%d \n", resultat);*/


        //Exo3----------------------------------------------------------------

        /*int age = 0;

        printf("Quel age avez vous?\n");
        scanf("%d", &age);

        while(age == 0){
            printf("Veuillez entrer un chiffre plus grand que 0.\n");
            scanf("%d", &age);
        }
        printf("Vous avez %d ans !\n", age);*/

        //Exo4----------------------------------------------------------------

        /*int resultat = 0, nombre1 = 0, nombre2 = 0;

        printf("Entrez votre premier chiffre : ");
        scanf("%d", &nombre1);

        printf("Entrez votre deuxieme chiffre : ");
        scanf("%d", &nombre2);

        resultat = nombre1 + nombre2;

        printf("\n%d + %d = %d\n", nombre1, nombre2, resultat);*/

        //Jeu 1 ----------------------------------------------------------------

        /*printf("=== Menu ===\n\n");
        printf("1. Royal Cheese\n");
        printf("2. Mc Deluxe\n");
        printf("3. Mc Bacon\n");
        printf("4. Big Mac\n");
        printf("Votre choix ?\n\n");

        int choixMenu = 0;

        scanf("%d", &choixMenu);

        switch(choixMenu){
        case 1:
            printf("Vous avez choisis Royal Cheese.");
            break;
        case 2:
            printf("Vous avez choisis Mc Deluxe.");
            break;
        case 3:
            printf("Vous avez choisis Mc Bacon.");
            break;
        case 4:
            printf("Vous avez choisis Big Mac.");
            break;
        default:
        printf("Ce choix n'existe pas dans notre menu.");
        }

        printf("\n\n==== Menu ====");
        printf("\n\n");*/

        //Jeu 2 ----------------------------------------------------------------

        /*int mystere = 0, chiffre = 0;
        const int MAX = 10, MIN = 1;

        int i = 0;

        srand(time(NULL));
        mystere = (rand() % (MAX - MIN + 1)) + MIN;

        printf("Bienvenu au jeu du hasard !\n");
        sleep(2);
        printf("Un chiffre entre 1 et 100 a été choisi au hasard et vous devez le deviner.\n");
        sleep(3);
        printf("Bonne chance ! :D\n\n");
        sleep(1);
        printf("------------\n");
        sleep(1);


        while(chiffre != mystere){
            printf("\n\nIntroduisez un chiffre : ");
            scanf("%d", &chiffre);
            if(chiffre < mystere){
                printf("\nLe chiffre est grand. Réessayez de nouveau.");
            }else if(chiffre > mystere){
                printf("\nLe chiffre est petit. Réessayez de nouveau.");
            }else{
                printf("\nBravo! Vous avez trouvé le chiffre caché. *clap* *clap*\n\n");
            }
        }*/
    }
