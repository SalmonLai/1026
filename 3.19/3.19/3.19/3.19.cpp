#include <stdio.h>

int main() {

	float principal = 0, rate, day;

	while (principal!=-1)
	{
		printf("Enter loan principal(-1 to end)¡G");
		scanf_s("%f",&principal);
		if (principal == -1) break;
		printf("Enter interest rate¡G");
		scanf_s("%f",&rate);
		printf("Enter term of loan in days¡G");
		scanf_s("%f",&day);
		printf("The interest charges is $%.2f\n\n",principal*rate*day/365);
	}
}