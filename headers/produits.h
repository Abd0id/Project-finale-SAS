#ifndef PRODUITS_H
#define PRODUITS_H

struct produits{

    int idProduit;
    int stock;
    char nomProduit[30];
    char categorie[30];
    char description[100];
    float prix;

};

void produitList(struct produits List[]);

#endif