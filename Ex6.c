#include <stdio.h>
#include <stdlib.h>

int main (){
//Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e quantos não são nem números nem letras.
    /*            ENTRADA          SAIDA
                                Frase digitada: banana123.
                                Numero de letras: 6
                banana123.      Numero de numeros: 3
                                Nem letras nem numeros: 1.
     */

char string[50];

int i, quantC, quantN, quantNone;

printf("Digite uma frase: ");
gets(string);
fflush (stdin);

printf("Frase digitada: %s", string);
i = 0;
quantN = 0;
quantNone = 0;
quantC = 0;

while (string[i] != '\0'){
    if (string[i] > 64 && string[i]<91 || string[i] > 96 && string[i] < 123){
        quantC++;
    }else{
        if(string[i] > 47 && string[i] < 58){
            quantN++;
        }else {
            quantNone++;
        }
    }       
    i++;
}

printf("\nNumero de letras: %i\nNumero de numeros: %i\nNem letras nem numeros: %i.",quantC, quantN, quantNone );

return (0);

}
