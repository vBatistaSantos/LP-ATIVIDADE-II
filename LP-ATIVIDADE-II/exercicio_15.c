/*
Exercício 15: 
Implemente um programa que converta valores entre diferentes unidades de medida, como por exemplo, quilômetros para milhas e Celsius para Fahrenheit. O programa deve permitir ao usuário escolher a conversão desejada e repetir o processo para vários valores. Utilize o switch case  e continue mostrando as opções para conversão até o usuário digite 0 para sair do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int opcaoCod, i;
  float valor,resultado;
  char opcaoNome[3][20]={"DISTÂNCIA","TEMPERATURA","MASSA"};

  printf("=== CONVERSOR ==\n\n");
  for(i=0;i<3;i++){
    printf("%i - %s\n",i+1,opcaoNome[i]);
  }
  scanf("%i",&opcaoCod);
  while (opcaoCod<1 && opcaoCod>3){
    printf("Por favor, selecione dentre as opções acima: \n");
    scanf("%i",&opcaoCod);
  }

  system("Clear || Cls");

  switch (opcaoCod){
  case 1: //DISTANCIA
    printf("=== DISTÂNCIA ==\n\n");
    printf("1 - Quilômetros => Milhas\n");
    printf("2 - Milhas      => Quilômetros\n");
    scanf("%i",&opcaoCod);

    while (opcaoCod<1 && opcaoCod>2){
    printf("Por favor, selecione dentre as opções acima: \n");
    scanf("%i",&opcaoCod);
    }
    system("Clear || Cls");

    switch (opcaoCod){
      case 1:
        printf("=== QUILÔMETROS => MILHAS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        resultado = valor * 0.621371;

        printf("%.2f milhas\n",resultado);
        break;

      case 2:
        printf("=== MILHAS => QUILÔMETROS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        resultado = valor * 1.609;

        printf("%.2f km\n",resultado);

        break;
    }

    break;
  case 2: //TEMPERATURA
    printf("=== TEMPERATURA ==\n\n");
    printf("1 - Celsius   => Farenheit\n");
    printf("2 - Farenheit => Celsius\n");
    scanf("%i",&opcaoCod);

    while (opcaoCod<1 && opcaoCod>2){
    printf("Por favor, selecione dentre as opções acima: \n");
    scanf("%i",&opcaoCod);
    }

    system("Clear || Cls");

    switch (opcaoCod){
      case 1:
        printf("=== CELSIUS => FARENHEIT ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        //(0 °C × 9/5) + 32
        resultado = (valor * 9/5) + 32;

        printf("%.2f ºF\n",resultado);
        break;

      case 2:
        printf("=== FARENHEIT => CELSIUS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        //(32 °F ? 32) × 5/9
        resultado = (valor - 32)*5/9;

        printf("%.2f ºC\n",resultado);

      break;
    }

    break;
  case 3://MASSA
    printf("=== MASSA ==\n\n");
    printf("1 - Quiloramas   => Libras\n");
    printf("2 - Libras => Quiloramas\n");
    scanf("%i",&opcaoCod);

    while (opcaoCod<1 && opcaoCod>2){
    printf("Por favor, selecione dentre as opções acima: \n");
    scanf("%i",&opcaoCod);
    }

    system("Clear || Cls");

    switch (opcaoCod){
      case 1:
        printf("=== QUILOGRAMAS => LIBRAS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        resultado = valor*2.205;
        

        printf("%.2f lb\n",resultado);
        break;

      case 2:
        printf("=== LIBRAS => QUILOGRAMAS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        resultado = valor / 2.205;

        printf("%.2f kg\n",resultado);

      break;
    }
    
    break;
  }
  
  return 0;
}