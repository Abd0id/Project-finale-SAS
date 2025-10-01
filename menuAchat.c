#include <stdio.h>
#include "headers/info.h"
#include "headers/produits.h"
#include "headers/menu.h"

void menuAchat(struct info *Client, struct produits List[], int taille) {
    if (Client->idClient == 0) {
        printf("Tu doit cree votre compte!\n");
        return;
    }

    int idProduit, quantite;

    printf("\n=== EFFECTUER UN ACHAT ===\n");

    produitList(List, taille);

    idProduit = browseCatalogue(List, taille); 

    if (idProduit == -1) {  
        printf("Aucun produit selectionne.\n");
        return;
    }

    printf("Entrez la quantité souhaitée: ");
    scanf("%d", &quantite);

    acheterProduit(List, taille, Client, idProduit, quantite);
}
