#include <stdio.h>
int main(void){
  int a, b, resto;
  printf("Entre com dois valores: ");
  scanf("%d %d", &a, &b);
  resto = a%b;
  printf("\nO RESTO da divisao de %d por %d eh %d", a, b, resto);
  return 0;
}
