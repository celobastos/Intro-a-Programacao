#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{  
  int voltas, contador = 0, contador2 = 0, acumulador = 0,contador1 = 0, local = 0, endereco = 0, flag = 0,localFinal;

  scanf("%d",&voltas);

  for(contador = 0;contador < voltas; contador++){
      scanf(" %d", &endereco);
      
      int array[endereco];
      
      for(contador1 = 0; contador1 < endereco; contador1++)array[contador1] = 0;

      for(contador2 = 0; contador2 < endereco; contador2++)scanf("%d",&array[contador2]);

      for(contador2 = 0; contador2 < endereco - 1; contador2++){
        if(array[contador2] > array[contador2 + 1]){
          acumulador++;
          if(acumulador > flag){
            flag = acumulador;
            local = contador2;
          }
            }
        else {
          if(acumulador > flag){
            flag = acumulador;
            local = contador2;
            acumulador = 0;
          }
          acumulador = 0;
        }
      }
      localFinal =(local - flag)+ 1;
      local = localFinal + flag;
      if(flag == 0)printf("0\n");
      else {
        printf("%d\n",flag + 1);
        for(localFinal; localFinal <= local; localFinal++)printf("%d ",array[localFinal]);
        printf("\n");
      }
      local = 0;
      localFinal = 0;
      flag = 0;
      acumulador = 0;
      contador2 = 0;
  }
  return 0;
}