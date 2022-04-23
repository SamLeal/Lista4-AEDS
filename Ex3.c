#include <stdio.h>
#include <stdlib.h>

int main (){
//Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.
    /*             ENTRADA          SAIDA */

char string[50];

int i;

printf("Digite uma frase: ");
gets(string);

printf("Frase digitada: %s", string);
i = 0;
while (string[i] != '\0' ){
    if (string[i] == 'A' || string[i] == 'a'){
        printf("\nA na posicao = %d", i+1);
    }  
    i++;
}

return (0);

}
