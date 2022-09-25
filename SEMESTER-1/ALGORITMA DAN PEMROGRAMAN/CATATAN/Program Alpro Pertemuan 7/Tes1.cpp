#include <cstdio>

// PROGRAM MENAMPILKAN PILIHAN Y ATAU T

char pilihan;

int main()
{
	printf("Apakah anda ingin melihat pesan tersembunyi? (y/t): ");
	scanf("%c", &pilihan);
	
	if (pilihan == 'y')
	{
		printf("Pesan rahasia: Aku cinta kamu \n");
		printf("Eitt tapi boong");
		printf("\n\nTerimakasih sobat");
	}
	else
	{
		printf("Maaf coba lagi");
	}

	return 0;
	
}
