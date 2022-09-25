#include <cstdio>

int counter;

int main()
{
	printf("Masukkan Bilangan Positif: ");
	scanf("%i", &counter);
	for(counter = counter; counter >= 0; counter--)
	{
		printf("%i\n", counter);
	}
	return 0;
}
