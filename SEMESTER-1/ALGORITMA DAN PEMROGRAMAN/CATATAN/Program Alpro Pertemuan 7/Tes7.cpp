#include <cstdio>

// PROGRAM MEMBUAT PERNYATAAN NOT LEBIH DARI ATAU KURANG DARI

int bilangan;

int main()
{
	printf("Masukkan bilangan bulat yang lebih kecil dari 10 atau lebih besar dari 20: ");
	scanf("%i", &bilangan);
	
	if (!((bilangan < 10) || (bilangan > 20)))
	{
		printf("Mantap, jawaban anda benar!");
	}
	else
	{
		printf("Maaf, jawaban anda salah!");
	}

}
