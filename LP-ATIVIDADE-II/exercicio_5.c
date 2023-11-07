/*
Exercício 5: 
Enquanto você faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usuário que escolha um idioma de preferência (1 - Inglês, 2 - Espanhol, 3 - Francês). Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int idioma,i;
  char idiomaNome[3][10]={"Inglês","Espanhol","Francês"};

  printf("Escolha um idioma:\n\n");
  for(i=0;i<3;i++){
    printf("%i - %s\n",i+1,idiomaNome[i]);
  }
  scanf("%d",&idioma);

  switch (idioma){
  case 1:
    printf("\nWelcome!\n");
    break;
  case 2:
    printf("\nBienvenido!\n");
  case 3:
    printf("\nBienvenu!\n");
    break;
  }

  return 0;
}