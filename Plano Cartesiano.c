#include<stdio.h>

int main(){
int x,y;
scanf("%d",&x);
scanf("%d",&y);
 if(x>0){
     if(y>0)printf("Primeiro Quadrante\n");
     else if(y<0)printf("Quarto Quadrante\n");
     else
     printf("Sobre o eixo x\n");
 }
 else if(x<0){
     if(y>0)printf("Segundo Quadrante\n");
     else if(y<0)printf("Terceiro Quadrante\n");
     else
     printf("Sobre o eixo x\n");

 }
 else
 {if(y!=0)printf("Sobre o eixo y\n");
 else
 printf("Sobre a origem\n");
 }
 

return 0;
}