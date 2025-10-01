#include <stdio.h>
#include "headers/info.h"
#include "headers/produits.h"

void afficherStatistiques(struct info *Client) {
    if (Client->idClient == 0){

        printf("Tu doit cree votre compte!\n");
        printf("\t\n");
        return ;

    }
    printf("\n=== MES STATISTIQUES ===\n");
    printf("ID Client: %d\n", Client->idClient);
    printf("Solde actuel: %.2f MAD\n", Client->solde);
}