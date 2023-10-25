#include <stdio.h>

int main() {
	
	printf("(A)        (B)         (C)        (D)\n");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j <= i) printf("*");
			else printf(" ");
		}//(A)
		printf(" ");
		for (int j = 10; j >= 0; j--)
		{
			if (j >= i) printf("*");
			else printf(" ");
		}//(B)
		printf(" ");
		for (int j = 1; j <= 10; j++)
		{
			if (j >= i) printf("*");
			else printf(" ");
		}//(C)
		printf(" ");
		for (int j = 10; j >= 0; j--)
		{
			if (j >= i) printf(" ");
			else printf("*");
		}//(D)
		printf(" ");
		printf("\n");
	}
}