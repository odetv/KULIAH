#include <cstdio>

int kolom;

int main()
{
	printf ("PERMASALAHAN KE-2\n\n");
	printf ("Masukkanlah jumlah kolom yang akan dibuat: ");
	scanf ("%i", &kolom);

	for (int y=kolom; y>=1; y--)
	{
		for (int x=kolom; x>=y; x--)
		{
			printf("%i ", x);
		}
		printf("\n");
	}
	return 0;
}
