#include <cstdio> //ARRAY 2 DIMENSI INPUTAN USER

int a[3][4];

int main()
{
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
		{
			printf ("Masukkan data[%i][%i]: ", i+1, j+1);
			scanf("%i", &a[i][j]);
		}
		
	}
	
	printf("\n\nMENAMPILKAN DATA ARRAY YANG TELAH DIMASUKKAN\n");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
		{
			printf ("Data[%i][%i] = %i\n", i+1, j+1, a[i][j]);
		}
		
	}
	printf("\nTampilan berupa matriks\n");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
		{
			printf ("%i\t ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
