#include <stdio.h>
#define MAX_COL 100
#define MAX_ROW 100
void preencherMatriz();
int main(void){
int matrizmain[MAX_COL];
int i,j;
  printf("\nquantidade de linhas:");
  scanf("%d", &i);
printf("\nquantidade de colunas:");
  scanf("%d", &j);
preencherMatriz(matrizmain,2,2);
return 0; 
}
void preencherMatriz ( int matriz[][MAX_COL], int linhas, int colunas) {
for( int i = 0; i < linhas; i++){
  for(int  j = 0; j < colunas;j++){
    printf("digite o valor para a posição [%d][%d]: ", i, j);
    scanf("%d", &matriz[i][j]);}
}
}