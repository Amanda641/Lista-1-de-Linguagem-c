/*Faça um programa que pergunte o quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e imprima o seu salário neste mês*/

#include <stdio.h>

int main(){


	float num, horas;

    printf("Digite o valor do seu ganho por hora: ");
    scanf("%f", &num);
    printf("Digite o total de horas trabalhadas: ");
    scanf("%f", &horas);

	float ganho = num * horas;


    printf("o seu ganho total eh: %f", ganho);
    
}

