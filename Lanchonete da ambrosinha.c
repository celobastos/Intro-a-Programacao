#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int led;
    char nome[1000];
    float preco;
}Cardapio;

int main(){

    int cadastro, numero, qtd, contador,contador2,flag = 1;
    Cardapio info[1000];
    float somatorio = 0;

    scanf("%d",&cadastro);
    for(contador = 0; contador < cadastro; contador++){
        scanf("%d",&info[contador].led);
        scanf(" %[^\n]", info[contador].nome);
        scanf("%f",&info[contador].preco);
    }
    
    while(flag != 0){
        scanf("%d",&numero);
        if(numero != 0){
            scanf("%d",&qtd);
            
            if(qtd > 0)for(contador2 = 0; contador2 < 1001; contador2++)if(numero == info[contador2].led)somatorio += info[contador2].preco * qtd;
        }
        if(numero == 0)flag = 0;    
    }
    
    printf("%.2f",somatorio);
}