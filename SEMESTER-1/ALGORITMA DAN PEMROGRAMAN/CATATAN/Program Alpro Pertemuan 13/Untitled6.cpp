#include <cstdio> //ARRAY 2 DIMENSI BANYAK SEMUA DATA DARI INPUTAN USER

//int** a;
int jmlbaris, jmlkolom;

int main()
{
	printf ("Masukkan Jumlah Baris: ");
	scanf("%i", &jmlbaris);
	printf ("Masukkan Jumlah Kolom: ");
	scanf("%i", &jmlkolom);
	
	int a[jmlbaris][jmlkolom];
	
/*	
	a = new int*[jmlbaris];
	for (int i=0; i<jmlbaris; i++)
	{
		a[i] = new int[jmlkolom];
	}
*/	
	
	for (int i=0; i<jmlbaris; i++)
	{
		for (int j=0; j<jmlkolom; j++)
		{
			printf ("Masukkan data[%i][%i]: ", i+1, j+1);
			scanf("%i", &a[i][j]);
		}
		
	}
	
	printf("\n\nMENAMPILKAN DATA ARRAY YANG TELAH DIMASUKKAN\n");
	for (int i=0; i<jmlbaris; i++)
	{
		for (int j=0; j<jmlkolom; j++)
		{
			printf ("Data[%i][%i] = %i\n", i+1, j+1, a[i][j]);
		}
		
	}
	printf("\nTampilan berupa matriks\n");
	for (int i=0; i<jmlbaris; i++)
	{
		for (int j=0; j<jmlkolom; j++)
		{
			printf ("%i\t ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
