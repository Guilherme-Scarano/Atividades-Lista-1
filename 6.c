#include <stdlib.h>
#include <stdio.h>
int main(){
    int valorA, valorB;
    printf("Digite o primeiro numero: ");
    scanf("%d", &valorA);
    printf("Digite o segundo numero: ");
    scanf("%d", &valorB);
    if(valorA>valorB){
        printf("%d", valorA);
    }else{
        printf("%d", valorB);
    }

}
