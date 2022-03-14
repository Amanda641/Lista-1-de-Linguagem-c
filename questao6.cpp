/*Faça um programa que receba o raio de um círculo, calcule e imprima a área deste círculo.*/

#include <stdio.h>
#define pi 3.14159265358979323846

int main(){


	float num;

    printf("Digite o raio: ");
    scanf("%f", &num);

	float area = num * num * pi;

    printf("A area eh: %f", area);
    
}
