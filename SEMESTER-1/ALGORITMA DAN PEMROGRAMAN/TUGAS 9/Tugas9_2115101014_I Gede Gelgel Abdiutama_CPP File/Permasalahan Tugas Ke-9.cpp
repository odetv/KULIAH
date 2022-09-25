#include <cstdio>

int matrikA[4][4];
int matrikB[4][4];
int matrikC[4][4];
int jmlbaris, jmlkolom;

int main()
{
	printf("PROGRAM PENJUMLAHAN MATRIK\n\n\n");
	printf("Masukkan Ukuran Kolom Matrik: ");
	scanf("%i", &jmlkolom);
	printf("Masukkan Ukuran Baris Matrik: ");
	scanf("%i", &jmlbaris);
	
	printf("\nINPUT MATRIK A\n");
	for (int i=0; i<jmlbaris; i++ )
	{
		
		for (int j=0; j<jmlkolom; j++)
		{
		printf("Masukkan Data Ke-[%i][%i] Matrik A: ", i+1, j+1);
		scanf("%i",&matrikA[i][j]);
		}
	}
	printf("\nTAMPILAN DATA MATRIK A\n");
	for (int i=0; i<jmlbaris; i++ )
	{
		for (int j=0; j<jmlkolom; j++)
		{
			printf("%i\t",matrikA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nINPUT MATRIK B\n");
	for (int i=0; i<jmlbaris; i++ )
	{
		for (int j=0; j<jmlkolom; j++)
		{
		printf("Masukkan Data Ke-[%i][%i] Matrik B: ", i+1, j+1);
		scanf("%i",&matrikB[i][j]);
		}
	}
	printf("\nTAMPILAN DATA MATRIK B\n");
	for (int i=0; i<jmlbaris; i++ )
	{
		for (int j=0; j<jmlkolom; j++)
		{
			printf("%i\t",matrikB[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<jmlbaris; i++)
	{
		for(int j=0; j<jmlkolom; j++)
		{
			matrikC[i][j]=matrikA[i][j]+matrikB[i][j];
		}
	}
	printf("\n\nHASIL PENJUMLAHAN MATRIK\n");
	printf("Matrik C = Matrik A + Matrik B\n");
	for (int i=0; i<jmlbaris; i++ )
	{
		for (int j=0; j<jmlkolom; j++)
		{
			printf("%i\t",matrikC[i][j]);
		}
		printf("\n");
	}
	return 0;
}
