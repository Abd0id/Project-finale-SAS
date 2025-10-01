#include <stdio.h>
#include "headers/info.h"

void showInfo(struct info *Client) {
    if (Client->idClient == 0){

        printf("Tu doit cree votre compte!\n");
        printf("\t\n");
        return ;

    }
    printf("\n=== INFORMATION DU PROFIL ===\n");
    printf("ID Client: %d\n", Client->idClient);
    printf("Nom: %s\n", Client->nom);
    printf("Prénom: %s\n", Client->prenom);
    printf("Email: %s\n", Client->email);
    printf("Solde: %.2f MAD\n", Client->solde);
    printf("\nAppuyez sur Entrée pour continuer...");
    getchar();
    getchar();
}