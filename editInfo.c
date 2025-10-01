#include <stdio.h>
#include "headers/info.h"


void editInfo(struct info *Client) {

    if (Client->idClient == 0){

        printf("Tu doit cree votre compte!\n");
        printf("\t\n");
        return ;

    }

    int choix;

    printf("1. Modification du nom: %s", Client->nom);
    printf("\t\n");
    printf("2. Modification du prenom: %s", Client->prenom);
    printf("\t\n");
    printf("3. Modification du email: %s", Client->email);

    printf("\nEntez vos choix: ");
    scanf("%d", &choix);

    switch(choix) {
        case 1:
            printf("\nEntrez voter nouveau nom: ");
            scanf("%s", Client->nom);
            break;
        case 2:
            printf("\nEntrez voter nouveau prenom: ");
            scanf("%s", Client->prenom);
            break;
        case 3:
            printf("\nEntrez voter nouveau email: ");
            scanf("%s", Client->email);
            break;
        default:
            printf("\nChoix invalide!\n");
            break;
    }
}