#include<stdio.h>
void main(){
	system("chcp 65001");
	int mt;
	int transf;
	printf("\n\t Transforme metros em centímetros !");
	printf("\n Informe qual é valor em metros que você deseja transformar em cm => ");
	scanf("%d",&mt);
	transf = (mt*100);
	printf("\n %d metros equivale %d centímetros",mt,transf);
}