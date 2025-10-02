#include <stdio.h>
#include <stdlib.h>
#include "headers/info.h"
#include "headers/menu.h"

void menuProfile(struct info *Client){

    printf("\n===GESTION DU PROFIL===\n");
    printf("\t\n");
  
    printf("1. Création de profil\n");
    printf("2. Modification du profil\n");
    printf("3. Consultation du profil\n");
    printf("4. Génération email\n");
    printf("0. Retourn\n");
    printf("\t\n");

    int choix;

    printf("Entrez votre choix: ");
    scanf("%d",&choix);

    switch(choix){
        case 0:
            system("clear");
            return;
        case 1:
            addInfo(Client);
            break;
        case 2:
            editInfo(Client);
            break;
        case 3:
            showInfo(Client);
            break;
        case 4:
            emailGen(Client);
            break;
        default:
            system("clear");
            printf("Choix invalide!\n");
            break;
    }  

}
