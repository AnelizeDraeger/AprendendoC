#include<stdio.h>
#include<stdlib.h>

int main() {

	int num1, num2;

	printf("Digite um numero: ");
	scanf_s("%d", &num1);

	printf("Digite outro numero: ");
	scanf_s("%d", &num2);

	for (int cont = num1; cont <= num2; cont++) {
		printf("Contagem entre os numeros digitados eh: %d\n", cont);
	}

	system("pause");
	return 0;
}