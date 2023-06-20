#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct{
    
    char nome[50];
    char cor[20];
    char tamanho;

} Info;

int main(void){

    int contador;
    int contador2;
    int flag = 1;
    int numero;

    while(flag != 0){
        
        scanf("%d", &numero);
        Info camisas[numero];

        // printf("%d....\n",numero);
        // printf("%d..\n",flag);
        
        if(numero == 0)flag = 0;

        else{
            for(contador = 0; contador < numero; contador++){
                scanf(" %[^\n]", camisas[contador].nome);
                scanf(" %s", camisas[contador].cor);
                scanf(" %c", &camisas[contador].tamanho);
            }
            for(contador = 0; contador < numero; contador++){
                for(contador2 = 0; contador2 < numero -1 ; contador2++){
                    if(strcmp(camisas[contador2].nome, camisas[contador2 + 1].nome) > 0){
                        
                        Info aux = camisas[contador2];
                        camisas[contador2] = camisas[contador2 + 1];
                        camisas[contador2 + 1] = aux;
                    }
                }
            }
            for(contador = 0; contador < numero; contador++){
                for(contador2 = 0; contador2 < numero - 1; contador2++){
                    if(camisas[contador2].tamanho < camisas[contador2 + 1].tamanho){
               
                        Info aux = camisas[contador2];
                        camisas[contador2] = camisas[contador2 + 1];
                        camisas[contador2 + 1] = aux;
                    }
                }
            }
            for(contador = 0; contador < numero; contador++){
                for(contador2 = 0; contador2 < numero - 1; contador2++){
                    if(strcmp(camisas[contador2].cor, camisas[contador2 + 1].cor) > 0){
                        
                        Info aux = camisas[contador2];
                        camisas[contador2] = camisas[contador2 + 1];
                        camisas[contador2 + 1] = aux;
                    }
                }
            }
            for(contador = 0; contador < numero; contador++){
                for(contador2 = 0; contador2 < numero - 1; contador2++){
                    if(strcmp(camisas[contador2].cor, camisas[contador2 + 1].cor) == 0 && (camisas[contador2].tamanho < camisas[contador2 + 1].tamanho) && strcmp(camisas[contador2].cor, camisas[contador2 + 1].cor) < 0){
                        
                        Info aux = camisas[contador2];
                        camisas[contador2] = camisas[contador2 + 1];
                        camisas[contador2 + 1] = aux;
                    }
                }
            }
            
        for(contador = 0; contador < numero; contador++){
            printf("%s ",camisas[contador].cor);
            printf("%c ",camisas[contador].tamanho);
            printf("%s\n",camisas[contador].nome);
        }
        printf("\n");

    }
    }
}