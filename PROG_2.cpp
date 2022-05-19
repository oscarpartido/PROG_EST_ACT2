/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 03/02/2022

programa que pide los datos de un triangulo y calcule su area

*/

#include <stdio.h>

int main(){

//declaracion de variables

int base,altura,area;

//entrada de datos

printf("calcular el area del triangulo \n");

printf("introduce la base:");

scanf("%d",&base);

printf("introduce la altura:");

scanf("%d",&altura);

//proceso

area=base*altura/2;

//salida

printf("el area del triangulo es %d",area);

return 0;

}
