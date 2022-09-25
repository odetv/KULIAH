#include <cstdio>

int kolom;

int main()
{
	printf ("Masukkanlah jumlah kolom yang akan dibuat: ");
	scanf ("%i", &kolom);

	for (int y=kolom; y>=1; y--)
	{
		for (int x=1; x<=y; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
