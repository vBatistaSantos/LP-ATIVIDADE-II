/*
Exercício 10: 
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). Utilize o switch case para realizar a operação desejada e exibir o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int n1,n2,resultado;
  char operador;

  printf("Informe o primeiro número: ");
  scanf("%i",&n1);

  fflush(stdin);

  printf("\nInforme um operador (+/-):");
  scanf("%c",&operador);
  
  while(operador!='+' && operador!='-'){
    printf("\nPor favor, informe um operador válido!");
    scanf("%c",&operador);
  }
  printf("\nInforme o segundo número: \n");
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