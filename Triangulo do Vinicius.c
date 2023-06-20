int main(){

    char letraLimite,letraInicial='A',letraSequencia,pontos;

    scanf("%c",&letraLimite);

    for(letraInicial;letraInicial<=letraLimite;letraInicial++){


        for(pontos=1;pontos<=letraLimite-letraInicial;pontos++){
            printf(".");
        }
        for(letraSequencia ='A';letraSequencia <= letraInicial;letraSequencia++){
            printf("%c",letraSequencia);
        }
        for(letraSequencia=letraSequencia-2;letraSequencia >= 'A';letraSequencia--){
            printf("%c",letraSequencia);
        }
        for(pontos=1;pontos<=letraLimite-letraInicial;pontos++){
            printf(".");
            
        }
        printf("\n");
    }
    return 0;
}