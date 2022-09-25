#include <cstdio>

int kolom, baris, jumlah;

int main()
{
	printf ("Masukkanlah jumlah kolom yang akan dibuat: ");
	scanf ("%i", &kolom);
	printf ("Masukkanlah jumlah baris yang akan dibuat: ");
	scanf ("%i", &baris);
	for (int y=1; y<=kolom; y++)
	{
	
		for (int x=1; x<=baris; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
