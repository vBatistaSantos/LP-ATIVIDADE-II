/*
Desenvolva um programa que solicite ao usu�rio um n�mero inteiro positivo e fa�a uma contagem regressiva a partir desse n�mero at� zero. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int i,numero;

  printf("Informe um n�mero inteiro positivo: ");
  scanf("%i",&numero);
  while(numero<1){
    printf("\nPor favor, informe um n�mero INTEIRO POSITIVO: ");
    scanf("%i",&numero);
  }

  for(i=numero;i>=0;i--){
    printf("\n%i",i);
  }
  


  return 0;
}