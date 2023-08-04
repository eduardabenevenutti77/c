/*
ponteiros:

-> espaço reservado de memória para guardar o endereço de mémoria de outra váriavel;
-> não armazena: floar, int, char ou booleano;
-> precisamos declarar ele antes de utilizar;
-> usa-se * para informar ao sistema que ali para reservar o endereço de outra váriavel;
-> tem que tomar cuidado quando for utilizar!!
-> endereço da variável é dado pelo seguinte simbolo = & (&i) - considere-se i como o nome da variável;

	mostrar o endereço da váriavel:

int idade = 44;
int *p = &idade; - *p = 2 (posição na mémoria ram)

	variáveis normais:

int num;
float nota;
struct pessoa p;

	declaração de ponteiros:

int *num;
float *nota;
struct pessoa *p;

mémoria ram: é uma sequência de bytes;
*/

#include <stdio.h>

void main() {
	system("chcp 65001");
	printf("\n\t \e[33;1maula sobre a utilização de ponteiros e funções!\e[33;0m\n");

	/*int i = 10; //variável I inicia com o valor de 10
	int *p; //ponteiro para int

	p = &i; //ponteiro p aponta para o valor de i

	printf("\n O valor de i é: \e[33;1m%d\e[33;0m", i);
	printf("\n O valor apontado por p é: \e[33;1m%d\e[33;0m", *p);
	printf("\n O endereço de i armazenado em p é: \e[33;1m%d\e[33;0m\n", p);

	*p = 20; //modificando o valor do ponteiro

	printf("\n\t \e[33;1mMODIFICANDO O VALOR DO PONTEIRO\e[33;0m\n");
	printf("\n O valor de i é: \e[33;1m%d\e[33;0m", i);
	printf("\n O valor apontado por p é: \e[33;1m%d\e[33;0m", *p);
	printf("\n O endereço de i armazenado em p é: \e[33;1m%d\e[33;0m", p);
	
	int i = 100;
	int *p;
	
	p = &i;
	printf("\n O valor de i é: \e[33;1m%d\e[33;0m", i);
	printf("\n O valor apontado por p é: \e[33;1m%d\e[33;0m\n", *p);
	
	*p = 12;
	printf("\n O valor de i é: \e[33;1m%d\e[33;0m", i);
	printf("\n O valor apontado por p é: \e[33;1m%d\e[33;0m\n", *p);
	
	i = 547;
	printf("\n O valor de i é: \e[33;1m%d\e[33;0m", i);
	printf("\n O valor apontado por p é: \e[33;1m%d\e[33;0m\n", *p);
	
	int i;
	int *p;
	printf("\n \e[33;1m%d %d\e[33;0m",p,&i);
	
	p = &i;
	printf("\n \e[33;1m%d %d\e[33;0m",p,&i);
	printf("\n\n");
	
	int valor = 27;
	int *ptr;
	
	ptr = &valor;
	
	printf("\n O conteúdo da variável valor: \e[33;1m%d\e[33;0m", valor);
	printf("\n Endereço da variável valor: \e[33;1m%x\e[33;0m", &valor);
	printf("\n Conteúdo da variável ponteiro: \e[33;1m%x\e[33;0m", ptr);
	
	int *p, *p1;
	int i = 10;
	p = &i;
	p1 = p;
	
	printf("\n=> \e[33;1m%d\e[33;0m", *p1);
	
	int j = 20;
	p1 = &j;
	printf("\n=> \e[33;1m%d\e[33;0m", *p1);
	*p1 = *p;
	printf("\n=> \e[33;1m%d\e[33;0m", *p1);*/
	
	//adição e subtração de ponteiros
	
	int *p;
	int i=10, j=20, k=30;
	p=&j;
	printf("\n 1º O valor de *p = \e[33;1m%d\e[33;0m",*p);
	printf("\n 1º Endereço de p = \e[33;1m%d\e[33;0m\n", p);
	
	p++;
	printf("\n 2º O valor de *p = \e[33;1m%d\e[33;0m", *p);
	printf("\n 2º Endereço de p = \e[33;1m%d\e[33;0m\n", p);
	
	printf("\n 3º Endereço de p = \e[33;1m%d\e[33;0m\n", --p);
	
	printf("\n 4º Endereço de i = \e[33;1m%d\e[33;0m", i);
	printf("\n 4º Endereço de k = \e[33;1m%d\e[33;0m", k);
	printf("\n 4º Endereço de j = \e[33;1m%d\e[33;0m", j);
	printf("\n\n");
	
	system("pause");
}
