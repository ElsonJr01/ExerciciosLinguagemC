/* Funções oferecidas pelo modulo string.h */
//Função imprime
void imprime (char* s)
{
printf("%s\n",s);
}
/* Função comprimento
** Retorna o número de caracteres da string passada como parâmetro
*/
int comprimento (char* s)
{
int i;
int n = 0; /* contador */
for (i=0; s[i] != '\0'; i++)
n++;
return n;}
/* Função copia
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

