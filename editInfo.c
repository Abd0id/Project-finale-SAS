#include <stdio.h>
#include "headers/client.h"

void editInfo(struct info Client){

    int choix;

    printf("1. Gestion du nom");
    printf("\t\n");
    printf("2. Gestion du prenom");
    printf("\t\n");
    printf("3. Gestion du email");

    printf("\nEntez vos choix: ");
    scanf("%d",&choix);

    switch(choix){
        case 1:
            printf("\nEntrez voter nouveau nom: ");
            scanf("%s",Client.nom);
            break;
        case 2:
            printf("\nEntrez voter nouveau prenom: ");
            scanf("%s",Client.prenom);
            break;
        case 3:
            printf("\nEntrez voter nouveau email: ");
            scanf("%s",Client.email);
            break;
        default:
            printf("\nChoix invalide!\n");
            break;
    }
}