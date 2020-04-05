#include "imput.h"

//implementacion

int getInt (char mensaje [], char Error [],int min ,int max)
{
    int dato;

    printf("%s",mensaje);
    scanf("%d",&dato);

    while (dato < min || dato > max)
    {
        printf("%s",Error);
        scanf("%d",&dato);
    }


    return dato;
}
