#include <stdio.h>
//int mostrarMsg(int n1, int n2);

//int multiplicar(int *x, int *y);
void troca(int *i, int *j);
int main(){
	system("chcp 65001");
	
	//printf("\nteste");
	//int numero1 = 10;
	//int numero2 = 45;
	
	//int valor1 = 5;
	//int valor2 = 5;
	//int resultado = 0;
	
	//calculos matematicos utilizando ponteiros
	
	/*printf("\nantes de chamar a função: ");
	printf("\nnm 1 = %d\n",valor1);
	printf("nm 2 = %d\n",valor2);
	resultado = multiplicar(&valor1,&valor2);
	
	printf("o resultado da multiplicação é = %d\n",resultado);
	
	printf("\napós chamar a função: ");
	printf("\nvalor 1 = %d", valor1);
	printf("\nvalor 2 = %d", valor2);
	/*int result = mostrarMsg(numero1, numero2);
	printf("a soma é = %d", result);*/
	
	int i = 50;
	int j = 2;
	
	printf("antes da troca: %d | %d\n", i, j);
	troca(&i, &j);
	printf("\ndepois da troca: %d | %d", i, j);
	
	
	return 0;
}
void troca(int *i, int *j){
	
	//troca de valores de uma variavel
	int temp = *i;
	*i = *j;
	*j = temp;
}
/*int multiplicar(int *x, int *y){
	*x = 20;
	return *x * *y;
}*/



/*
ponteiro para ponteiro: criação de níveis de apontamento -  **p2

-------------------------------------------------------------------

int *p1 = 10 
int **p2 = &p1

printf("exemplo *p %d",*p);
printf("exemplo **p %d",*p1)

-------------------------------------------------------------------
				Funções

-> quebra o código em partes;
-> realiza as mesmas atividades que aprendemos em C++;

parametro = comparações de variaveis;

int mostrarMsg(int n1, int n2){
	printf("\nolá mundo");
	printf("\n\n");
	//printf("Soma = %d", n1 + n2);
	return n1+n2;
*/