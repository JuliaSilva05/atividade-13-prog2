#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira uma palavra em letras maiusculas: \n");
    char str[50];
    scanf("%s",str);
    int i = 0;
    for (i = 0; str[i]!='\0'; i++){
        if (65<=str[i]<=90){
            str[i]=str[i]+32;//codigo ascii + 32
            printf("%c",str[i]); //string modificada
        }
        
    }
    
    return 0;
}