#include <stdio.h>

int main() {
	float x = 5000, r = 10;

	for (int i = 0; i < 15; i++)
	{
		x *= (r / 100) + 1;
		r += 0.5;
	}
	printf("vary¡G%.2f", x);
}