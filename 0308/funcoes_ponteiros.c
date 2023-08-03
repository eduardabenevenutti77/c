/*
ponteiros:

-> espaço reservado de memória para guardar o endereço de mémoria de outra váriavel;
-> não armazena: floar, int, char ou booleano;
-> precisamos declarar ele antes de utilizar;
-> usa-se * para informar ao sistema que ali para reservar o endereço de outra váriavel;
-> tem que tomar cuidado quando for utilizar!!
-> endereço da váriavel é dado pelo seguinte simbolo = & (&i) - considere-se i como o nome da váriavel;

	mostrar o endereço da váriavel:
	
int idade = 44;
int *p = &idade; - *p = 2 (posição na mémoria ram)

	váriaveis normais:
	
int num;
float nota;
struct pessoa p;

	declaração de ponteiros:
	
int *num;
float *nota;
struct pessoa *p;

funções: ;
mémoria ram: é uma sequência de bytes;
*/
#include <stdio.h>

void main(){
	printf("\n\t aula sobre a utilização de ponteiros e funções!")
	
	int i = 10;
	int *p;
	
	p = &i;
	
	printf("\n O valor de i é: %d", i);
	printf("\n O valor apontado por p é: ", *p);
	printf("\n O endereço de i armazenado em p é: ", );
}
