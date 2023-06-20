#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ovo=0,laranja=0,banana=0,leite=0,ovoLoja=0,laranjaLoja=0,bananaLoja=0,leiteLoja=0,totalBanana,totalOvo,totalLeite,totalLaranja;
    scanf("%d %d %d %d",&laranja,&banana,&ovo,&leite);
    totalOvo=ovo+ovoLoja;
    totalLaranja=laranja+laranjaLoja;
    totalLeite=leite+leiteLoja;

    if(ovo<0||laranja<0||banana<0||leite<0)printf("lurn maf :(\n");
    
    else {
        if(laranja==0){
            laranjaLoja=pow(banana,2);
            if(laranjaLoja>0){
                bananaLoja=2;
                if((bananaLoja+banana)>ovo){
                ovoLoja=laranjaLoja-ovo;
                if(ovoLoja>0){
                    if(leite<2000)leiteLoja=2000-leite;
                }
                else{leiteLoja=500;
                ovoLoja=0;}
            }
            }
            else{
                bananaLoja=0;
                if(banana>ovo){
                    ovoLoja=laranjaLoja;
                }
                if(ovoLoja>0){
                    if(leite<2000)leiteLoja=2000-leite;
                }
                else{
                    leiteLoja=500;
                    ovoLoja=0;
                }
            }
        }
        if (ovoLoja==0 &&  leite==2000) leiteLoja=500;
        printf("%d laranjas\n%d bananas\n%d ovos\n%d mL de leite\n",laranjaLoja,bananaLoja,ovoLoja,leiteLoja);
    }
    return 0;
}