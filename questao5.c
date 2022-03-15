/*Faça um programa que receba alguma medição em metros e imprima a conversão para centímetros*/

#include <stdio.h>

int main(){
	
	float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

	float novo_num = num * 100;

    printf("O numero em centimetros eh %f", novo_num);


}
