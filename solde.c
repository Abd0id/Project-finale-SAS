#include <stdio.h>
#include "headers/info.h"

void solde(struct info *Client) {
    if (Client->idClient == 0){

        printf("Tu doit cree votre compte!\n");
        printf("\t\n");
        return ;

    }
    int choix;
    float montant;

    printf("\n=== GESTION DU SOLDE ===\n");
    printf("1. Consulter le solde\n");
    printf("2. Déposer de l'argent\n");
    printf("0. Retour\n");
    
    printf("\nVotre choix: ");
    scanf("%d", &choix);

    switch(choix) {
        case 0:
            return;
        case 1:
            printf("\nVotre solde actuel est: %.2f MAD\n", Client->solde);
            break;
        case 2:
            printf("\nMontant à déposer: ");
            scanf("%f", &montant);
            if(montant > 0) {
                Client->solde += montant;
                printf("Dépôt réussi! Nouveau solde: %.2f MAD\n", Client->solde);
            } else {
                printf("Montant invalide!\n");
            }
            break;
        default:
            printf("Choix invalide!\n");
            break;
    }
}