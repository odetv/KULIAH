#include <cstdio>

int counter, bil;

int main()
{

	//for (counter = 3; counter <= 30; counter = counter +3)
	printf("Masukkanlah sebuah bilangan: ");
	scanf("%i", &bil);
	for (counter = 1; counter <= 12; counter++)
	{
		printf("Nilai Bilangan = %i\n", bil*counter);
	}
	return 0;
}

