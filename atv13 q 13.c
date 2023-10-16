#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira uma frase: \n");
    char str[100];
    fgets(str,100,stdin);
    char count = 0;
    int i = 0;
    for (i = 0; i < 100; i++){
        if (str[i]==' '){
            count++;
        }
    }
    printf("%d caracteres brancos\n",count);
    return 0;
}