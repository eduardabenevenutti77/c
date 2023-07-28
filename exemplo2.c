//utiliza-se a mascara %d para variavel númerica
//utiliza-se a mascara %f para variavel decimal
//utiliza-se a mascara %c para variavel char curtos
//utiliza-se a mascara %s para variavel char longos
//scanf => realiza a mesma coisa que o cin! scanf("%d,&num")
//&num => mostra aonde deve ser armazenado
#include<stdio.h>
void main(){
	int valor=10; //%d
	float peso=78.90; //%f
	char charr='E'; //%c
	char* nome="Maria Eduarda"; //%s
	
	printf("===============================\n");
	printf(" Valor: %d teste \n",valor);
	printf(" Peso: %.2f teste \n",peso);
	printf(" Caracter: %c teste \n",charr);
	printf(" Nome: %s teste \n",nome);
	printf("===============================\n");
	
	int idade;
	printf("insira a sua idade => ");
	scanf("%d",&idade);
	printf("idade: %d", idade);
	return 0;
}