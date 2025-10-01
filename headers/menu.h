#ifndef MENU_H
#define MENU_H 

#include "info.h"
#include "produits.h"

void menuPrincipale(struct info *Client, struct produits List[], int taille);
void menuProfile(struct info *Client);
void menuProduit(struct produits List[], int taille);
void menuAchat(struct info *Client, struct produits List[], int taille);

#endif