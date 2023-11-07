/*
Exerc�cio 10: 
Crie um programa que solicite ao usu�rio dois n�meros e uma opera��o matem�tica (+, -). Utilize o switch case para realizar a opera��o desejada e exibir o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int n1,n2,resultado;
  char operador;

  printf("Informe o primeiro n�mero: ");
  scanf("%i",&n1);

  fflush(stdin);

  printf("\nInforme um operador (+/-):");
  scanf("%c",&operador);
  
  while(operador!='+' && operador!='-'){
    printf("\nPor favor, informe um operador v�lido!");
    scanf("%c",&operador);
  }
  printf("\nInforme o segundo n�mero: \n");
  scanf("%i",&n2);
  
  switch (operador)
  {
  case '+':
    resultado=n1+n2;
    printf("\n%i",n1);
    printf("%c",operador);
    if (n2<0){
      printf("(%i)",n2);
    }else{
      printf("%i",n2);
    }
    printf("=");
    printf("%i",resultado);
    break;

  case '-':
    resultado=n1-n2;
    printf("\n%i",n1);
    printf("%c",operador);
    if (n2<0){
      printf("(%i)",n2);
    }else{
      printf("%i",n2);
    }
    printf("=");
    printf("%i",resultado);
    break;
  }

  return 0;
}