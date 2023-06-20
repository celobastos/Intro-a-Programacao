#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 

int main() {
    int dia,mes,ano;
    
    scanf("%d %d %d",&dia,&mes,&ano);
    if(dia>0 && dia<=31 && mes>0 && mes<=12 && ano >=1900 && ano<=2100){
        if(mes==4 || mes==6 || mes==9 || mes==11){
            if(dia>=31)printf("invalida\n");
            else printf("valida\n");
        }
        if(mes==2){
            if(( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0){
                if(dia>29)printf("invalida\n");
                else printf("valida\n");
            }
            else{
                if(dia>28)printf("invalida\n");
                else printf("valida\n");
            }
        }
        if(mes==1 ||mes==3 || mes==5 || mes==7||mes==8||mes==10||mes==12)printf("valida\n");
        
    }

    else printf("invalida\n");

	return 0;
}