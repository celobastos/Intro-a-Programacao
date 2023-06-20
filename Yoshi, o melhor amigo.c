#include <stdio.h>
#define MIN(X,Y) ((X) < (Y) ? : (X) : (Y))
#include <stdio.h>
#define MIN(X,Y) ((X) < (Y) ? : (X) : (Y))
#define MAX(X,Y) ((X) > (Y) ? : (X) : (Y))

int main(){

    int verde=80,verdePreco,vermelho=100,vermelhoPreco,roxo=120,roxoPreco,amarelo=80,amareloPreco,beneAmarelo,beneRoxo,beneVerde,beneVermelho,moedas;

    scanf("%d",&moedas);
    scanf("%d %d %d %d",&verdePreco,&vermelhoPreco,&roxoPreco,&amareloPreco);

    beneVerde=verde/verdePreco;
    beneVermelho=vermelho/vermelhoPreco;
    beneRoxo=roxo/roxoPreco;
    beneAmarelo=amarelo/amareloPreco;

    if(moedas>verdePreco || moedas>amareloPreco || moedas>roxoPreco || moedas>vermelhoPreco){
        if(beneVerde>=beneVermelho && beneVerde>= beneRoxo && beneVerde>=beneAmarelo)printf("Verde");
        if(beneVermelho>beneVerde && beneVermelho>=beneRoxo && beneVermelho>= beneAmarelo)printf("Vermelho");
        if(beneRoxo>beneVerde && beneRoxo>beneVermelho && beneRoxo>=beneAmarelo)printf("Roxo");
        if(beneAmarelo>beneRoxo && beneAmarelo> beneVerde & beneAmarelo>beneVermelho)printf("Amarelo");
    }
    else printf("Acho que vou a pe :(\n");
    return 0;
}