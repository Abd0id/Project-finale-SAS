#include <stdio.h>
#include <string.h>
#include "headers/client.h"

void addInfo(struct info Client){

    Client.idClient = 0;

    printf("\nEntrez voter nom: ");
    scanf("%s",Client.nom);

    printf("\nEntrez voter prenom: ");
    scanf("%s",Client.prenom);

    printf("\nEntrez voter solde: ");
    scanf("%f",&Client.solde);

    sprintf(Client.email,"%s.%s@email.com", Client.prenom, Client.nom);

    printf("\nVoter email est: '%s'\nAvec ID: %0.4d\n", Client.email, Client.idClient);



}