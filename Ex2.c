#include <stdio.h>
#include <stdlib.h>

int main (){
    // Ler um string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.

    /*             ENTRADA         SAIDA
                    banana           3
                    BANANA           3   */

char string[50];

int i, cont;

printf("Digite uma frase: ");
gets(string);

printf("Frase digitada: %s", string);
i = 0;
cont= 0;
while (string[i] != '\0' ){ 
    if (string[i] == 'A' || string[i] == 'a'){
        cont++;
    }  
    i++;
}
printf("\nNumero de caracteres a = %d", cont);

return (0);

}
