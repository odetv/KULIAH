#include <cstdio>

int kolom;

int main()
{
	printf ("PERMASALAHAN KE-4\n\n");
	printf ("Masukkanlah jumlah kolom yang akan dibuat: ");
	scanf ("%i", &kolom);

	for (int y=1; y<=kolom; y++)
	{
		for (int x=1; x<=y; x++)
		{
			printf("%i ", x);
		}
		printf("\n");
	}
	for (int y=kolom-1; y>=1; y--)
	{
		for (int x=1; x<=y; x++)
		{
			printf("%i ", x);
		}
		printf("\n");
	}
	return 0;
}
