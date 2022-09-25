#include <cstdio>

int main()
{
	int tahun;

	printf("Praktikum Modul Ke-3\n");
	printf("PROGRAM MENGECEK TAHUN KABISAT\n\n");
	printf("Masukkan Tahun Yang Ingin Dibuktikan: ");
	scanf("%i", &tahun);
	
	if(tahun %400==0)
	{
		printf("%i adalah Tahun Kabisat\n", tahun);
	}
	else if(tahun %100==0)
	{
		printf("%i adalah Bukan Tahun Kabisat\n", tahun);
	}
	else if(tahun %4==0)
	{
		printf("%i adalah Tahun Kabisat\n", tahun);
	}
	else 
	{
		printf("%i adalah Bukan Tahun Kabisat\n", tahun);
	}
	
	return 0;
}