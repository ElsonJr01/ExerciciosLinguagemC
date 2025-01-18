#include <stdio.h>
#include "strc.h"
int main (void) {
char str[101], str1[51], str2[51];
printf("Entre com uma sequencia de caracteres: ");
gets(str1);
printf("\nEntre com outra sequencia de caracteres: ");
gets(str2);
copia(str, str1);
printf("\n Inprime str1:");
printf("%s",str1);
printf("\n Inprime str2:");
printf("%s",str2);
printf("\n Inprime str:");
printf("%s",str);
printf("\nComprimento de str: %d\n",comprimento(str));
printf("\nComprimento de str1: %d\n",comprimento(str1));
printf("\nComprimento de str2: %d\n",comprimento(str2));
return 0;
}
