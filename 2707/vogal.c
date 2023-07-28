#include<stdio.h>
void main(){
	system("chcp 65001");
	char letra;
	printf("\n\t Verificando se a letra é uma vogal!");
	printf("\n Informe uma letra => ");
	scanf("%c",&letra);
	if((letra=='A')|| (letra=='a')){
		printf("\n Parabéns, a letra é uma vogal!");
	}else{
		if((letra=='E') ||(letra=='e')){
			printf("\n Parabéns, a letra é uma vogal!");
		}else{
			if((letra=='I')||(letra=='i')){
				printf("\n Parabéns, a letra informada é uma vogal");
			}else{
				if((letra=='O')||(letra=='o')){
				printf("\n Parabéns, a letra informada é uma vogal");	
				}else{
					if((letra=='U')||(letra=='u')){
					printf("\n Parabéns, a letra informada é uma vogal");	
					}
					printf("\n A letra informada não é uma vogal..");
				}
			}
		}
	}
}