/*Faça um programa que receba o salário mensal atual de um funcionário e o percentual de reajuste. Calcule e imprima o valor do novo salário.*/

#include <stdio.h>
int main()
{

	float num, liquido, reajuste;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &num);   
    printf("Digite o percentual do reajuste: ");
    scanf("%f", &reajuste);

	liquido = num - ((num * reajuste)/ 100);

    printf("o seu salario liquido eh: %f", liquido);
    
}
