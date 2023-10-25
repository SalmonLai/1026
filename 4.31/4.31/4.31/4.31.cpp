#include <stdio.h>

int main() {

	int h = 9;
	int spa = h / 2;
	int sta = 1;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < spa ; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < sta ; j++)
		{
			printf("*");
		}
		printf("\n");
		if (i < (h/2))
		{
			spa--;
			sta += 2;
		}
		else
		{
			spa++;
			sta -= 2;
		}
	}
}