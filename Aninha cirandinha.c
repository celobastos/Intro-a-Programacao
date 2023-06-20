#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int rodadas = 0, rodadas2 = 0, contador2 = 0, acum= 0, checkpoint = 0, flag = 0, contador1 = 0;
    scanf("%d", &rodadas);
    
    while(contador1 < rodadas){
        scanf("%d",&rodadas2);
        
        int vet[rodadas2];
        
        for(contador2 = 0; contador2 < rodadas2; contador2++){
            vet[contador2] = 0;
        }
        for(contador2 = 0; contador2 < rodadas2; contador2++){
            scanf("%d",&vet[contador2]);
        }
        if(rodadas2 != 1){
            
            for (contador2 = 0; contador2 < rodadas2 * 2; contador2++){
                flag = (contador2 % rodadas2) + 1;
                if (contador2 == rodadas2 - 1)
                {
                    flag = 0;
                }
                if(vet[contador2 % rodadas2] - vet[flag] == -1){
                    acum++;
                    
                    if(acum == rodadas2 - 1){
                        acum++;
                        checkpoint = checkpoint + acum;
                        acum = 0;
                    }
                }
                if(vet[contador2 % rodadas2] - vet[flag] == 1){
            
                    acum++;
                    
                    if(acum == rodadas2 - 1){
                        checkpoint = checkpoint + acum;
                        acum = 0;
                    }
                }
                if(vet[contador2 % rodadas2] - vet[flag] != 1 && vet[contador2 % rodadas2] - vet[flag] != -1){
                    acum = 0;
                }
            }
            if(checkpoint > rodadas2 - 1){
                printf("SIM, HORARIO\n");
            }
            else if(checkpoint == rodadas2 - 1){
                printf("SIM, ANTI-HORARIO\n");
            }
            else{
                printf("NAO\n");
            }
        }
        else{
            printf("SIM, HORARIO\n");
        }
        acum = 0;
        checkpoint = 0;
        contador1++;
    }
    return 0;
}