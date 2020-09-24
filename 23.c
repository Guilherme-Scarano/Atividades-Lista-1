#include <stdio.h>
#include <conio.h>
main ()
{
     int base, expoente, resultado=0,i=0, valor=0;

     printf ("Entre com o valor de base: ");
     scanf ("%d",&base);
     printf ("Entre com o valor de expoente: ");
     scanf ("%d",&expoente);

     resultado = base;
     for ( i = 1; i < expoente; i++ )
     {
        resultado *= base;
     }

          printf ("\n O valor da potencia sera de: %d", resultado);



}
