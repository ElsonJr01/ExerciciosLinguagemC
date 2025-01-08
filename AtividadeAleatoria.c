#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define tam 4
	int main(){ 
 		int l, c, matriz[tam][tam];

  srand(time(NULL));
 for(l=0; l<tam; l++){
    for(c=0; c<tam; c++){
      matriz[l][c] = rand() % 10;
    }
  }
  
  for(l=0; l<tam; l++){
    for(c=0; c<tam; c++){
  printf("%d ", matriz[l][c]);  
    }
    printf("\n");

  }
  
  return 0;
}
