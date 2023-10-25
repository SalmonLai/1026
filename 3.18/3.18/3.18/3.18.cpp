#include <stdio.h>

int main() {

	float sale = 0;

	while (sale!=-1)
	{
		printf("Enter sales in dollars(-1 to end)¡G");
		scanf_s("%f", &sale);
		if (sale == -1) break;
		printf("Salary is¡G%.2f\n", sale*0.09 + 200);
	}
}