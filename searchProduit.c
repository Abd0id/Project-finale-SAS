#include <stdio.h>
#include <string.h>
#include "headers/info.h"
#include "headers/produits.h"

void triParPrixCroissant(struct produits List[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (List[i].prix > List[j].prix) {
                struct produits temp = List[i];
                List[i] = List[j];
                List[j] = temp;
            }
        }
    }

    printf("\n--- Produits tries par prix croissant ---\n");
    for (int i = 0; i < taille; i++) {
        printf("\nID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f MAD\nStock: %d\nDescription: %s\n",
               List[i].idProduit,
               List[i].nomProduit,
               List[i].categorie,
               List[i].prix,
               List[i].stock,
               List[i].description);
    }
}

void triParPrixDecroissant(struct produits List[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (List[i].prix < List[j].prix) {
                struct produits temp = List[i];
                List[i] = List[j];
                List[j] = temp;
            }
        }
    }

    printf("\n--- Produits tries par prix decroissant ---\n");
    for (int i = 0; i < taille; i++) {
        printf("\nID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f MAD\nStock: %d\nDescription: %s\n",
               List[i].idProduit,
               List[i].nomProduit,
               List[i].categorie,
               List[i].prix,
               List[i].stock,
               List[i].description);
    }
}

void triParNomAZ(struct produits List[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (strcmp(List[i].nomProduit, List[j].nomProduit) > 0) {
                struct produits temp = List[i];
                List[i] = List[j];
                List[j] = temp;
            }
        }
    }

    printf("\n--- Produits tries par nom A-Z ---\n");
    for (int i = 0; i < taille; i++) {
        printf("\nID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f MAD\nStock: %d\nDescription: %s\n",
               List[i].idProduit,
               List[i].nomProduit,
               List[i].categorie,
               List[i].prix,
               List[i].stock,
               List[i].description);
    }
}

void triParNomZA(struct produits List[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (strcmp(List[i].nomProduit, List[j].nomProduit) < 0) {
                struct produits temp = List[i];
                List[i] = List[j];
                List[j] = temp;
            }
        }
    }

    printf("\n--- Produits tries par nom Z-A ---\n");
    for (int i = 0; i < taille; i++) {
        printf("\nID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f MAD\nStock: %d\nDescription: %s\n",
               List[i].idProduit,
               List[i].nomProduit,
               List[i].categorie,
               List[i].prix,
               List[i].stock,
               List[i].description);
    }
}

void searchByCategory(struct produits List[], int taille) {
    char cat[30];
    printf("\n--- Recherche par Categorie ---\n");
    printf("Entrez la categorie: ");
    scanf("%29s", cat);

    int found = 0;
    for (int i = 0; i < taille; i++) {
        if (strcasecmp(List[i].categorie, cat) == 0) {
            printf("\nID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f MAD\nStock: %d\nDescription: %s\n",
                   List[i].idProduit,
                   List[i].nomProduit,
                   List[i].categorie,
                   List[i].prix,
                   List[i].stock,
                   List[i].description);
            found = 1;
        }
    }

    if (!found) {
        printf("Aucun produit trouve dans la categorie '%s'.\n", cat);
    }
}

int searchByName(struct produits List[], int taille) {
    char name[30];
    printf("\n--- Recherche par Nom ---\n");
    printf("Entrez le nom du produit: ");
    scanf("%29s", name);

    for (int i = 0; i < taille; i++) {
        if (strcasecmp(List[i].nomProduit, name) == 0) {
            printf("\nID: %d\nNom: %s\nCategorie: %s\nPrix: %.2f MAD\nStock: %d\nDescription: %s\n",
                   List[i].idProduit,
                   List[i].nomProduit,
                   List[i].categorie,
                   List[i].prix,
                   List[i].stock,
                   List[i].description);
            return List[i].idProduit; 
        }
    }

    printf("Aucun produit trouve avec le nom '%s'.\n", name);
    return -1; 
}

int browseCatalogue(struct produits List[], int taille) {
    int choix;
    
    do{
        printf("\n=== CATALOGUE ===\n");
        printf("1. Trier prix croissant\n");
        printf("2. Trier prix decroissant\n");
        printf("3. Trier par nom (A-Z)\n");
        printf("4. Trier par nom (Z-A)\n");
        printf("5. Rechercher par categorie\n");
        printf("6. Rechercher par nom (pour acheter)\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 0:
                 break;
            case 1:
                triParPrixCroissant(List, taille);
                break;
            case 2:
                triParPrixDecroissant(List, taille);
                break;
            case 3:
                triParNomAZ(List, taille);
                break;
            case 4:
                triParNomZA(List, taille);
                break;
            case 5:
                searchByCategory(List, taille);
                break;
            case 6:
                return searchByName(List, taille);
            default:
                printf("Choix invalide.\n");
                break;
        }
    }while(1);
}