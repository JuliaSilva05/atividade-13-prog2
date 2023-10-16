#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira uma palavra: \n");
    char str[100];
    fgets(str,100,stdin);
    char letra;
    printf("Insira uma letra: \n");
    scanf("%c",&letra);
    int i = 0;    
    for (i = 0; i < 100; i++){
        if (str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            str[i]=letra;
        }
    }
    printf("%s",str);
    return 0;
}