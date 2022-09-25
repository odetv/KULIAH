#include <cstdio>

//PROGRAM MENGGUNAKAN DO UNTUK MENGEKSEKUSI PROGRAM YANG TIDAK DIKETAHUI KAPAN TRUE DAN FALSE

int bil1, bil2, hasil;
char pilihan;

int main()
{
	do
	{
		printf("Masukkan dua buah bilangan bulat yang ingin dijumlahkan dengan dipisah spasi: ");
		scanf("%i %i", &bil1, &bil2);
		hasil = bil1 + bil2;
		printf ("%i + %i = %i\n\n", bil1, bil2, hasil);
		printf("Mau menghitung kembali? (y/t): ");
		scanf("%s", &pilihan);
	}
	while (pilihan == 'y');
	
	printf("Terimakasih telah menggunakan program ini\n");
	return 0;
}
