#include <cstdio>

// PROGRAM MEMASUKKAN NILAI YANG BENAR

int bil;

int main ()
{
 printf("Masukan bilangan bulat lebih dari 10 =  ");
 scanf ("%i", &bil);
 
 	if (bil > 10)	
	{
		printf ("Tepat sekali, %i lebih besar dari 10", bil);
	}
	else if (bil < 10)
	{
		printf ("Maaf bilangan yang dimasukkan tidak lebih besar dari 10\n");
		printf ("%i lebih kecil dari 10", bil);
	}
	else
	{
		printf ("Maaf bilangan yang dimasukkan tidak lebih besar dari 10\n");
		printf ("%i sama dengan 10", bil);
	}
	printf("\n\nTerima kasih ");
	return 0;
}
