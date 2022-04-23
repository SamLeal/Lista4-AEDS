#include <stdio.h>
#include <stdlib.h>

int main (){
//Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira string será a primeira na nova string e assim sucessivamente.
    /*             ENTRADA          SAIDA 
            banana com aveia    aieva moc ananab
            o galo ganhou       uohnag olag o
    */

char string[50], tmp;

printf("Digite uma frase: ");
gets(string);
fflush (stdin);

size_t size = strlen(string);
    for(int i = 0; i < size / 2; i++){
       tmp = string[i]; 
       string[i] = string[size - i - 1]; 
       string[size - i - 1] = tmp; 
    }
    printf("%s", string);

}
