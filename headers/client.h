#ifndef INFO_H
#define INFO_H

struct info{

    int idClient;
    char nom[30];
    char prenom[30];
    char email[70];
    float solde;

};

struct produits{

    int idProduit;
    int stock;
    char nomProduit[30];
    char categorie[30];
    char description[100];
    float prix;

};



void addInfo(struct info Client);
void editInfo(struct info Client);
void produitList(struct produits List);

#endif