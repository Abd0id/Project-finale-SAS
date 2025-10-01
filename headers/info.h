#ifndef INFO_H
#define INFO_H 


struct info {
    int idClient;
    char nom[30];
    char prenom[30];
    char email[70];
    float solde;
};

void addInfo(struct info *Client);
void editInfo(struct info *Client);
void showInfo(struct info *Client);
void solde(struct info *Client);
void afficherStatistiques(struct info *Client);

#endif