#include <stdio.h>
#include <stdlib.h>

int main (){
//Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre A e z - consista se o caracter esta nesse intervalo), mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.
    /*             ENTRADA                      SAIDA 
            banana  com aveia, a        a na posição 2,4,6,12,16, Total:  5.
            BANANA COM AVEIA, A        A na posição 2,4,6,12,16, Total:  5.
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
while (string[i] != '\0'){
    if (c > 91){
    if (string[i] == c || string[i] == (c-32)  ){
        printf("\n%c na posicao = %d",c, i+1);
        cont++;
    }
    }else{
    if (string[i] == c || string[i] == (c+32) ){
        printf("\n%c na posicao = %d",c, i+1);
        cont++;
    }
    }       
    i++;
}
printf("\nNumero de caracteres %c = %d",c, cont);

return (0);

}
