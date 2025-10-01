#include <stdio.h>
#include "headers/produits.h"

void produitList(struct produits List[]) {
        List[10] = {
        // ----- Laptops -----
        {1, "MacBook Pro 16", "Laptops", 2499.99, 20, "Apple MacBook Pro 16 pouces avec puce M3 Pro."},
        {2, "Dell XPS 15", "Laptops", 1899.99, 25, "Dell XPS 15 avec écran InfinityEdge et i7."},
        {3, "Lenovo ThinkPad X1 Carbon", "Laptops", 1799.99, 30, "Portable professionnel durable et léger."},

        // ----- Phones -----
        {4, "iPhone 15 Pro Max", "Phones", 1399.99, 50, "iPhone 15 Pro Max avec A17 Pro chip et triple caméra."},
        {5, "Samsung Galaxy S24 Ultra", "Phones", 1299.99, 40, "Samsung Galaxy S24 Ultra avec S-Pen et 200MP caméra."},
        {6, "Google Pixel 8 Pro", "Phones", 1099.99, 35, "Google Pixel 8 Pro avec IA intégrée et super caméra."},
        {7, "OnePlus 12", "Phones", 899.99, 60, "OnePlus 12 avec écran 120Hz et recharge rapide."},

        // ----- Tablets -----
        {8, "iPad Pro 12.9", "Tablets", 1199.99, 40, "Apple iPad Pro avec puce M2 et Apple Pencil 2 support."},
        {9, "Samsung Galaxy Tab S9 Ultra", "Tablets", 999.99, 30, "Tablette Samsung AMOLED 14 pouces, ultra fine."},
        {10, "Microsoft Surface Pro 9", "Tablets", 1299.99, 20, "Tablette hybride avec clavier détachable et Windows 11."}
    };

    int taille = sizeof(List) / sizeof(List[0]);

    printf("\n======= Catalogue Produits =======\n");
    for (int i = 0; i < taille; i++) {
        printf("\nID: %d\n", List[i].idProduit);
        printf("Nom: %s\n", List[i].nomProduit);
        printf("Catégorie: %s\n", List[i].categorie);
        printf("Prix: %.2f $\n", List[i].prix);
        printf("Stock: %d\n", List[i].stock);
        printf("Description: %s\n", List[i].description);
    }
}


