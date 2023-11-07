/*
Exerc�cio 5: 
Enquanto voc� faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usu�rio que escolha um idioma de prefer�ncia (1 - Ingl�s, 2 - Espanhol, 3 - Franc�s). Com base na escolha do usu�rio, exiba a mensagem de boas-vindas no idioma selecionado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int idioma,i;
  char idiomaNome[3][10]={"Ingl�s","Espanhol","Franc�s"};

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