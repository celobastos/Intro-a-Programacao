#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float dinheiroT,precoprop1,precoprop2,divida,precoprop2final,precoprop1final;
    int prop1,prop2;
    scanf("%f %d %d %f %f %f",&dinheiroT,&prop1,&prop2,&precoprop1,&precoprop2,&divida);

    if(prop1==1 && prop2==0){
        dinheiroT=dinheiroT-precoprop1;
        if(dinheiroT<0){
            dinheiroT=(-1*dinheiroT)+divida;
           printf("Sherliro vai ser perseguido hoje e ainda ta sem nave\nfaltam %.2f Napoleocoins",dinheiroT);
            }
        else{
            dinheiroT=dinheiroT-divida;
            if(dinheiroT<0){
                dinheiroT=(-1*dinheiroT);
                printf("Sherliro consertou mas ta lascado com o Jabbavitz\nfaltam %.2f Napoleocoins",dinheiroT);
            }
            else
            printf("Sherliro livre do Jabbavitz e podendo voar");   
        }
    }
    if(prop1==0 && prop2==1){
        dinheiroT=dinheiroT-precoprop2;
        if(dinheiroT<0){
            dinheiroT=(-1*dinheiroT)+divida;
           printf("Sherliro vai ser perseguido hoje e ainda ta sem nave\nfaltam %.2f Napoleocoins",dinheiroT);
            }
        else{
            dinheiroT=dinheiroT-divida;
            if(dinheiroT<0){
                dinheiroT=(-1*dinheiroT);
                printf("Sherliro consertou mas ta lascado com o Jabbavitz\nfaltam %.2f Napoleocoins",dinheiroT);
            }
            else
            printf("Sherliro livre do Jabbavitz e podendo voar");   
        }
    }
    if(prop2==1 && prop1==1){
        if(precoprop2>precoprop1){
            precoprop2final=precoprop2*0.88;
            dinheiroT=dinheiroT-(precoprop2final+precoprop1);
            if(dinheiroT<0){
                dinheiroT=(-1*dinheiroT)+divida;
                printf("Sherliro vai ser perseguido hoje e ainda ta sem nave\nfaltam %.2f Napoleocoins",dinheiroT);
            }
            else{
                dinheiroT-=divida;
                if(dinheiroT<0){
                dinheiroT=(-1*dinheiroT);
                printf("Sherliro consertou mas ta lascado com o Jabbavitz\nfaltam %.2f Napoleocoins",dinheiroT);
            }
            else
            printf("Sherliro livre do Jabbavitz e podendo voar");
                
            }
        }
        else {
            precoprop1final=precoprop1*0.88;
            dinheiroT-=(precoprop2+precoprop1final);
            if(dinheiroT<0){
                dinheiroT=(-1*dinheiroT)+divida;
                printf("Sherliro vai ser perseguido hoje e ainda ta sem nave\nfaltam %.2f Napoleocoins",dinheiroT);
            }
            else{
                dinheiroT-=divida;
                if(dinheiroT<0){
                dinheiroT=(-1*dinheiroT);
                printf("Sherliro consertou mas ta lascado com o Jabbavitz\nfaltam %.2f Napoleocoins",dinheiroT);
            }
            else
            printf("Sherliro livre do Jabbavitz e podendo voar");   
            }
             }
    }
    if(prop2==0 && prop1==0){
        dinheiroT=dinheiroT-divida;
        if(dinheiroT<0){
                dinheiroT=(-1*dinheiroT);
                printf("Sherliro consertou mas ta lascado com o Jabbavitz\nfaltam %.2f Napoleocoins",dinheiroT);
            }
        else printf("Sherliro livre do Jabbavitz e podendo voar");
    }
    return 0;
}