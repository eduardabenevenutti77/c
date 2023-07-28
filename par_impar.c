#include<stdio.h>
void main(){
	system("chcp 65001");
	int num;
	printf("\n\t Descubra se o número é ímpar ou par!\n");
	printf("\n Informe ao sistema o valor => ");
	scanf("%d",&num);
	if(num%2==0){
		printf("\n O número é par!");
	}else{
		printf("\n O número é ímpar!");
	}
}