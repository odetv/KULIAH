#include <cstdio>

// PROGRAM MEMBUAT MEMASUKKAN BILANGAN BULAT ANTARA N-N

int bilangan;

int main()
{
	printf("Masukkan bilangan genap yang lebih besar dari 1 dan lebih kecil dari 100: ");
	scanf("%i", &bilangan);
	
	if ((bilangan %2 == 0 && bilangan > 1) && (bilangan < 100))
	{
		printf("Mantap, jawaban anda benar!");
	}
	else
	{
		printf("Maaf, jawaban anda salah!");
	}

}
