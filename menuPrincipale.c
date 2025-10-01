#include <stdio.h>
#include <stdlib.h>
#include "headers/info.h"
#include "headers/produits.h"
#include "headers/menu.h"

void menuPrincipale(struct info *Client, struct produits List[], int taille) {
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
        scanf("%d", &choix);

        switch(choix) {
            case 0:
                system("clear");
                printf("Au revoir! Merci d'avoir utilisé notre service.\n");
                return;
            case 1:
                system("clear");
                menuProfile(Client);
                break;
            case 2:
                system("clear");
                solde(Client);
                break;
            case 3:
                system("clear");
                produitList(List, taille);
                break;
            case 4:
                system("clear");
                menuAchat(Client, List, taille);
                break;
            case 5:
                system("clear");
                afficherStatistiques(Client);
                break;
            default:
                system("clear");
                printf("Choix invalide! Veuillez réessayer.\n");
                break;
        }
    }
}