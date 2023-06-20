#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numPessoas,numAmigos,tempo1,tempo2,tempo3,grau1,grau2,grau3,shame1,shame2,shame3;
    float numIdeal;
    scanf("%d %d",&numPessoas,&numAmigos);
    scanf("%d %d",&tempo1,&grau1);
    scanf("%d %d",&tempo2,&grau2);
    scanf("%d %d",&tempo3,&grau3);
    
numIdeal=sqrt(numPessoas);
    
    if(numIdeal>numAmigos)printf("N�o cantarei, desculpa.\n");
    else{
        shame1=(tempo1*tempo1)*grau1;
        shame2=(tempo2*tempo2)*grau2;
        shame3=(tempo3*tempo3)*grau3;
        
        if(shame1<shame2 && shame1<shame3)printf("Voc� deve cantar a m�sica 1, boa sorte!\n");
        else if(shame1<shame2 && shame1==shame3)printf("Voc� deve cantar a m�sica 1, boa sorte!\n");
        else if(shame2<shame3 && shame2<shame1)printf("Voc� deve cantar a m�sica 2, boa sorte!\n");
        else if(shame3<shame2 && shame3<shame1)printf("Voc� deve cantar a m�sica 3, boa sorte!\n");
        else if(shame1==shame2 && shame2<shame3)printf("Voc� deve cantar a m�sica 1, boa sorte!\n");
        else if(shame2==shame3 && shame3<shame1)printf("Voc� deve cantar a m�sica 2, boa sorte!\n");
        else if(shame3==shame1 && shame3<shame2)printf("Voc� deve cantar a m�sica 1, boa sorte!\n");
        else if(shame3==shame2==shame1)printf("Voc� deve cantar a m�sica 1, boa sorte!\n");

    }
    
    return 0;
        }
