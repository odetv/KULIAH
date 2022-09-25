#include <cstdio> //ARRAY 2 DIMENSI INPUTAN USER

int matrikA[3][3];
int matrikB[3][3];
int matrikC[3][3];

int main()
{
	printf("MENAMPILKAN DATA ARRAY YANG TELAH DIMASUKKAN\n");
	for (int i=0; i<3; i++)
	{
		printf("Masukkan 3 bilangan data baris ke-%i MATRIK A, dipisah dengan spasi: ", i+1);
		scanf("%i %i %i", &matrikA[i][0], &matrikA[i][1], &matrikA[i][2]);
		
	}
	
	for (int i=0; i<3; i++)
	{
		printf("Masukkan 3 bilangan data baris ke-%i MATRIK B, dipisah dengan spasi: ", i+1);
		scanf("%i %i %i", &matrikB[i][0], &matrikB[i][1], &matrikB[i][2]);
		
	}
	
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			matrikC[i][j] = matrikA[i][j] + matrikB[i][j];
		}

	}
 
	printf("\nMatrik A:\n");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf ("%i\t ", matrikA[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrik B:\n");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf ("%i\t ", matrikB[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrik C = Matrik A + Matrik B\n");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf ("%i\t ", matrikC[i][j]);
		}
		printf("\n");
	}
	return 0;
}
