/*
Desenvolva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem regressiva a partir desse número até zero. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int i,numero;

  printf("Informe um número inteiro positivo: ");
  scanf("%i",&numero);
  while(numero<1){
    printf("\nPor favor, informe um número INTEIRO POSITIVO: ");
    scanf("%i",&numero);
  }

  for(i=numero;i>=0;i--){
    printf("\n%i",i);
  }
  


  return 0;
}