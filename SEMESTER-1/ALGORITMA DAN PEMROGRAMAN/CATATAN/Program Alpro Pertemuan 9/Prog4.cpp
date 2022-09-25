#include <cstdio>

int counter, bil;

int main()
{

	printf("Masukkanlah sebuah bilangan: ");
	scanf("%i", &bil);
	for (counter = 1; counter <= 12; counter++)
	{
		for (counter = 1; counter <= counter; bil++)
		{
			printf("*");
		}
		printf ("\n");
	}
	
	return 0;
}
