#include <stdio.h>
#include <stdlib.h>
#include "mayor.h"

int main (){
int len;
int len2;
int valor;
int matris[len][len2];
int mayor;

    printf("\ningresa la cantidad de filas\n");
    scanf("%d", &len);

    printf("\ningresa la cantidad de filas\n");
    scanf("%d", &len2);

    printf("\n");

    for(int i = 2; i < (len + 2); i++){
        for (int j = 0; j < len2; j++){

            valor = rand() %200;
            matris[i][j] = valor;

          //  printf("[%d]\t", matris[i][j]);

        }
   // printf("\n");
    }
    for (int i = 2; i < (len + 2); i++){
        for (int j = 0; j < len2; j++){

            printf("[%d]  ", matris[i][j]);
        }
    printf("\n");
    }

return 0;

}
