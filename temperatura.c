//Faça um programa que receba a temperatura media de cada mes do ano, armazenando-os em um vetor. 
//Ao final, mostre a maior e a menor temperatura do ano e em que mes ocorreram(mostrar o mes por extenso: janeiro,fvereiro, março...
//Desconsidere empates. 
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float temperatura[12];
	int i=0, aux, aux2;
	float maior = -1500;
	float menor = 1500;
	
	for(i=0; i<12; i++){
		printf("\nDigite a temperatura do mes %d: ", i+1);
		scanf("%f", &temperatura[i]); 
	}
     for(i=0; i<12; i++){
  		  if(temperatura[i] > maior){
  		  	maior = temperatura[i];
     		aux = i; 
		 }
		 	if(temperatura[i] < menor){
     		menor = temperatura[i];
     		aux2 = i;
		 }
	 }
	printf("\nA maior temperatura foi no mes: %d que e o mes de: ", aux+1);
	switch(aux){
		case 1: printf("Janeiro!"); break;
		case 2: printf("Fevereiro!"); break;
		case 3: printf("Marco!"); break;
		case 4: printf("Abril!"); break;
		case 5: printf("Maio!"); break;
		case 6: printf("Junho!"); break;
		case 7: printf("Julho!"); break;
		case 8: printf("Agosto!"); break;
		case 9: printf("Setembro!"); break;
		case 10: printf("Outubro!"); break;
		case 11: printf("Novembro!"); break;
		case 12: printf("Dezembro!"); break;
		default: printf("\nEsse Mes nao existe!"); 
	}
		printf("\nA menor temperatura foi no mes: %d que e o mes de: ", aux2+1);
	switch(aux2 + 1){
		case 1: printf("Janeiro!"); break;
		case 2: printf("Fevereiro!"); break;
		case 3: printf("Marco!"); break;
		case 4: printf("Abril!"); break;
		case 5: printf("Maio!"); break;
		case 6: printf("Junho!"); break;
		case 7: printf("Julho!"); break;
		case 8: printf("Agosto!"); break;
		case 9: printf("Setembro!"); break;
		case 10: printf("Outubro!"); break;
		case 11: printf("Novembro!"); break;
		case 12: printf("Dezembro!"); break;
		default: printf("\nEsse Mes nao existe!"); 
	}
	
	return 0;
}
