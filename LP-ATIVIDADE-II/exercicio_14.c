/*
Exercício 14: 
Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares e quantos são ímpares. Além disto, deve ser exibido a média aritmética de números pares e impares. Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

 Deve-se interromper a leitura dos dados quando for digitado um valor negativo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int numero,par=0,impar=0;
  float mediaPar=0,mediaImpar=0;

  do{
    printf("Informe um número inteiro: ");
    scanf("%i",&numero);

    if (numero>0 && numero%2==0){
      par++;
      mediaPar+=numero;
    }else if(numero>0){
      impar++;
      mediaImpar+=numero;
    }
  }while(numero>0);

  mediaPar/=(float)par;
  mediaImpar/=(float)impar;

  //system("clear || cls");

  printf("Quantidade de PAR  : %i\n",par);
  printf("Média PAR  : %.1f\n",mediaPar); 
  printf("\nQuantidade de IMPAR: %i\n",impar);  
  printf("Média IMPAR: %.1f\n",mediaImpar); 

  return 0;
}