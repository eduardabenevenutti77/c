#include <stdio.h>
#include <string.h>

char palavra[100];

void vogais(char *frase){
	while (*frase != '\0'){
		switch (*frase){
			case 'a':
				*frase = 'u';
				break;
			case 'e':
				*frase = 'o';
				break;
			case 'i':
				*frase = 'u';
				break;
			case 'o':
				*frase = 'a';
				break;
			case 'u':
				*frase = 'e';
				break;
		}
		frase++;
	}
}

void main (){
	system("chcp 65001");
	
	printf("\n-----------------------------------------------------------\n");
	printf("\n\t Modifique as vogais de uma frase!!\n");
	                                     
	                                                                                             
		printf("\n Informe a frase: ");
		fgets(palavra,sizeof(palavra),stdin);
		
		vogais(palavra);
		printf("\n Após a alteração na frase: \e[33;1m%s\e[33;0m",palavra);
	
		printf("\n-----------------------------------------------------------\n");
		return 0;
		
}