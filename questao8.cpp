/*Fa�a um programa que pergunte o quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e imprima o seu sal�rio neste m�s*/

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

