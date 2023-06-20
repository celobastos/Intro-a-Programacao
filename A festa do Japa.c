#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int saq,manj,yak,pessoas;
    
    scanf("%d %d %d %d",&saq,&manj,&yak,&pessoas);
    
    if((4*pessoas)<=(15*saq) && (3*pessoas)<=yak && (5*pessoas)<=manj)printf("Partiu Festa do Japa!\n");
    if((4*pessoas)>(15*saq) && (3*pessoas)>yak && (5*pessoas)>manj)printf("Partiu Festa do Japa...Japacama\n");
   else{
        if((15*saq)<(pessoas*4) && ((3*pessoas)>yak || (5*pessoas>manj))){
            saq=(saq*15)-(pessoas*4);
            if((pessoas*5)>manj && (pessoas*3)<=yak){
                manj=manj-(pessoas*5);
                printf("Faltaram %d saques e %d manjus",(-1*saq),(-1*manj));
            }
            if((pessoas*3)>yak && (pessoas*5)<=manj){
                yak=yak-(pessoas*3);
                printf("Faltaram %d saques e %d yakitoris",(-1*saq),(-1*yak));
            }
        }
        if((15*saq)<(pessoas*4) && (3*pessoas)<=yak && (5*pessoas)<=manj){
            saq=(saq*15)-(pessoas*4);
            printf("Faltaram %d saques",(-1*saq));
            }
        if((3*pessoas)>yak && (5*pessoas)>manj && (15*saq)>=(pessoas*4)){
            yak=yak-(pessoas*3);
            manj=manj-(pessoas*5);
            printf("Faltaram %d manjus e %d yakitoris",(-1*manj),(-1*yak));
        }
        if((3*pessoas)>yak && (15*saq)>=(pessoas*4) && (5*pessoas)<=manj){
             yak=yak-(pessoas*3);
             printf("Faltaram %d yakitoris",(-1*yak));
        }
        if((3*pessoas)<=yak && (15*saq)>=(pessoas*4) && (5*pessoas)>manj){
            manj=manj-(pessoas*5);
            printf("Faltaram %d manjus",(-1*manj));
        }   
    }
	return 0;
}