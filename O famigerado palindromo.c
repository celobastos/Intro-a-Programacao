#include <stdio.h>
#include <string.h>

int main(void){
    char string[100] = {0};
    int flag = 1;


    scanf(" %s", string);
    int tam = strlen(string);

    for(int i = 0; i <= tam/2; i++){
        if(string[i] != string[tam-i-1]){
            flag = 0;
        }
    }
    if(flag)printf("S");
    else printf("N");
}