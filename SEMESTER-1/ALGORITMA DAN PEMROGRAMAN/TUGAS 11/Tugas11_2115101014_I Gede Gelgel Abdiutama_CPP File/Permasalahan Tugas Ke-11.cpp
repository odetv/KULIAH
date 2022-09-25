#include <cstdio>

int mutlak(int i)
{
	return i>0?i:i*-1;
}
int negatif(int i)
{
	if (i < 0)
	{
		return i>0?i:i*-1;
	}
	else
	{
		return i<0?i:i*-1;
	}
}
int bujurSangkar(int a, int b)
{
	return (a * b);
}
int persegiPanjang(int p, int l)
{
	return (p * l);
}
float segitiga(int ps, int ts)
{
	return (0.5 * ps * ts);
}
float lingkaran(int jari)
{
	return (3.14 * jari * jari);
}
int balok(int p, int l, int t)
{
	return (p * l * t);
}

int main()
{
	int p, l, t, a, b, bil, hasil;
	float ps, ts, jari;
	printf("SELAMAT DATANG DI PROGRAM FUNCTION\n\n");
	
	printf("1. FUNGSI MENGHITUNG NILAI MUTLAK\n");
	printf("Masukkan bilangan bulat: ");
	scanf("%i", &bil);
	printf("Hasil Mutlak = %i\n\n", mutlak(bil));
	
	printf("2. FUNGSI MENGUBAH NILAI POSITIF NEGATIF\n");
	printf("Masukkan bilangan bulat: ");
	scanf("%i", &bil);
	printf("Hasil Nilai = %i\n\n", negatif(bil));
	
	printf("3. FUNGSI MENGHITUNG LUAS BANGUN BUJUR SANGKAR\n");
	printf("Masukkan Sisi x Sisi, dipisah dengan spasi: ");
	scanf("%i %i", &a, &b);
	printf("Luas Bangun Bujur Sangkar = %i\n\n", bujurSangkar(a, b));
	
	printf("4. FUNGSI MENGHITUNG LUAS BANGUN PERSEGI PANJANG\n");
	printf("Masukkan Panjang x Lebar, dipisah dengan spasi: ");
	scanf("%i %i", &p, &l);
	printf("Luas Bangun Persegi Panjang = %i\n\n", persegiPanjang(p, l));
	
	printf("5. FUNGSI MENGHITUNG LUAS BANGUN SEGITIGA\n");
	printf("Masukkan Panjang Alas x Tinggi, dipisah dengan spasi: ");
	scanf("%f %f", &ps, &ts);
	printf("Luas Bangun Persegi Panjang = %.2f\n\n", segitiga(ps, ts));
	
	printf("6. FUNGSI MENGHITUNG LUAS LINGKARAN\n");
	printf("Masukkan Jari-jari Lingkaran: ");
	scanf("%f", &jari);
	printf("Luas Bangun Persegi Panjang = %.2f\n\n", lingkaran(jari));
	
	printf("7. FUNGSI MENGHITUNG VOLUME BALOK\n");
	printf("Masukkan Panjang x Lebar x Tinggi Balok, dipisah dengan spasi: ");
	scanf("%i %i %i", &p, &l, &t);
	printf("Luas Bangun Persegi Panjang = %i\n\n", balok(p, l, t));

	return 0;
}
