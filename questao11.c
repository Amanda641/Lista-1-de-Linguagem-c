/*Faça um programa que receba 2 números inteiros e um número real. Calcule e imprima: 
i) o produto do dobro do primeiro com a metade do segundo;
ii) a soma do triplo do primeiro com o terceiro;
iii) o terceiro elevado ao cubo.*/

#include <stdio.h>

int main(){

	int num1, num2;
	float num3;

  	printf("Digite o primeiro numero: ");
    scanf("%d", &num1);    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);  
	printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

	float item1 = (2 * num1) * (num2 / 2);
	float item2 = (num1 * 3) + num3;
	float item3 = num3 * num3 * num3;
	
	
    printf("o produto do dobro do primeiro com a metade do segundo: %f", item1);
    printf("\na soma do triplo do primeiro com o terceiro: %f", item2);
    printf("\no terceiro elevado ao cubo: %f", item3);

}

