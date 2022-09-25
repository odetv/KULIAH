#include <cstdio> //Program Function Kalkulator

void TampilkanMenu()
{
	printf("Menu pilihan:\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n\n");
	return;
}

int PilihMenu()
{
	int pil;
	printf("Silahkan pilih nomor menu: ");
	scanf("%i", &pil);
	return pil;
}

void OperasiPenjumlahan()
{
	int bil1, bil2, hasil;
	printf("Masukkan dua bilangan yang akan dijumlahkan, dengan dipisah spasi: ");
	scanf("%i %i", &bil1, &bil2);
	hasil = bil1 + bil2;
	printf("%i + %i = %i\n\n", bil1, bil2, hasil);
}
void OperasiPengurangan()
{
	int bil1, bil2, hasil;
	printf("Masukkan bilangan yang akan dikurangi dan pengurangnya, dengan dipisah spasi: ");
	scanf("%i %i", &bil1, &bil2);
	hasil = bil1 - bil2;
	printf("%i - %i = %i\n\n", bil1, bil2, hasil);
}
void OperasiPerkalian()
{
	int bil1, bil2, hasil;
	printf("Masukkan dua bilangan yang akan dikalikan, dengan dipisah spasi: ");
	scanf("%i %i", &bil1, &bil2);
	hasil = bil1 * bil2;
	printf("%i x %i = %i\n\n", bil1, bil2, hasil);
}
void OperasiPembagian()
{
	int bil1, bil2, hasil, sisa;
	printf("Masukkan bilangan yang akan dibagi dan pembaginya, dengan dipisah spasi: ");
	scanf("%i %i", &bil1, &bil2);
	hasil = bil1 / bil2;
	sisa = bil1 % bil2;
	printf("%i / %i = %i sisa %i\n\n", bil1, bil2, hasil, sisa);
}

int pilihan;

int main()
{
	TampilkanMenu();
	pilihan = PilihMenu();
	
	switch (pilihan)
	{
		case 1:
			{
				OperasiPenjumlahan();
				break;
			}
		case 2:
			{
				OperasiPengurangan();
				break;
			}	
		case 3:
			{
				OperasiPerkalian();
				break;
			}
		case 4:
			{
				OperasiPembagian();
				break;
			}
		default:
			{
				printf("Nomor pilihan %i tidak ada di daftar menu.\n\n", pilihan);
			}	
	}
	return 0;
}
