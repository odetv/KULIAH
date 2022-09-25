#include <cstdio>

int data, i;

int main()
{
	printf("PROGRAM MENGHITUNG RATA-RATA\n\n\n");
	printf("Masukkan Banyaknya Jumlah Data: ");
	scanf("%i",&data);
	printf("\n");
	
	float total, ratarata, jml[data];
	for (i=0; i<data; i++)
	{
	    printf("Data Ke-%d = ", i+1);
	    scanf("%f",&jml[i]);
	}
	
	total = 0;
	for (i=0; i<data; i++)
	{
	    total += jml[i];
	}
	ratarata = total / data;
	printf("\nRata-rata Data = %.2f", ratarata);
	return 0;
}
