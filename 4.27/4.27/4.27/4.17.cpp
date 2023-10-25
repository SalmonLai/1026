#include <stdio.h>

int main() {

	int a, b, c, n = 1;
	printf("a^2 + \tb^2 = \tc^2\n");

	do
	{
		a = (2 * n) + 1;
		b = (2 * n * n) + (2 * n);
		c = (2 * n * n) + (2 * n) + 1;
		n++;
		printf("%d\t%d\t%d\n",a,b,c);
	} while (c<500);


}