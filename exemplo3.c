//calcule a média de duas notas em c
#include<stdio.h>
#include<conio.h>
void main(){
	float nota1, nota2;
	float media;
	nota1=6.6;
	nota2=8.2;
	
	system("chcp 65001");
	media = (nota1+nota2)/2.0;
	
	printf("média final => %2.2f", media);
	getch();
}