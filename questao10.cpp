/*Fa�a um programa que pergunte quanto voc� ganha por m�s. Calcule e imprima: i) Sal�rio bruto; ii) Quanto pagou de imposto (8%); iii) Quanto pagou ao sindicato (5%); iv) Sal�rio l�quido*/

#include <stdio.h>

int main(){


	float num, impostos, sindicato, liquido;

    printf("Digite o valor do seu ganho por mes: ");
    scanf("%f", &num);

	impostos = num * 0.08;
	sindicato =  num * 0.05;
	liquido = num - impostos - sindicato;

    printf("o seu salario bruto eh: %f\n", num);
    printf("voce pagou de impostos %f\n", impostos);
    printf("voce pagou ao sindicato  %f\n", sindicato);
    printf("o seu salario liquido eh: %f", liquido);


    
}
