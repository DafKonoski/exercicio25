#include <stdio.h>
int main(){

    char nome1[20];
    char nome2[20];

    printf("Digite um nome\n");
    gets(nome1);
    printf("Digite outro nome\n");
    gets(nome2);

    for(int i = 0; i < strlen(nome1); i++){
        printf("Letra: %c posição:%d\n", nome1[i], i);
    }
    for(int j = 0; j < strlen(nome2); j++){
        printf("Letra:%c posição:%d\n", nome2[j], j);
    }
}
