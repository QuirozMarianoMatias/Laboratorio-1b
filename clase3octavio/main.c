#include <stdio.h>
#include <stdlib.h>
void saludar();
int suma (int num1, int num2);
int main()
{
    int respuesta;
    int num1 = 10;
    int num2 = 1000;

    saludar();

    respuesta = suma(num1,num2);
    printf("\nla suma es: %d",respuesta);
    printf("\n---------------------------");

    return 0;
}
void saludar()
{   printf("---------------------------\n");
    printf("bienvenidos a las funciones");
    printf("\n---------------------------");
}

int suma (int num1, int num2)
{
    int aux;
   aux = num1+num2;


    return aux;
}
