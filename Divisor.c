#include <stdio.h>

int main(){
    
    int dividendo,numero,frequencia,divisor=0,maiorFrequencia=0;

    scanf("%d",&numero);

    for(dividendo=2;dividendo<=numero;dividendo++){

        frequencia=0;
        
        while(numero%dividendo==0){
            
            numero=numero/dividendo;
            frequencia++;
        }
        if(frequencia>maiorFrequencia){
            
            maiorFrequencia=frequencia;
            divisor=dividendo;
        }
        
        
    } 
    printf("mostFrequent: %d, frequency: %d",divisor,maiorFrequencia);

    return 0;
}