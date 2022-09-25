#include <cstdio>

// PROGRAM MEMUNCULKAN NILAI HURUF DARI NILAI ANGKA

int nilaiangka;

int main ()
{
 printf("Masukan nilai angka bulat =  ");
 scanf ("%i", &nilaiangka);
 
 	if (nilaiangka >= 80)	
	{
		printf ("Nilai yang diperoleh : A");
	}
	else if (nilaiangka >= 70)
	{
		printf ("Nilai yang diperoleh : B");
	}
	else if (nilaiangka >= 50)
	{
		printf ("Nilai yang diperoleh : C");
	}
	else if (nilaiangka >= 40)
	{
		printf ("Nilai yang diperoleh : D");
	}
	else
	{
		printf ("Nilai yang diperoleh : E");
	}
	printf("\n\nTerima kasih ");
	return 0;
}
