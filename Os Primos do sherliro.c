#include <stdio.h>

int main(void){

    long long int codigo = 0,cont = 1, acumulador = 0;
    int teto = 0, tentativa = 0, cont2 = 0, divisor = 0, acumulador1 = 1, senha = 0;
    double  soma = 0;


    while(tentativa != 3)
        {
            scanf("%lld",&codigo);
            cont2 = 2;
            while(cont2 <= codigo)
            {
                if((codigo % cont2) == 0)
                {
                    soma = soma + (cont2 * 1.0/cont);
                    cont++;
                    codigo = codigo/cont2;  
                }
                else cont2++;
            }

            teto = soma;
            
            if(soma>teto)teto++;

            divisor = 0;
            acumulador1 = 1;
            while(acumulador1 <= teto)
            {
                if((teto % acumulador1) == 0)divisor++;
                acumulador1++;
            }
            if(senha == 0)
            {
                if(divisor == 2)
                {
                    printf("SHERLIRO SALVOU MULITTLE\n");
                    senha++;
                }
                else {printf("ERRO\n");}

            }
            else if(senha != 0)printf("SINAL OFF\n");

            divisor = 0;
            teto = 0;
            cont = 1;
            soma = 0;
            tentativa++;
        }
}