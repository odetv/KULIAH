#include <cstdio> //Program Function Lebih Bersih Kalkulator

void TampilkanMenu()
{
	printf("Menu pilihan:\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
//	printf("3. Perkalian\n");
//	printf("4. Pembagian\n\n");
	return;
}

int tambah(int bil1, int bil2)
{
	return (bil1 + bil2);
}
int kurang(int bil1, int bil2)
{
	return (bil1 - bil2);
}
void MengubahNilai (int bil)
{
	printf ("Nilai awal bil bil = %i\n", bil);
	bil+= 10;
	printf ("Nilai bil setelah ditambah 10 = %i\n", bil);
}


int pilihan;

int main()
{
	int a, b, hasilTambah, hasilKurang;
//	printf("Masukkan dua bilangan yang akan dijumlahkan, dengan dipisah spasi: ");
//	scanf("%i %i", &a, &b);
	
	a = 3;
	b = 5;
	hasilTambah = tambah(a, b); //pass by value
	hasilKurang = kurang(a, b);
	printf("Hasil Penjumlahan = %i\n", hasilTambah);
	printf("Hasil Pengurangan = %i\n", hasilKurang);
	
	printf("Nilai a sebelum fungsi = %i\n", a);
	MengubahNilai(a);
	printf("Nilai a setelah pemanggilan mengubah fungsi = %i\n", a);
	
	return 0;
}
