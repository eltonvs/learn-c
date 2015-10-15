#include <stdio.h>
int main(void){
  int a, b, soma;
  printf("Digite dois valores: ");
  scanf("%d", &a);
  scanf("%d", &b);
  soma = a + b;
  printf("A soma de %d + %d eh igual a %d", a, b, soma);
  return 0;
}
