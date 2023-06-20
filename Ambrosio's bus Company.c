#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct{
    char data[20];
    char origem[20];
    char destino[20];
    char hora[20];
    int poltrona;
    int idade;
    char nome[30];
    
}Info;


int main() {
    
    int contador1,acumulador = 0,somatorio = 0, media = 0,numero = 0;
    Info dado [45];
    
    scanf("%d",&numero);
    
    for(contador1 = 0; numero != -1; contador1++){
        scanf(" %[^\n]",dado[contador1].data);
        scanf(" %[^\n]",dado[contador1].origem);
        scanf(" %[^\n]",dado[contador1].destino);
        scanf(" %[^\n]",dado[contador1].hora);
        scanf("%d",&dado[contador1].poltrona);
        scanf("%d",&dado[contador1].idade);
        scanf(" %[^\n]",dado[contador1].nome);
        acumulador++;
        scanf("%d",&numero);
        somatorio += dado[contador1].idade;
    }
    
    media = somatorio/acumulador;
    //printf("%d,%d",media,somatorio,acumulador);

    for(contador1 = 0; contador1 <= acumulador; contador1++){
        if(dado[contador1].idade > media && (dado[contador1].poltrona % 2) == 0)printf("%s\n",dado[contador1].nome);
    }

	return 0;
}