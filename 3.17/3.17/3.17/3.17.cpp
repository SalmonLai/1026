#include <stdio.h>

int main() {
	float x[1023][4];
	int num=0;
	float balance, charges, credits, limit;
	while (num !=-1)
	{
		printf("Enter account number (-1 to end)¡G");
		scanf_s("%d", &num);
		if (num == -1) break;
		printf("Enter beginning balance¡G");
		scanf_s("%f", &balance);
		printf("Enter total charges¡G");
		scanf_s("%f", &charges);
		printf("Enter total credits¡G");
		scanf_s("%f", &credits);
		printf("Enter credits limit¡G");
		scanf_s("%f", &limit);
		if (limit<balance+charges-credits)
		{
			printf("Account¡G%d\n",num);
			printf("Credit limit¡G%.2f\n", limit);
			printf("Balance¡G%.2f\n", balance + charges - credits);
			printf("Credit Limit Exceeded");
		}
	}
}