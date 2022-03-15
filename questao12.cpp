/*Faça um programa que receba o número total de eleitores de um município, número de votos brancos, nulos e válidos.
Calcule e imprima o percentual que cada um representa em relação ao total de eleitores.*/


#include <stdio.h>

int main(){
	
	int eleitores;
	int votos_brancos, votos_nulos, votos_validos;
	
	printf("Digite o total de eleitores do municipio: ");
	scanf("%d", &eleitores);
	printf("Total de numero de votos brancos: ");
	scanf("%d", &votos_brancos);
	printf("Total de numero de votos nulos: ");
	scanf("%d", &votos_nulos);
	printf("Total de numero de votos validos: ");
	scanf("%d", &votos_validos);

	int	brancos =(votos_brancos * 100) / eleitores;
	int nulos =(votos_nulos * 100) / eleitores;
	int validos =(votos_validos * 100) / eleitores;
	
	printf("O percentual de votos brancos eh de %d", brancos);
	printf("\nO percentual de votos nulos eh de %d",nulos);
	printf("\nO percentual de votos validos eh de %d",validos);
	

}
