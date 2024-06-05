/*
 ============================================================================
 Name        : prj_do_while.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Soma de 2 numeros
int main(void) {
	//Declaração de variaveis

	int x, y, result, cont;
	cont = 1;
	//Do while e um loop assim como for e while
	do {
		printf("Digite 2 números para serem somados\n");
		scanf("%d %d", &y,&x);

		result = y+x;

		printf("A soma é %d",result);
		cont++;
	}while(cont<=3);

}
//Do while com if else
//para saber se e impar ou par
//o loop so vai parar quando e digitado o número 0

int main(void){
	//Declara as variaveis
	int contpar = 0, contimpar = 0,num;
	do{//Faça
		printf("Digite um número(para encerrar digite 0):");
		scanf("%d",&num);
		if(num!=0){
			if(num % 2 == 0 ){
				contpar= contpar + 1;
			}else{
			contimpar = contimpar + 1;
			}
		}
	}while(num!=0);
printf("A quantidade de números pares é:%d\n",contpar);
printf("A quantidade de números impares é:%d\n",contimpar);
return 0;
}
//programa para ler a quantidade de numeros escritos, ele mostra a quantidade quando e digitado -1
int main(void){
    //Declaração de variáveis
    int num, contnum=0;

    do{
        printf("Digite um número; para encerrar o programa digte -1:");
        scanf("%d",&num);
        if(num!=-1){
            contnum=contnum+1;
        }
    }while(num!=1);
    printf("A quantidade de números digitaos é:%d\n",contnum);

    return 0;
}
//Do while com switch case
int main(void){
    //Declaração de variáveis
    int escolha;

    do{
        printf("Menu:\n");
        printf("1.Opção 1\n");
        printf("2.Opção 2\n");
        printf("3.Sair\n");

        printf("Escolha  uma opção:");
        scanf("%d",&escolha);

        switch(escolha){
            case 1:
            printf("Você escolheu a opção 1.\n");
            break;
            case 2:
            printf("Você escolheu a opção 2.\n");
            break;
            case 3:
            printf("Saindo do programa");
            break;
            default:
            printf("Opção inválida, tente novamente.\n");
        }
 }while(escolha !=3);

    return 0;
}
