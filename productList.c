#include <stdio.h>
#include "headers/produits.h"

void produitList(struct produits List[], int taille) {

    printf("\n======= Catalogue Produits =======\n");
    int i;
    for (i = 0; i < taille; i++) {
        printf("\nID: %d\n", List[i].idProduit);
        printf("Nom: %s\n", List[i].nomProduit);
        printf("Catégorie: %s\n", List[i].categorie);
        printf("Prix: %.2f MAD\n", List[i].prix);
        printf("Stock: %d\n", List[i].stock);
        printf("Description: %s\n", List[i].description);
    }


}