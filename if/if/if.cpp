#include<stdio.h>
#include<stdlib.h>

int main() {

	int num;

	printf("Digite um numero: ");
	scanf_s("%d", &num);

	if (num > 5) {
		printf("O numero digitado eh maior que 5!\n\n");
	}
	else {
		printf("O numero digitado eh menor ou igual a 5!\n\n");
	}
	
	return 0;
}