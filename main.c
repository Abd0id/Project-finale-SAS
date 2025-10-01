#include <stdio.h>
#include "headers/info.h"
#include "headers/produits.h"
#include "headers/menu.h"

int main() {
    struct info Client = {0};
    struct produits List[10] = {
        {1, 20, "MacBook Pro 16", "Laptops", "Apple MacBook Pro 16 pouces avec puce M3 Pro.", 2499.99},
        {2, 25, "Dell XPS 15", "Laptops", "Dell XPS 15 avec écran InfinityEdge et i7.", 1899.99},
        {3, 30, "Lenovo ThinkPad X1 Carbon", "Laptops", "Portable professionnel durable et léger.", 1799.99},
        {4, 50, "iPhone 15 Pro Max", "Phones", "iPhone 15 Pro Max avec A17 Pro chip et triple caméra.", 1399.99},
        {5, 40, "Samsung Galaxy S24 Ultra", "Phones", "Samsung Galaxy S24 Ultra avec S-Pen et 200MP caméra.", 1299.99},
        {6, 35, "Google Pixel 8 Pro", "Phones", "Google Pixel 8 Pro avec IA intégrée et super caméra.", 1099.99},
        {7, 60, "OnePlus 12", "Phones", "OnePlus 12 avec écran 120Hz et recharge rapide.", 899.99},
        {8, 40, "iPad Pro 12.9", "Tablets", "Apple iPad Pro avec puce M2 et Apple Pencil 2 support.", 1199.99},
        {9, 30, "Samsung Galaxy Tab S9 Ultra", "Tablets", "Tablette Samsung AMOLED 14 pouces, ultra fine.", 999.99},
        {10, 20, "Microsoft Surface Pro 9", "Tablets", "Tablette hybride avec clavier détachable et Windows 11.", 1299.99}
    };

    menuPrincipale(&Client, List, 10);

    return 0;
}