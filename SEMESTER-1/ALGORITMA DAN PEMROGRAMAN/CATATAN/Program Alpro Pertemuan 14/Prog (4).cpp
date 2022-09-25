#include <cstdio> //Program Function Lebih Bersih Kalkulator

int Tambah(int a, int b)
{
	return (a + b);
}
int Kurang(int a, int b)
{
	return (a - b);
}
int Kali(int a, int b)
{
	return (a * b);
}
bool Bagi(int a, int b, int* hasil, int* sisa)
{
	if (b == 0)
	{
		return false;
	}
	else
	{
		*hasil = a/b;
		*sisa = a%b;
		return true;
		
	}
}

int main()
{
	int bil1, bil2, hasil, sisa;
	printf("Masukkan dua bilangan bulat dengan dipisah spasi: ");
	scanf("%i %i", &bil1, &bil2);
	printf("Hasil Penjumlahan = %i\n", Tambah(bil1, bil2));
	printf("Hasil Pengurangan = %i\n", Kurang(bil1, bil2));
	printf("Hasil Perkalian = %i\n", Kali(bil1, bil2));
	if (Bagi(bil1, bil2, &hasil, &sisa))
	{
		printf("Hasil Pembagian = %i\n", hasil);
		printf("Hasil Sisa Pembagian = %i\n", sisa);
	}
	else
	{
		printf("Pembagian tidak bisa dilakukan");
	}
	return 0;
}
