#include <stdio.h>
int main(){
char palavras[100];
int tam;
printf("Digite uma palavra ou texto:");
fgets(palavras, 100, stdin);
tam=0;
while (palavras[tam]!='\0'){
tam++;
}
printf("Tamanho da string: %d \n", tam - 1);
return 0;
}
