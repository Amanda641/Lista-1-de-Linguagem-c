/*Fa�a um programa que receba o lado de um quadro, calcule a �rea de um quadrado e imprima o dobro desta �rea.*/

#include <stdio.h>

int main(){


	float num;

    printf("Digite o valor do lado ddo quadrado: ");
    scanf("%f", &num);

	float area = num * num;
	float area_dobrada = area * 2;

    printf("o dobro da area desse quadrado eh: %f", area_dobrada);
    
}
