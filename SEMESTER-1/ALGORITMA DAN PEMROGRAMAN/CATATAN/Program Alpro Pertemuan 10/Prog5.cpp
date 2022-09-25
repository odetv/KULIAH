#include <cstdio>

int batas, x, kuadrat;

int main()
{
	printf("Masukkan sebuah bilangan sembarang: ");
	scanf("%i", &batas);
	x = 0;
	kuadrat = x*x;
	while (kuadrat <= batas)
	{
		printf("%i\n", kuadrat);
		x++;
		kuadrat = x*x;
	}
	printf("\nTerimakaish");
	return 0;
}
