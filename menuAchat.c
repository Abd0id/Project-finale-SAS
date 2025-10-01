#include <stdio.h>
#include "headers/info.h"
#include "headers/produits.h"
#include "headers/menu.h"

void menuAchat(struct info *Client, struct produits List[], int taille) {
    
    if (Client->idClient == 0){

        printf("Tu doit cree votre compte!\n");
        printf("\t\n");
        return ;

    }

    int idProduit, quantite;
    
    printf("\n=== EFFECTUER UN ACHAT ===\n");
    
    // Afficher le catalogue
    produitList(List, taille);
    
    printf("\nEntrez l'ID du produit à acheter (0 pour annuler): ");
    scanf("%d", &idProduit);
    
    if(idProduit == 0) {
        return;
    }
    
    printf("Entrez la quantité souhaitée: ");
    scanf("%d", &quantite);
    
    acheterProduit(List, taille, Client, idProduit, quantite);
}