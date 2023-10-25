#include <stdio.h>

int main() {

	int code;
	float pay;

	while (1)
	{
		printf("Enter the employee's pay code (1=Manager, 2=Hourly Worker, 3=Commission Worker, 4=Pieceworker, 0=Exit)¡G");
		scanf_s("%d", &code);
		if (code == 0) break;

		switch (code)
		{
		case(1)://Manager
			printf("Enter the manager's weekly salary¡G$");
			scanf_s("%f", &pay);
			break;
		case(2)://Hourly Worker
			float wage, hour;
			printf("Enter the hourly wage¡G$");
			scanf_s("%f", &wage);
			printf("Enter the hours worked¡G");
			scanf_s("%f", &hour);
			if (hour > 40) pay = (40 * wage) + ((hour - 40) * 1.5 * wage);
			else pay = hour * wage;
			break;
		case(3)://Commission Worker
			float sale;
			printf("Enter the gross weekly sales¡G$");
			scanf_s("%f", &sale);
			pay = 250 + (0.057 * sale);
			break;
		case(4)://Pieceworker
			float produced, rate;
			printf("Enter the number of pieces produced¡G");
			scanf_s("%f", &produced);
			printf("Enter the piece rate¡G$");
			scanf_s("%f", &rate);
			pay = produced * rate;
			break;
		default:
			printf("Invalid pay code. Please enter a valid pay code (1-4).\n");
			continue;
		}

		printf("Weekly pay: $%.2f\n", pay);
	}
	
}