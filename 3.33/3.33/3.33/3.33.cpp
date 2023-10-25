#include <stdio.h>

int main() {
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 12; j++)
		{
			if ((i == 2) && (j > 1) && (j < 12)) printf(" ");
			else printf("+");
		}
		printf("\n");
	}
}