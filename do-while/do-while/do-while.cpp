#include<stdio.h>
#include<stdlib.h>

int main() {

	int num;

	do {
		printf("Digite um numero ou digite 0 para sair: ");
		scanf_s("%d", &num);
	} while (num != 0);

	system("pause");
	return 0;
}