#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num1, quadrado1 = 0, quadrado2 = 0;
    do
    
    {   scanf("%d",&num1);
        quadrado1 = num1/2;
        quadrado2 = (num1/2) + 1;
        quadrado1 = pow(quadrado1,2);
        quadrado2 = pow(quadrado2,2);
        if(num1 % 2 != 0)printf("%d - %d\n",quadrado2,quadrado1);

    }
    while(num1 != 0);
	return 0; 
}