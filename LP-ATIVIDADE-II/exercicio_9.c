/*
Exercício 9: 
Em um projeto sobre números primos, implemente um programa que solicite ao usuário um número inteiro e verifique se ele é um número primo utilizando o switch case. Exiba a mensagem "Número primo" caso seja primo, ou "Número não primo" caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


int main(){

  setlocale(LC_ALL,"portuguese");

  int i,numero;
  bool primo = true;

  printf("Informe um número inteiro positivo: ");
  scanf("%i",&numero);
  while(numero<1){
    printf("\nPor favor, informe um número INTEIRO POSITIVO: ");
    scanf("%i",&numero);
  }

  for(i=2;i<numero;i++){
    //printf("%i / %i\n",numero,i);
    if(numero%i==0 && numero!=2){
      primo = false;
      break;
    }
  }
  
  switch (primo)
  {
  case true:
    printf("%i é primo.",numero);
    break;

  default:
    printf("%i NÃO É primo.",numero);
    break;
  }

  return 0;
}