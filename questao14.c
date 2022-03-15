/*Faça um programa que receba uma quantidade de dias, horas, minutos e segundos. Calcule e imprima o total em segundos.*/
#include <stdio.h>

int main (){
	
	int d, h, min , seg;
	
	printf("Digite o total de dias:");
	scanf("%d", &d);
	printf("Digite o total de horas:");
	scanf("%d", &h);
	printf("Digite o total de minutos:");
	scanf("%d", &min);
	printf("Digite o total de segundos:");
	scanf("%d", &seg);

/*Um minuto tem 60 segundos
# Uma hora tem 3600 (60 * 60) segundos
# Um dia tem 24 horas, logo 24 * 3600 = 86400 segundos*/

	int total = (d * 86400) + (h * 3600) + (min * 60 ) + seg;
		
	printf("O total de segundos eh: %d"), total;
	
}
