#include <cstdio>
// PROGRAM PERCABANGAN KALKULATOR MENGGUNAKAN IF ELSE

int pilihan, bil1, bil2, hasil, sisa;

int main()
{
    printf("SELAMAT DATANG DI PROGRAM KALKULATOR\n");
	printf("MENU PILIHAN:\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n\n");
	printf("Silahkan pilih nomor menu: ");
	scanf("%i", &pilihan);
	
	if (pilihan == 1)
	{
		printf("Masukkan dua bilangan yang akan dijumlahkan, dipisah dengan spasi:");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 + bil2;
		printf("%i + %i = %i\n\n", bil1, bil2, hasil);
	}
	else if (pilihan == 2)
	{
		printf("Masukkan dua bilangan yang akan dikurangkan, dipisah dengan spasi:");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 - bil2;
		printf("%i - %i = %i\n\n", bil1, bil2, hasil);
	}
	else if (pilihan == 3)
	{
		printf("Masukkan dua bilangan yang akan dikalikan, dipisah dengan spasi:");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 * bil2;
		printf("%i x %i = %i\n\n", bil1, bil2, hasil);
	}
	else if (pilihan == 4)
	{
		printf("Masukkan dua bilangan yang akan dikalikan, dipisah dengan spasi:");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 / bil2;
		sisa = bil1 % bil2;
		printf("%i / %i = %i\n\n", bil1, bil2, hasil, sisa);
	}
	else
	{
		printf("Maaf, nomor yang dipilih tidak ada!");
	}	
	printf("TERIMAKASIH");
	
	return 0;
}
