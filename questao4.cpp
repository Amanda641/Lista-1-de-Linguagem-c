/*Fa�a um programa que pe�a 3 notas de avalia��es e imprima a m�dia aritm�tica simples dessas notas.*/

#include <stdio.h>

int main()
{
	float nota1, nota2, nota3;
	
	
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
	
	float media = (nota1 + nota2 + nota3) / 3;
	
    printf("A sua media eh: %f", media);
}
