#include <cstdio>

// PROGRAM MEMBUAT PERNYATAAN PEMBAGIAN

int bilangan;

int main()
{
	printf("Masukkan bilangan bulat yang habis dibagi 3 dan habis dibagi 4: ");
	scanf("%i", &bilangan);
	
	if ((bilangan % 3 == 0) && (bilangan % 4 == 0))
	{
		printf("Mantap, jawaban anda benar!");
	}
	else
	{
		printf("Maaf, jawaban anda salah!");
	}

}
