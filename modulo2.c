#include<stdio.h>
int fatorial(void);
void main(void){
	int fat;
	fat=fatorial();
	printf("O valor do fatorial=%d",fat);
}
int fatorial (void){
int i,n,f=1;
printf("Digite um numero inteiro nao negativo:");
scanf("%d", &n);
for(i=1;i<=n;i++) f=f*i;
return f;
}
