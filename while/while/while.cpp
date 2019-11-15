#include<stdio.h>
#include<stdlib.h>

int main() {

	int num = 1;

	while (num != 0) {
		printf("Digite um numero ou digite 0 para sair: ");
		scanf_s("%d", &num);
	 }

	system("pause");
	return 0;
}