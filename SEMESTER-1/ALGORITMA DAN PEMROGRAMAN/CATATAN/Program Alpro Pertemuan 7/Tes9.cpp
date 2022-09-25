#include <cstdio>

// PROGRAM MEMBUAT MEMASUKKAN BILANGAN BULAT ANTARA N-N

int bilangan;

int main()
{
	printf("Masukkan bilangan bulat antara 1-10 atau 21-30: ");
	scanf("%i", &bilangan);
	
	if (((bilangan >=1)&&(bilangan <=10)) || ((bilangan >=21)&&(bilangan <=30)))
	{
		printf("Mantap, jawaban anda benar!");
	}
	else
	{
		printf("Maaf, jawaban anda salah!");
	}

}
