/*
Exercício 11: 
Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que, dado um código de acesso, permita ao usuário entrar em um edifício. O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  char senha[20],senhaEntrada[20];

  printf("CADASTRE UMA SENHA: ");
  gets(senha);

  system("Cls || Clear");
  printf("DIGITE SUA SENHA:");
  gets(senhaEntrada);

  while (strcmp(senha,senhaEntrada)!=0){
    system("Cls || Clear");
    printf("SENHA INVÁLIDA, DIGITE SUA SENHA:");
    gets(senhaEntrada);
  }

  printf("\nACESSO PERMITIDO!\n");
  

  return 0;
}