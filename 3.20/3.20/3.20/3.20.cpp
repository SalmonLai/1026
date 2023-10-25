#include <stdio.h>

int main() {

	float money = 0, hour;

	while (money != -1)
	{
		printf("Enter of hours worked(-1 to end)¡G");
		scanf_s("%f", &money);
		if (money == -1) break;
		printf("Enter hourly rate of worked¡G");
		scanf_s("%f", &hour);
		printf("Salary is $%.2f\n\n", money*hour);
	}
}