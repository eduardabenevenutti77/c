#include<stdio.h>

void main(){
	system("chcp 65001");
	int i;
	for(i=11;i<=10;i++){
		printf("laço FOR \n");
	}
	i=11;
	while(i<=10){
		printf("Laço While \n");
	}
	i=11;
	do{
		printf("Laço Do-While");
		i++;	
	}while(i<=10);
	
	return 0;
}