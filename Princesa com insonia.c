#include <stdio.h>


int main(){

    int k,i,m,n,d,dFinal,dragoes=0;
    scanf("%d\n%d\n%d\n%d\n%d",&k,&i,&m,&n,&dFinal);

   dragoes=0;
 for (d = 1; d <= dFinal; d++)
 {  
     if((d%k==0 ||d%i==0||d%m==0||d%n==0) && d>=1 && d<10000)dragoes++;
 }
 printf("%d\n",dragoes);
 
    
   
     
}