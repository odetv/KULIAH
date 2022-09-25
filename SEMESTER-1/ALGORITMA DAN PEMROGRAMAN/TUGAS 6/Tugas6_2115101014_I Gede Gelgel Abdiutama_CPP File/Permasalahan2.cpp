#include <cstdio>

int pilihan, bil1, bil2, hasil, sisa;
char ulang;

int main()
{
	do
	{
		printf("SELAMAT DATANG DI PROGRAM KALKULATOR\n");
		printf("PILIHAN OPERASI:\n\n");
		printf("1. Penjumlahan\n");
		printf("2. Pengurangan\n");
		printf("3. Perkalian\n");
		printf("4. Pembagian\n\n\n");
		printf("Silahkan pilih nomor menu: ");
		scanf("%i", &pilihan);
		
		if (pilihan == 1)
		{
			printf("Masukkan dua bilangan yang akan dijumlahkan, dengan dipisah spasi: ");
			scanf("%i %i", &bil1, &bil2);
			hasil = bil1 + bil2;
			printf("%i + %i = %i\n\n", bil1, bil2, hasil);
			printf("Mau menghitung kembali? (y/t): ");
			scanf("%s", &ulang);
			}
		else if (pilihan == 2)
		{
			printf("Masukkan bilangan yang akan dikurangi dan pengurangnya, dengan dipisah spasi: ");
			scanf("%i %i", &bil1, &bil2);
			hasil = bil1 - bil2;
			printf("%i - %i = %i\n\n", bil1, bil2, hasil);
			printf("Mau menghitung kembali? (y/t): ");
			scanf("%s", &ulang);
		}
		else if (pilihan == 3)
		{
			printf("Masukkan dua bilangan yang akan dikalikan, dengan dipisah spasi: ");
			scanf("%i %i", &bil1, &bil2);
			hasil = bil1 * bil2;
			printf("%i x %i = %i\n\n", bil1, bil2, hasil);
			printf("Mau menghitung kembali? (y/t): ");
			scanf("%s", &ulang);
		}
		else if (pilihan == 4)
		{
			printf("Masukkan bilangan yang akan dibagi dan pembaginya, dengan dipisah spasi: ");
			scanf("%i %i", &bil1, &bil2);
			hasil = bil1 / bil2;
			sisa = bil1 % bil2;
			printf("%i / %i = %i \nSisa %i\n\n", bil1, bil2, hasil, sisa);
			printf("Mau menghitung kembali? (y/t): ");
			scanf("%s", &ulang);
		}
		else
		{
			printf("Nomor pilihan %i tidak ada di daftar menu.\n\n", pilihan);
		}
	}
	
	while (ulang == 'y');
	printf("\nTERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI");
	
	return 0;
}
