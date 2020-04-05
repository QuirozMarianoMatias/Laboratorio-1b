#include <stdio.h>
#include <stdlib.h>
 /*Ingresar números hasta que el usuario lo decida. Informar:
Cantidad de números pares.
Cantidad de números positivos y negativos.
Promedio de todos los números.
Maximo y minimo.*/
int main()
{
  int num;
  char respuesta;
  int contpar = 0;
  int contneg = 0;
  int contpos = 0;
  int acum=0;
  float promedio;
  int max;
  int min;
  int flag = 0;


  do
  {
      printf("ingrese un numero: ");
      scanf("%d", &num);

      if (num % 2 == 0)
      {
          contpar++;
      }

      if (num > 0)
      {
          contpos++;
      }

      if (num < 0)
      {
          contneg++;
      }

      acum += num;

      if (num > max || flag == 0)
      {
          max = num;
      }

       if (num < min || flag == 0)
      {
          min = num;
          flag = 1;
      }

      printf("si desea seguir ingresando numeros presione s: ");
      fflush(stdin);
      scanf("%c",&respuesta);
      while (respuesta != 's' && respuesta != 'n')
      {
          printf("respuesta inconrrecta ingrese s o n");
          fflush(stdin);
        scanf("%c",&respuesta);
      }

  }while (respuesta == 's' );

  promedio =(float) acum / num;

  printf("la cantidad de numeros pares son: %d \n",contpar);
  printf("la cantidad de numeros positivos son: %d \n",contpos);
  printf("la cantidad de numeros negativos son: %d \n",contneg);
  printf("el promedio de los numeros es: %f \n",promedio);
  printf("el numero maximo es: %d \n",max);
  printf("el numero minimo es: %d \n",min);



    return 0;
}
