#include <stdio.h>

int main() {
	system("chcp 65001");
    int ano;
    printf("\n\t Descubra se o ano é bissexto !!\n");
    printf("\n Informe o ano => ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf(" Este ano é bissexto!\n");
    } else {
        if ((ano % 4 == 0) && (ano % 100 != 0)) {
            printf(" Este ano é bissexto!\n");
        } else {
            printf(" Este ano não é bissexto!\n");
        }
    }

    return 0;
}
