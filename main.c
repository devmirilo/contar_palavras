#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char str[100];
	int i, cont = 0;	
	int palavra = 0;
	
	puts("Digite uma frase: ");
	fgets(str, sizeof(str), stdin);
	
	str[strcspn(str, "\n")] = '\0';
	
	for(i = 0; str[i] != '\0'; i++){
		if(isspace(str[i])){
			palavra = 0;
		}
		else if(!palavra){
			palavra = 1;
			cont++;
		}
	}
	printf("O numero de palavras e de %d", cont);
	
	return 0;
}