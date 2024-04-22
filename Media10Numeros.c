 #include <stdio.h>
int main() {
    int  num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, soma , media;
    printf("Digite o primeiro número: ");
  scanf("%d", &num0);
    printf("Digite o segundo número: ");
  scanf("%d", &num1);
    printf("Digite o terceiro número: ");
scanf("%d", &num2);
  printf("Digite o quarto número: ");
scanf("%d", &num3);
  printf("Digite o quinto número: ");
  scanf(" %d", &num4);
  printf("Digite o sexto número: ");
  scanf(" %d", &num5);
  printf("Digite o sétimo número: ");
  scanf(" %d", &num6);
  printf("Digite o oitavo número: ");
  scanf(" %d", &num7);
  printf("Digite o nono número: ");
  scanf(" %d", &num8);
  printf("Digite o décimo número: ");
  scanf(" %d", &num9);
  soma = num0 + num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;
  printf("A soma dos números é: %d\n", soma);
  media = soma / 10;
  printf(" a media é: %d\n", media);
  return 0;
}