// atv13 q 25
#include <stdio.h>

int main(){
    printf("Digite uma palavra\n");
    char str1[50],str2[50];
    scanf("%s",&str1);
    printf("Digite outra palavra\n");
    scanf("%s",&str2);
    int i = 0;

    if (str1[i] < str2[i]){
        printf("%s vem primeiro\n",str1);
    } else if (str1[i] > str2[i]){
        printf("%s vem primeiro\n",str2);
    }
}