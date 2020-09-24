#include <stdio.h>
#include <stdlib.h>

main()
{
    float r,d,c,e;
    printf("Digite o valor em real para a conversao: ");
    scanf("%f",&r);
    printf("Digite o valor atual do dolar (ponto em vez de virgula): ");
    scanf("%f",&d);
    printf("Qual o valor que possui em reais: ");
    scanf("%e", &e);
    c=r/d;
     printf("%.2f.%.2f=%.3f \n O valor digitado de real para dolar e: %.3f\n" ,r,d,c,c);


}
