#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira uma palavra: \n");
    char str[50];
    scanf("%s",str);
    int i = 0;
    for (i = 0; str[i]!='\0'; i++){
        str[i]=str[i]+1;//codigo ascii + 1
        printf("%c",str[i]); 
    }
    
    return 0;
}