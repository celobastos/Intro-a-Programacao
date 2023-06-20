#include <stdio.h>

int main(){
    int diaInicial,mesInicial,anoInicial,diaFinal,mesFinal,anoFinal,diferenca=0;
    scanf("%d/%d/%d\n%d/%d/%d",&diaInicial,&mesInicial,&anoInicial,&diaFinal,&mesFinal,&anoFinal);

    while(anoInicial<anoFinal){
        anoInicial++;
        if((( anoInicial % 4 == 0 && anoInicial % 100 != 0 )))diferenca+=366;
        else diferenca+=365;
        
    }
    while(anoInicial==anoFinal && mesInicial>mesFinal){
            
        mesInicial--;
        if(mesInicial== 1 || mesInicial== 3 || mesInicial== 5 || mesInicial== 7 || mesInicial== 8 || mesInicial== 10 || mesInicial==12){
            diferenca-=31;}
        if(mesInicial== 4 || mesInicial== 6 || mesInicial==9  || mesInicial== 11 )diferenca-=30;
        if(mesInicial== 2 && (( anoInicial % 4 == 0 && anoInicial % 100 != 0 ) || anoInicial % 400 == 0))diferenca-=29;
        if(mesInicial== 2 && (anoInicial % 4 !=0))diferenca-=28;
        } 

    while(anoInicial==anoFinal && mesFinal>mesInicial){
        mesInicial++;
        if(mesInicial== 1 || mesInicial== 3 || mesInicial== 5 || mesInicial== 7 || mesInicial== 8 || mesInicial== 10 || mesInicial==12)diferenca+=31;
        if(mesInicial== 4 || mesInicial== 6 || mesInicial==9  || mesInicial== 11 )diferenca+=30;
        if(mesInicial== 2 && (( anoInicial % 4 == 0 && anoInicial % 100 != 0 ) || anoInicial % 400 == 0))diferenca+=29;
        if(mesInicial== 2 && (anoInicial % 4 !=0))diferenca+=28;
        if(diaFinal<diaInicial)diferenca+=diaInicial-diaFinal;

    }
    if(diaFinal < diaInicial)diaInicial = (diaInicial * -1);
    while(anoInicial == anoFinal && mesFinal == mesInicial && diaInicial < diaFinal){
        diaInicial++;
        diferenca++;
    }
    
    
    printf("%d\n",diferenca);
    return 0;
}