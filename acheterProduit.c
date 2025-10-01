#include <stdio.h>
#include "headers/info.h"
#include "headers/produits.h"

int acheterProduit(struct produits List[], int taille, struct info *Client, int idProduit, int quantite) {

    if (Client->idClient == 0){
        printf("Tu doit cree votre compte!\n");
        printf("\t\n");
        return 0;
    }

    int productIndex = -1;
    for(int i = 0; i < taille; i++) {
        if(List[i].idProduit == idProduit) {
            productIndex = i;
            break;
        }
    }
    
    if(productIndex == -1) {
        printf("Produit non trouve!\n");
        return 0;
    }
    
    if(List[productIndex].stock < quantite) {
        printf("Stock insuffisant! Stock disponible: %d\n", List[productIndex].stock);
        return 0;
    }
    
    float totalCost = List[productIndex].prix * quantite;
    
    if(Client->solde < totalCost) {
        printf("Solde insuffisant! Coût total: %.2f, Votre solde: %.2f\n", 
               totalCost, Client->solde);
        return 0;
    }
    
    List[productIndex].stock -= quantite;
    Client->solde -= totalCost;
    
    printf("\nAchat réussi!\n");
    printf("Produit: %s\n", List[productIndex].nomProduit);
    printf("Quantité: %d\n", quantite);
    printf("Coût total: %.2f\n", totalCost);
    printf("Nouveau solde: %.2f\n", Client->solde);
    printf("Stock restant: %d\n", List[productIndex].stock);
    
    return 1;
}