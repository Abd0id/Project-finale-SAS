#include <stdio.h>
#include "headers/info.h"

void emailGen(struct info *Client){

    if (Client->idClient == 0){

        printf("Tu doit cree votre compte!\n");
        printf("\t\n");
        return ;

    }

    sprintf(Client->email, "%s.%s@email.com", Client->prenom, Client->nom);

    printf("\nVoter email est: '%s'\nAvec ID: %0.4d\n", Client->email, Client->idClient);

}