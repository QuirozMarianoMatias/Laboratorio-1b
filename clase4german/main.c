#include <stdio.h>
#include <stdlib.h>
#include "imput.h"

int main()
{ //llamada

    int edad;
    int legajo;

    edad = getInt("ingrese su edad: ","error reingrese edad: ",1,18);
    legajo = getInt("\ningrese su legajo: ","error reingrese legajo: ",100,500);

    printf("\nsu edad es: %d",edad);
    printf("\nsu legajo es: %d",legajo);



    return 0;

}
