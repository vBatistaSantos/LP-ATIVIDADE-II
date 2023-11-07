/*
Exerc�cio 14: 
Implemente um programa que solicite do usu�rio n�meros inteiros e verifique quantos n�meros s�o pares e quantos s�o �mpares. Al�m disto, deve ser exibido a m�dia aritm�tica de n�meros pares e impares. Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

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
    printf("Informe um n�mero inteiro: ");
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
  printf("M�dia PAR  : %.1f\n",mediaPar); 
  printf("\nQuantidade de IMPAR: %i\n",impar);  
  printf("M�dia IMPAR: %.1f\n",mediaImpar); 

  return 0;
}