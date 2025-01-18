int* leiaVetorI(int N){
	int *vet;
	vet=(int*)malloc(N*sizeof(int));
	int i;
	for(i=0;i<N;i++){
		printf("\n Entre com a posicao %d do vetor:",i);
		scanf("%d",&vet[i]);
	}	
		return vet;	
}
	void escreveVetorI(int* v, int N){
		int i;
		for(i=0;i<N;i++) printf("\n Vetor[%d] = %d",i,v[i]);	
	}
	
float* leiaVetorF(int N){
	float *vet;
	vet=(float*)malloc(N*sizeof(float));
	int i;
	for(i=0;i<N;i++){
		printf("\n Entre com a posicao %d do vetor:",i);
		scanf("%f",&vet[i]);
	}	
		return vet;	
}
	void escreveVetorF(float* v, int N){
		int i;
		for(i=0;i<N;i++) printf("\n Vetor[%d] = %f",i,v[i]);	
	}
	
	float media(float* v, int N){
		int i;
		float media=0;
		for(i=0;i<N;i++) media=media + v[i];
		media=media/N;
		return media;	
	}
	


