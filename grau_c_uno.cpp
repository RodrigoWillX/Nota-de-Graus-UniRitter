#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	float grauA, grauB, media, grauC;
	char escolha;
	
	printf("Digite a nota do Grau A: ");
	scanf("%f",&grauA);
	
	printf("Digite a nota do Grau B: ");
	scanf("%f",&grauB);
	
	media = (grauA + grauB*2)/3;
	
	printf("Sua media foi: %f \n",media);
	
	if ( media >= 6.0 ) {
		printf("Aprovado! :-) \n");
	
	}else {
		printf("Reprovado! :( \n");
		printf("digite a nota do grau c:");
		scanf("%f",&grauC);
		fflush(stdin);
		printf("Quer substituir Grau A ou Grau B?");
		scanf("%c",&escolha);
		if(escolha=='A'){
			
			media = (grauC + grauB*2)/3;
			printf("Sua media foi: %f \n",media);
	
					if ( media >= 6.0 ) {
						printf("Aprovado! :-) \n");
						}else {
						printf("Reprovado! :( \n");}
						
		}else{
			
			media = (grauA + grauC*2)/3;
			printf("Sua media foi: %f \n",media);
	
					if ( media >= 6.0 ) {
						printf("Aprovado! :-) \n");
						}else {
						printf("Reprovado! :( \n");}
		}
	}
	
	
	system("pause");
	
}
