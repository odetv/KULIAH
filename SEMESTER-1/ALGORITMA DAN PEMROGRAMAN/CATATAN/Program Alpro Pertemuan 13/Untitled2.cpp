#include <cstdio> //ARRAY 1 DIMENSI DENGAN INPUTAN USER

int a[5];

int main()
{
	for (int i=0; i<5; i++)
	{
		printf ("Masukkan data ke-%i: ", i+1);
		scanf("%i", &a[i]);
	}
	
	printf("\n\nMENAMPILKAN DATA ARRAY YANG TELAH DIMASUKKAN\n");
	for (int i=0; i<5; i++)
	{
		printf("Data Ke-%i = %i\n", i+1, a[i]);
	}
	
	return 0;
}
