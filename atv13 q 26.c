//atv13 q 26
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira uma string: \n");
    char str[50];
    fgets(str,50,stdin);
    int i = 0;
    for (i = 0; str[i]!='\0'; i++){
        str[i]=str[i]+3-32;//codigo ascii + 3, e -32 pra virar maiusculo
        if (str[i]!='\0'&&str[i]!=' '){
            printf("%c",str[i-1]); //string modificada, -1 pra imprimir so o necessario
        }
        
    }
    
    return 0;
}