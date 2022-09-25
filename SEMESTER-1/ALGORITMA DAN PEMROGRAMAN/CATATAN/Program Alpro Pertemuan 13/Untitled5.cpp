#include <cstdio> //ARRAY 1 DIMENSI BANYAK SEMUA DATA DARI INPUTAN USER

int* a;
int banyakdata;

int main()
{
	printf ("Masukkan banyaknya data yang ingin dibuat: ");
	scanf("%i", &banyakdata);
	
	a = new int[banyakdata];
	
	for (int i=0; i<banyakdata; i++)
	{
		printf ("Masukkan data ke-%i: ", i+1);
		scanf("%i", &a[i]);
	}
	
	printf("\n\nMENAMPILKAN DATA ARRAY YANG TELAH DIMASUKKAN\n");
	for (int i=0; i<banyakdata; i++)
	{
		printf("Data Ke-%i = %i\n", i+1, a[i]);
	}
	
	return 0;
}
