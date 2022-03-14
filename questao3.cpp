/*Faça um programa que receba dois números inteiros e imprima a soma desses dois números.*/

#include <stdio.h>


int main()
{
	int num1, num2;
	
	
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
	
	int soma = num1 + num2;
	
    printf("A soma dos dois numeros eh: %d", soma);
}
