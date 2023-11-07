/*
Voc√™ √© um desenvolvedor de jogos e est√° trabalhando em um novo jogo de aventura. O jogo tem um sistema de clima que depende da temperatura externa. Se a temperatura for superior a 25 graus Celsius, o clima ser√° ensolarado. Se a temperatura for inferior a 15 graus Celsius, o clima ser√° chuvoso. Se a temperatura estiver entre 15 e 25 graus Celsius, o clima ser√° nublado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  float temperatura;

  printf("Informe a temperatura (C∫): ");
  scanf("%f",&temperatura);

  if(temperatura>25){
    printf("\nO clima est· ENSOLARADO!");
  }else if(temperatura>=15){
    printf("\nO clima est· NUBLADO!");
  }else{
    printf("\nO clima est· CHUVOSO!");
  }

  return 0;
}