#include <cstdio>

int x, y, kolom;

int main()
{
	printf ("Masukkanlah jumlah kolom yang akan dibuat: ");
	scanf ("%i", &kolom);

	for (int y=1; y<=kolom; y++)
	{
		for (int x=y; x>=1; x--)
		{
			printf("%i", x);
		}
		printf("\n");
	}
	return 0;
}
