#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char palavra[500] = {0};
    int tam;
    
    fgets(palavra, 500, stdin);
    

    for(int i; i < 500; i++){
        if(palavra[i] == '4'){
            palavra[i] = 'a';
        }
        if(palavra[i] == '5'){
            palavra[i] = 'e';
        }
        if(palavra[i] == '1'){
            palavra[i] = 'i';
        }
        if(palavra[i] == '0'){
             palavra[i] = 'o';
         }
        if(palavra[i] == '2'){
              palavra[i] = 'u';
          }

    }
    for(int j = 0;j < 499; j++){
        if(palavra[0])palavra[0] = toupper(palavra[0]);
        if(palavra[j] == '.')palavra[j + 2] = toupper(palavra[j + 2]);
    }
    
    
    
    printf(" %s",palavra);

    return 0;

   
}