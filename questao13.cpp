/*Fa�a um programa que receba o sal�rio mensal atual de um funcion�rio e o percentual de reajuste. Calcule e imprima o valor do novo sal�rio.*/

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
