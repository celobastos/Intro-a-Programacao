#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int  primo=0, primo2=0, div = 0, numDiv=0, num = 2, num2 = 0, div2 = 0 ,numDiv2 = 0;
    double n, cont = 0, soma=0, serie=0, cont2 = 0;

    scanf("%lf",&n);

    while(cont < n)
    {   
        num++;
        primo2 = 0;
        num2 = 0;
        div = 0;
        numDiv = 0;
        
        while(div <= num)
        {   
            div++;
            if((num % div) == 0)numDiv++;
        }
        
        if(numDiv == 2 && num != 0)
        {   
            primo = num;
            num2 = primo + 2;
            
        }
            div2 = 0;
            numDiv2 = 0;
        
        while( div2 <= num2  && num != 0 )
        {   
            div2++;
            if((num2 % div2) == 0)numDiv2++;
        }
        
        if(numDiv2 == 2)primo2 = num2;
        
        if(numDiv == 2 && numDiv2 == 2)
            {serie = 1/(double)primo + 1/(double)primo2;
            soma = soma + serie;
            cont++;
            }
    }
    printf("%.10lf",soma);
    
	return 0;
}