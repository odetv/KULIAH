#include <cstdio>

// PROGRAM MEMBUAT PERNYATAAN LEBIH DARI DAN KURANG DARI

int bilangan;

int main()
{
	printf("Masukkan bilangan bulat yang lebih besar dari 10 & lebih kecil dari 20: ");
	scanf("%i", &bilangan);
	
	if ((bilangan > 10) && (bilangan < 20))
	{
		printf("Mantap, jawaban anda benar!");
	}
	else
	{
		printf("Maaf, jawaban anda salah!");
	}

}
