#include <stdio.h>
#include <time.h>

int main(){
	int i=0, j, vet[6], igual;
	
	srand(time(NULL));
	
	do{
		vet[i] = rand() % 61;
		igual = 0;
		for(j=0; j<i; j++){
		if(vet[j] == vet[i]){
			igual = 1;
			}
		}
		if(igual == 0){
			i++; 
		}
	}while(i<6);
	
	for(i=0; i<6; i++){
		printf("%d ", vet[i]);
	}
	return 0;
}
