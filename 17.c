#include <stdio.h>
#include <stdlib.h>



int fatorial, n;

int main()
{
  printf("Digite o numero desejado: ");
  scanf("%d", &n) ;

  for(fatorial = 1; n > 1; n = n - 1)
  {
      fatorial = fatorial * n;
  }

  printf("\n%d", fatorial);
  return 0;
}
