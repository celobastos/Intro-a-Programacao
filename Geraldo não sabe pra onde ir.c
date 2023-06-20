#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double orcam=0,x=0,y=0,a=0,b=0,c=0,d=0,gas1=0,ped1=0,gas2=0,ped2=0,desloc1=0,desloc2=0,custo1=0,custo2=0;
    scanf("%lf\n %lf %lf %lf %lf %lf %lf\n %lf %lf\n %lf %lf",&orcam,&x,&y,&a,&b,&c,&d,&gas1,&ped1,&gas2,&ped2);
    desloc1=sqrt(pow((x-a),2)+pow((y-b),2))*2;
    desloc2=sqrt(pow((x-c),2)+pow((y-d),2))*2;
   

    custo1=((desloc1/12)*gas1)+ped1;
    custo2=((desloc2/12)*gas2)+ped2;
    
   

    if(orcam>=custo1 && orcam<custo2)printf("Ele vai para o destino 1\n%.2lf\n",custo1);
    if(orcam>=custo2 && orcam<custo1)printf("Ele vai para o destino 2\n%.2lf\n",custo2);
    if(custo2==custo1 && orcam>=custo2) printf("Tanto faz...\n%.2lf",custo2);
    if(orcam>=custo2 && orcam>=custo1){
        if((custo2+custo1)>=orcam && custo2 != custo1){
            if(custo2>custo1)printf("Ele vai para o destino 1\n%.2lf\n",custo1);
            if(custo1>custo2)printf("Ele vai para o destino 2\n%.2lf\n",custo2);
            
        }
        if(custo1!=custo2 && (custo1+custo2)<orcam){
            printf("Ele vai visitar os dois lugares\n%.2lf\n",(custo1+custo2));
        }
    }
    if(orcam<custo1 && orcam<custo2){
        printf("Ele vai ficar em casa\n-1",(custo2+custo1));
    }

	return 0;
}