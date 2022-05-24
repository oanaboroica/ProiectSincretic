#include<stdio.h>
#include<string.h>
#define MAX_NUM 100

void generare(int n)
{
	int random[100], sum=0;
	srand(time(NULL));
	
	for (int i = 0; i < n; i++){
		random[i] = rand()%MAX_NUM;
		printf("%d ", random[i]);

		if (sqrt(random[i]) == (int)(sqrt(random[i])))
			sum = sum + 1;
	}

	printf("\n In sir exista %d patrate perfecte.", sum);
}

int main() {
	int n;
	printf("n= "); scanf("%d", &n);
	printf("Numerele generate sunt:\n");
	generare(n);

	return 0;
}