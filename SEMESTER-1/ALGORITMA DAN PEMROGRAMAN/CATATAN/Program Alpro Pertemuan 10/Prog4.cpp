#include <cstdio>

//PROGRAM MENGGUNAKAN DO UNTUK MENGEKSEKUSI PROGRAM YANG TIDAK DIKETAHUI KAPAN TRUE DAN FALSE

int bil1, bil2;

int main()
{
	printf("Masukkan dua buah bilangan bulat yang ingin dijumlahkan dengan dipisah spasi: ");
	scanf("%i %i", &bil1, &bil2);
	while (bil1 > 0)
	{
		printf ("%i\n", bil1);
		bil1 = bil1 - bil2;
	}
	printf("Terimakasih telah menggunakan program ini\n");
	return 0;
}
