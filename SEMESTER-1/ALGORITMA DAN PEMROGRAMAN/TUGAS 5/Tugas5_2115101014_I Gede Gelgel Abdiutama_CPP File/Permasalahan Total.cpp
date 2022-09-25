#include <cstdio>

int counter;

int main()
{
	printf("Permasalahan Ke-1\n");
	for (counter = 1; counter <= 10; counter++)
	{
		printf("Halo\n");
	}
	printf("\n");
	
	printf("Permasalahan Ke-2\n");
	for (counter = 1; counter <= 8; counter++)
	{
		printf("Halo ");
	}
	printf("\n\n");
	
	printf("Permasalahan Ke-3\n");
	for (counter = 0; counter <= 28; counter = counter + 2)
	{
		printf("Bilangan Genap Positif = %i\n", counter);
	}
	printf("\n");
	
	printf("Permasalahan Ke-4\n");
	for (counter = 1; counter <= 30; counter = counter + 2)
	{
		printf("Bilangan Ganjil Positif = %i\n", counter);
	}
	printf("\n");
	
	printf("Permasalahan Ke-5\n");
	printf("Masukkan Bilangan Positif: ");
	scanf("%i", &counter);
	for(counter = counter; counter >= 0; counter--)
	{
		printf("%i\n", counter);
	}
	printf("\n");
	
	printf("Permasalahan Ke-6\n");
	printf("Masukkan Bilangan Positif: ");
	scanf("%i", &counter);
	for(counter = counter; counter >= 0; counter -= 3)
	{
		printf("%i\n", counter);
	}
	return 0;
}
