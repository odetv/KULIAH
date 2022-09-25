#include <cstdio>

int pilihan;
int bil1, bil2, hasil, sisa;

int main()
{
	printf("Menu pilihan:\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n\n");
	printf("Silahkan pilih nomor menu: ");
	scanf("%i", &pilihan);
	
	if (pilihan == 1)
	{
		printf("Masukkan dua bilangan yang akan dijumlahkan, dengan dipisah spasi: ");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 + bil2;
		printf("%i + %i = %i\n\n", bil1, bil2, hasil);
	}
	else if (pilihan == 2)
	{
		printf("Masukkan bilangan yang akan dikurangi dan pengurangnya, dengan dipisah spasi: ");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 - bil2;
		printf("%i - %i = %i\n\n", bil1, bil2, hasil);
	}
	else if (pilihan == 3)
	{
		printf("Masukkan dua bilangan yang akan dikalikan, dengan dipisah spasi: ");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 * bil2;
		printf("%i x %i = %i\n\n", bil1, bil2, hasil);
	}
	else if (pilihan == 4)
	{
		printf("Masukkan bilangan yang akan dibagi dan pembaginya, dengan dipisah spasi: ");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 / bil2;
		sisa = bil1 % bil2;
		printf("%i / %i = %i sisa %i\n\n", bil1, bil2, hasil, sisa);
	}
	else
	{
		printf("Nomor pilihan %i tidak ada di daftar menu.\n\n", pilihan);
	}
	
	printf("Terima kasih");
	
	return 0;
}