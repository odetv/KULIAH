#include <cstdio>

int kolom;

int main()
{
	printf ("PERMASALAHAN KE-3\n\n");
	printf ("Masukkanlah jumlah kolom yang akan dibuat: ");
	scanf ("%i", &kolom);

	for (int y=kolom; y>=1; y--)
	{
		for (int x=y; x>=1; x--)
		{
			printf("%i ", x);
		}
		printf("\n");
	}
	return 0;
}
