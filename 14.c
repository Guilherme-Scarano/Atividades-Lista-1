#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
        float peso,altura,imc;

        printf("Peso: ");
        scanf("%f",&peso);
        printf("Altura: ");
        scanf("%f",&altura);

        imc = peso / (pow ( altura,2)) ;
        printf ("\nSeu IMC = %.2f", imc );

        if (imc < 20)
        {
            printf("\n Abaixo do peso \n");
        }
        if (imc >= 20 && imc <= 25)
        {
           printf("\n Peso normal \n");
        }

        if (imc > 25 && imc <= 30)
        {
           printf("\n Acima do peso \n");
        }
        if (imc > 30 && imc <= 40)
        {
           printf("\n Obeso \n");
        }
        if (imc >40 )
        {
            printf("\n Obeso Morbido \n");
        }

        system ("pause");
        return 0 ;
}
