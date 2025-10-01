#include <stdio.h>
#include <string.h>
#include "headers/info.h"

int check_valid_name(char *str, char *type)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
        {
            printf ("Invalide %s (%s containe only alphabic characters)\n", type, type);
            return (1);
        }
        i++;
    }
    return 0;
}

void addInfo(struct info *Client) {

    Client->idClient = 1;

    do {
        printf("\nEntrez voter nom: ");
        scanf("%29s", Client->nom);
    } while (check_valid_name(Client->nom, "nom"));

    do {
        printf("\nEntrez voter prenom: ");
        scanf("%29s", Client->prenom);
    } while (check_valid_name(Client->prenom, "prenome"));


    printf("\nEntrez voter solde: ");
    scanf("%f", &Client->solde);

}