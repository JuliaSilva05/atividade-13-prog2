#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira uma frase: \n");
    char str[50];
    char str2[50];
    fgets(str,50,stdin);
    int i = 0;
    int j = 0;
    for (i = 0; str[i]!='\0'; i++){
        if (str[i]==' '){
            continue;
        }
        str2[j]=str[i];
        j++;
    }
    
    printf("%s",str2);
    return 0;
}
