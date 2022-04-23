#include <stdio.h>
#include <stdlib.h>

int main (){
// Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere aparece na string lida e quantas vezes ele apareceu.
    /*             ENTRADA          SAIDA 
                banana, a           A na posicao = 2 A na posicao = 4  A na posicao = 6   Numero de caracteres 3.
    
    */
char string[50], c;

int i, cont;

printf("Digite uma frase: ");
gets(string);
fflush (stdin);

printf("Digite um caractere: ");
scanf("%c", &c);

printf("Frase digitada: %s", string);
i = 0;
cont=0;
while (string[i] != '\0' ){
    if (string[i] == c){
        printf("\n%c na posicao = %d",c, i+1);
        cont++;
    }  
    i++;
}
printf("\nNumero de caracteres %c = %d",c, cont);

return (0);

}
