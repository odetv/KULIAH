#include <cstdio>

int bil, jumlah, terbesar;

int main()
{
	do
	{
	printf("Masukkan Sebuah Bilangan Positif: ");
	scanf("%i", &bil);
	jumlah+=bil;
	printf("Jumlah= %i\n",jumlah);
	if (bil >= terbesar)
	{
		terbesar=bil;
	}
	}while(jumlah<100);
	printf("Jumlah Bilangan Sudah Maximum >100\n\n");

	printf("Nilai Inputan Terbesar: %i", terbesar);

return 0;
}
