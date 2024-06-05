#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numeros[5] = {1,2,3,4,5};
    char got7[][60]={ "Jay B", "Mark","Jackson", "Park Jin-young","Choi younjae","Bambam","Kim Yugyeom", "GOT7"};

    printf("Elementos do array de inteiros:");
    for (int i = 0; i < 5 i++){
        printf("%d", numeros[i]);
    }
    printf("\nGOT7:");
    for (int i = 0; i < 8 ; i++){
        printf("%s ", got7[i]);
    }
    return 0;
}