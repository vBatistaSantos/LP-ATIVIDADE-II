/*
Exerc�cio 12: 
Desenvolva um programa que solicite ao usu�rio uma quantidade de notas e pe�a para digitar cada nota. O programa deve calcular e exibir a m�dia das notas digitadas. Utilize o for para repetir o processo de solicita��o das notas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int i, nNotas;
  float nota,media=0;

  printf("Informe a quantidade de notas que deseja inserir: ");
  scanf("%i",&nNotas);

  for(i=0;i<nNotas;i++){
    printf("Informe a %i� nota:",i+1);
    scanf("%f",&nota);

    media += nota;
  }
  
  media/=i;

  printf("\n\nM�dia = %.1f\n",media);

  return 0;
}