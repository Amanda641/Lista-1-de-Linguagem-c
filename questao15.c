/*Faça um programa que pergunte a quantidade de quilômetros percorridos por um carro alugado e a quantidade de dias do aluguel.
Calcule o preço do aluguel, levando em consideração que o aluguel do carro custa R$ 60,00 por dia e R$ 0,15 por quilometro rodado.*/

#include <stdio.h>

int main (){
	
	int km, dias;
	
	printf("quantidade de quilometros percorridos: ");
	scanf("%d", &km);
	printf("quantidade de dias do aluguel: ");
	scanf("%d", &dias);
	
	float preco = (60 * dias) + (0.15 * km);
	
	printf("O total do aluguel para pagar eh: %f", preco);
	
	
}
