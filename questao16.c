/*Faça um programa que pergunte a quantidade de cigarros fumados por dia e quantos anos a pessoa fuma.
Calcule a redução do tempo de vida dessa pessoa, levando em consideração que se perde 10 minutos por cada cigarro.
Imprima o total de tempo em dias.*/

#include <stdio.h>

int main (){
	
	int cigarros, anos;
	
	printf("quantidade de cigarros fumados por dia: ");
	scanf("%d",&cigarros);
	printf("A quantos anos a pessoa fuma?  ");
	scanf("%d", &anos);
	
	int anos_dias =  (365 * anos)  ;
	float cig_dia = (anos_dias * cigarros);
	float reducao_min = anos_dias * 1440;
	float reducao_dias = (cig_dia * 10) /1440;
	
	printf(" Reducao do tempo de vida sera de %f dias",reducao_dias);
	
}
