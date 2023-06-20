#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct 
{
    int idade;
    char nome[51];
    char sexo;
    char estadoCivil;
    int amigos;
    int fotos;
}banco;

int main(){
    
    banco info;
    int contador,loops;

    scanf("%d",&loops);
    for(contador = 0; contador < loops; contador++){
        scanf("%d",&info.idade);
        scanf(" %[^\n]",info.nome);
        scanf(" %c",&info.sexo);
        scanf(" %c",&info.estadoCivil);
        scanf("%d",&info.amigos);
        scanf("%d",&info.fotos);

        printf("Idade: %d\n",info.idade);
        printf("Nome: %s\n",info.nome);
        printf("Sexo: %c\n",info.sexo);
        printf("Estado Civil: %c\n",info.estadoCivil);
        printf("Numero de amigos: %d\n",info.amigos);
        printf("Numero de fotos: %d\n\n",info.fotos);
    }


}
