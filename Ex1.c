#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(){
    // Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente. 

    /*             ENTRADA         SAIDA
                    banana a         Maior: banana Menor: a
        */
    char string[50],maiort[50],menort[50],maiorl[50],menorl[50];
    int i,maiorti,menorti,x,y,z;
    printf("Digite um conjunto de caracteres:");
    gets(string);

    for(i=0; string[i] != NULL ; i++);

    strcpy(maiort,string);
    strcpy(menort,string);
    strcpy(maiorl,string);
    strcpy(menorl,string);

    maiorti = i;
    menorti = i;

   while(strcmp(string,"0")!=0)
    {
        fflush(stdin);

        for(i=0; string[i] != NULL ; i++);

        if(i > maiorti){
            maiorti = i;
            strcpy(maiort,string);
        }

        if(i < menorti){
            menorti = i;
            strcpy(menort,string);
        }

        if(strcmp(string,maiorl)== -1){
            strcpy(maiorl,string);
        }

        if(strcmp(string,menorl)== 1){
            strcpy(menorl,string);
        }

        printf("Digite um conjunto de caracteres(Digite 0 p/ parar):");
        gets(string);

    }

    printf("\nMaior em tamanho:%s \n\nMenor em tamanho:%s \n\nMaior lexicograficamente:%s \n\nMenor lexicograficamente:%s\n",maiort, menort, maiorl, menorl);

    return 0;
}
