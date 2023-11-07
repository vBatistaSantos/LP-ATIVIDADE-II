/*
Exercício 4: 
Em um projeto de controle de acesso, crie um programa que solicite ao usuário sua idade e verifique se ele tem permissão para acessar um determinado recurso. Se a idade for maior ou igual a 18, exiba a mensagem "Acesso permitido". Caso contrário, exiba a mensagem "Acesso negado".
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int idade;

  printf("Informe sua idade: ");
  scanf("%d",&idade);

  idade>=18?printf("\nAcesso permitido!"):printf("\nAcesso negado");  

  return 0;
}