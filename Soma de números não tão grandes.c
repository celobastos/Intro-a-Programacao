#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char string[50] = {0},string1[7] ={0};
    int numero, i, j, len;
    long long int  soma = 0;
    scanf(" %d",&numero);
    for(i = 0; i < numero; i++){
        scanf(" %24[^\n]",string);
        for(j = 0; j < 6; j++){
            string1[j] = string[j];
        }
        if(string1[0] == '-')soma += atoi(string1);
        else soma += (atoi(string1)/10); 
    }
    printf("%d00000000000000\n",soma);
    
    return 0;
}