/*
Exerc�cio 11: 
Voc� � um desenvolvedor de um sistema de seguran�a e precisa criar um algoritmo que, dado um c�digo de acesso, permita ao usu�rio entrar em um edif�cio. O algoritmo deve continuar repetindo at� que o usu�rio digite o c�digo de acesso correto.
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
    printf("SENHA INV�LIDA, DIGITE SUA SENHA:");
    gets(senhaEntrada);
  }

  printf("\nACESSO PERMITIDO!\n");
  

  return 0;
}