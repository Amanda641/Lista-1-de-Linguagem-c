/*Faca um programa que receba a altura de uma pessoa e imprima seu peso ideal. Formula do peso ideal: (72.7 . altura) - 58.*/

#include <stdio.h>

int main(){

	float altura;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);


	float peso_ideal = (72.7 * altura) - 58;

    printf("Seu peso ideal eh: %f", peso_ideal);
    
}

