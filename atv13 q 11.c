#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira uma string: \n");
    char str[100];
    fgets(str,100,stdin);
    int i = 0;
    for (i = 0; i < 100; i++){
        if (str[i]!='a'&&str[i]!='A'&&str[i]!='e'&&str[i]!='E'&&str[i]!='i'&&str[i]!='I'&&str[i]!='o'&&str[i]!='O'&&str[i]!='u'&&str[i]!='U'){
            printf("%c",str[i]);
        }
    }
    
    return 0;
}
