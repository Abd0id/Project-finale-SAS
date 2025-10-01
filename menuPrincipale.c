#include <stdio.h>
#include <stdlib.h>
#include "headers/info.h"
#include "headers/produits.h"
#include "headers/menu.h"

void menuPrincipale(struct info Client, struct produits List[]){

    while (1) {
        printf("=== SYSTÈME D'ACHAT CLIENT ===\n");
        printf("\t\n");

        printf("1. Gestion du profil\n");
        printf("2. Gestion du solde virtuel\n");
        printf("3. Consultation des produits\n");
        printf("4. Effectuer un achat\n");
        printf("5. Mes statistiques\n");
        printf("0. Quitter l'application\n");
        printf("\t\n");

        int choix;

        printf("Entrez votre choix: ");
        scanf("%d",&choix);

        switch(choix){
            case 0:
                system("clear");
                return ;
            case 1:
                menuProfile(Client);
                break;
            case 2:
                
                break;
            case 3:
                produitList(List);
            default:
                system("clear");
                printf("Choix invalide!\n");
                break;
        }
    }
}