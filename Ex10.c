#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
     //Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.
       /*             ENTRADA          SAIDA 
            banana banana, an        2,4,9,11; 4 no total.
    
    */

    setlocale(LC_ALL, "portuguese");
    char s[50], s2[4];
    int aux2 = 0;
    printf("Insira uma palavra de até 50 caracteres: ");
    gets(s);
    printf("Insira uma palavra de até 3 caracteres: ");
    gets(s2);
    for(int i = 0; s[i] != '\0'; i++){
 
        char aux[4] = "";
 
        for(int j = i; j-i != strlen(s2); j++){
            if(s[j] != '/0'){
                aux[j-i] = s[j];
            }else{
                break;
            }
        }
        if(strcmp(s2, aux) == 0){
           printf("A segunda string aparece na posição %i.\n", i+1);
           aux2++;
        }
    }
    printf("A quantidade de vezes que a segunda string aparece dentro da primeira é: %i", aux2);
    return 0;
}
