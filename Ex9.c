#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

// – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma stringauxiliar.

    /*             ENTRADA          SAIDA 
            banana com aveia        bananacomaveia
            o galo ganhou           ogaloganhou
    
    
    */

    char string[50];
    printf("Forneca uma string com espacos em branco: ");
    gets(string);

    int len = strlen(string);
   
    printf("%s\n", string);
    for (int i = 0, posicao = 0; i < len; i++, posicao++) {
        if (string[posicao] == ' ') posicao++;
        string[i] = string[posicao];
    }
    printf("String sem espaços em branco: %s\n", string);

}
