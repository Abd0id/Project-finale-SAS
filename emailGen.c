#include <stdio.h>
#include <ctype.h>
#include "headers/info.h"

void emailGen(struct info *Client){

    if (Client->idClient == 0){

        printf("Tu doit cree votre compte!\n");
        printf("\t\n");
        return ;

    }

    for (int i = 0; Client->prenom[i] != '\0';i++){
        Client->prenom[i] = tolower(Client->prenom[i]);
    }

    for (int i = 0; Client->nom[i] != '\0';i++){
        Client->nom[i] = tolower(Client->nom[i]);
    }

    sprintf(Client->email, "%s.%s@email.com", Client->prenom, Client->nom);

    printf("\nVoter email est: '%s'\nAvec ID: %0.4d\n", Client->email, Client->idClient);

}