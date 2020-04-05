#include <stdio.h>
#include <stdlib.h>
//Pedirle al usuario que ingrese 2 números enteros y que muestre:La suma de los dos números.Disminuir del segundo, el primero.El producto de ambos números.Promedio de ambos números.
int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    int multiplicacion;
    int promedio;

    printf("ingrese un numero: ");
    scanf("%d",&num1);
    printf("ingrese otro numero: ");
    scanf("%d",&num2);


    suma = num1+num2;
    resta = num2 - num1;
    multiplicacion = num1 * num2;
    promedio = suma / 2;


    printf("el numero uno es: %d el numero dos es: %d la suma es: %d la resta es: %d la multiplicacion es: %d y el promedio es: %d",num1 ,num2 ,suma,resta,multiplicacion,promedio);


    return 0;
}
