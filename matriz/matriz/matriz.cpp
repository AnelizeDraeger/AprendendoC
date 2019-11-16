#include<stdio.h>
#include<stdlib.h>

#define posicoes 5

int main()
{
	int matriz [posicoes] = { 0 };

	for (int i = 0; i < posicoes; i++){
		printf("Digite o valor da posicao %d do vetor: ", i);
		scanf_s("%d", &matriz[i]);
	}

	int referencia = 0;
	for (int i = 1; i < posicoes; i++) {
		if (matriz[i] > matriz[referencia]) {
			referencia = i;
		}
	}

	printf("\nO maior valor da matriz eh %d, na posicao %d.\n", matriz[referencia], referencia);

	system("pause");
	return 0;
}