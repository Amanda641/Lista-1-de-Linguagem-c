/*Fa�a um programa que receba alguma medi��o em metros e imprima a convers�o para cent�metros*/

#include <stdio.h>

int main(){
	
	float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

	float novo_num = num * 100;

    printf("O numero em centimetros eh %f", novo_num);


}
