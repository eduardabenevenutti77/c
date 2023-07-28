#include<stdio.h>
void main(){
	system("chcp 65001");
	char sexo;
	int idade;
	
	printf("\n\t Será que você pode sair sozinho(a)?\n");
	printf("\n Informe ao sistema qual é o seu sexo - f|m => ");
	scanf("%c",&sexo);
	sexo=toupper(sexo);
	printf("\n Informe ao sistema qual é a sua idade => ");
	scanf("%d",&idade);
	if((sexo=='M') && (idade>=18)){
		printf("\n Você pode sair sozinho!");
	}else if((sexo=='F') && (idade>=35)){
		printf("\n Você pode sair sozinha!");
	}else{
		printf("\n Você deve ficar em casa, não tem idade suficiente!");
	}
}