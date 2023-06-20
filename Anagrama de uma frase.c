#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char string[101] = {0},string1[101] = {0};
    int i,acumulador1 = 0,acumulador2 = 0,j,acumulador = 0;
    //fgets(string, 500, stdin);
    
    scanf(" %[^\n]",string);
    scanf(" %[^\n]",string1);//fgets(string1, 500, stdin);
    int len = strlen(string);
    int len1 = strlen(string1);
    
    for(i = 0; i < len; i++){
        string[i] = tolower(string[i]);
    }
    for(i = 0; i < len1; i++){
        string1[i] = tolower(string1[i]);
    }
    for(i = 0; i < len; i++){
        if (string[i] == '!' || string[i] == '-' || string[i] == '?' || string[i] == '.' || string[i] == ',' || string[i] == ' ')acumulador1++;
    }
    for(i = 0; i < len1; i++){
        if (string1[i] == '!' || string1[i] == '-' || string1[i] == '?' || string1[i] == '.' || string1[i] == ',' || string1[i] == ' ')acumulador2++;
    }

    for(i = 0; i < len ; i++){
        for(j = 0; j < len1 ; j++){
            if(string[i] == string1[j]){
            acumulador++;
            i++;
            }
        }
    }
    len = len - acumulador1;
    len1 = len1 - acumulador2;
    if(len == len1 )printf("True");
    else printf("False");

    return 0;
}