/* Fun��es oferecidas pelo modulo string.h */
//Fun��o imprime
void imprime (char* s)
{
printf("%s\n",s);
}
/* Fun��o comprimento
** Retorna o n�mero de caracteres da string passada como par�metro
*/
int comprimento (char* s)
{
int i;
int n = 0; /* contador */
for (i=0; s[i] != '\0'; i++)
n++;
return n;}
/* Fun��o copia
** Copia os caracteres da string orig (origem) para dest (destino)
*/
void copia (char* dest, char* orig)
{
int i;
for (i=0; orig[i] != '\0'; i++)
dest[i] = orig[i];
/* fecha a cadeia copiada */
dest[i] = '\0';
}

