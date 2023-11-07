/*
Exerc�cio 9: 
Em um projeto sobre n�meros primos, implemente um programa que solicite ao usu�rio um n�mero inteiro e verifique se ele � um n�mero primo utilizando o switch case. Exiba a mensagem "N�mero primo" caso seja primo, ou "N�mero n�o primo" caso contr�rio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


int main(){

  setlocale(LC_ALL,"portuguese");

  int i,numero;
  bool primo = true;

  printf("Informe um n�mero inteiro positivo: ");
  scanf("%i",&numero);
  while(numero<1){
    printf("\nPor favor, informe um n�mero INTEIRO POSITIVO: ");
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
    printf("%i � primo.",numero);
    break;

  default:
    printf("%i N�O � primo.",numero);
    break;
  }

  return 0;
}