#include <cstdio>

int counter;

int main()
{
	printf("Masukkan Bilangan: ");
	scanf("%i", &counter);
	for(counter = counter; counter <= 100; counter++)
	{
		printf("%i\n", counter);
	}
	return 0;
}
