#ifndef PRODUITS_H
#define PRODUITS_H

#include "info.h"

struct produits{
    int idProduit;
    int stock;
    char nomProduit[30];
    char categorie[30];
    char description[100];
    float prix;
};

void produitList(struct produits List[], int taille);
int acheterProduit(struct produits List[], int taille, struct info *Client, int idProduit, int quantite);


#endif