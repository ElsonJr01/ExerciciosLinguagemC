int luvi(){
	int x;
	printf("Entre com um valor inteiro pelo teclado:");
	scanf("%d",&x);
	return x;
}
void imprimeInt(int y){
	printf("\nValor inteiro:%d",y);
}
float luvf(void){
	float x;
	printf("Entre com o valor: ");
	scanf("%f",&x);
	return x;
}

void imprimeF(float a){
	printf("O valor e: %0.2f", a);
}
float area (float b, float h){
	return b*h;
}
int laco(int mat[]){
	int *i;
    i = &mat;
	printf("\nDigite 6 valores inteiros:");
	    for(i=0;i<6;i++){
		scanf("%d", &mat);
	}
}
void vetorComum(int vetor1[][6], int n) {
    int i, j; 
    for(i = 0; i < n; i++) {
        for(j = 0; j < 6; j++) {
            printf("%d ", vetor1[i][j]); 
        }
        printf("\n"); 
    }
}

