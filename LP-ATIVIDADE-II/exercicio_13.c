/*
Exercício 13: 
Crie um programa que solicite do usuário dois números inteiros e informe qual destes números é o maior e qual é o menor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int n1,n2;

  printf("Informe o 1º número inteiro:");
  scanf("%i",&n1);

  printf("Informe o 1º número inteiro:");
  scanf("%i",&n2);

  n1>n2?printf("\n%i\n",n1):printf("\n%i\n",n2);

  return 0;
}