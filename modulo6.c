/* Incrementa elementos de um vetor */
#include <stdio.h>
void incr_vetor ( int n, int *v );
 void main (void )
 {
 int a[ ] = {1, 3, 5};
 incr_vetor(3, a);
 printf("%d %d %d \n", a[0], a[1], a[2]);
 }     //sa�da do programa ser� 2 4 6
void incr_vetor ( int n, int *v )
{
int i;
for (i = 0; i < n; i++)
v[i]++;
} 
