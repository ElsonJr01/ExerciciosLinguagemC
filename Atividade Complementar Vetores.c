//uma loja de artesanato possui apenas um vendedor, e comercializa 10 tipos de objetos diferentes.
// O vendedor recebe um salario de 1100.00 acrescido de 5% do valor total de suas vendas. 
//O valor unitario dos objetos deve ser informado e armazenado em um vetor. A quantidade vendida de 
// cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os precos e as quantidades vendidas
// armazenando-os em seus respectvos vetores. depois determine e mostre: 
//A) quantidade vendidas, valor unitario e valor total de cada objeto, ao final deverão ser mostrados o valor total das vendas
// e o valor total da comissao que sera paga ao vendedor. B) O valor do objeto mais vendido e sua posição no vetor(em casos de empate mostre todos)

#include <stdio.h>
	
	 #define MAX 10

int main(){
	 
	 float preco[MAX];
	 int quantidade[MAX];
	 int i;
	 float comissao; 
	 float totalVendas = 0; 
	 float totalPorObjeto=0;
	 float maiorVendido = 0;
	 float quantidadeMaior = 0; 
	 
	 for(i=0; i<MAX; i++){
	 	printf("\nEntre com os precos do objeto %d: ", i);
	 	scanf("%f", &preco[i]);
	 }
				for(i=0; i<MAX; i++){
					printf("\nQuantidade vendidas do objeto %d: ", i);
					scanf("%d", &quantidade[i]);
				}
				
				for(i=0; i<10; i++){
					printf("Preco do objeto %d = R$ %.2f\n", i, preco[i]);
				}
				
				for(i=0; i<10; i++){
					printf("Quantidade de objetos vendidos na posicao %d = %2d\n",i, quantidade[i]);
				}
				
				for(i=0; i<MAX; i++){
					totalPorObjeto = preco[i] * quantidade[i];
					totalVendas += totalPorObjeto;
					
					if(quantidade[i] > maiorVendido){
						maiorVendido = quantidade[i];	
					} 
				}   printf("\nObjetos mais vendidos:\n");
   			    for (i = 0; i < MAX; i++) {
       			 if (quantidade[i] == maiorVendido) {
            printf("Objeto %d com %d unidades vendidas.\n", i + 1, quantidade[i]);
        }
    }
		 comissao = totalVendas * 0.05;
    printf("\nValor total das vendas: %.2f", totalVendas);
    printf("\nComissao do vendedor: %.2f", comissao);		
		
			
	return 0;
}
