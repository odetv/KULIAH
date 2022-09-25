#include <cstdio>

int main()
{
	int m1[10][10], m2[10][10], h1[10][10], h2[10][10];
	int b1, b2, k1, k2, i, j, k, jumlah=0;
	
	printf("Permasalahan Ke-2\n");
	printf("PROGRAM PERKALIAN MATRIKS\n");
	printf("\n============================\n");
	printf("\nUKURAN MATRIK A\n");
	printf("Masukkan Jumlah Baris & Kolom, dipisah spasi : ");
	scanf("%i %i", &b1, &k1);
	printf("UKURAN MATRIK B\n");
	printf("Masukkan Jumlah Baris & Kolom, dipisah spasi : ");
	scanf("%i %i", &b2, &k2);

	if(b1&&k1 != b2&&k2)
	{
    	printf("\nMaaf, mohon masukkan jumlah kolom matrik sesuai dengan aturan!\n");
	}
	else
	{
		printf("\n============================\n");
		printf("\nINPUT MATRIK A\n");
	  	for(i = 0; i < b1; i++)
	  	{
	   		for(j = 0; j < k1; j++)
		   	{
		    	printf("Masukkan Data Ke-[%i][%i] : ", i+1, j+1);
		    	scanf("%i", &m1[i][j]);
		    }
	  	}
	  	printf("TAMPILAN MATRIK\n");
	  	for (int i=0; i<b1; i++ )
	  	{
	   		for (int j=0; j<k1; j++)
		   	{
		    	printf("%i\t",m1[i][j]);
		   	}
	    	printf("\n");
	  	}
	  	printf("\nINPUT MATRIK B\n");
	  	for(i = 0; i < b2; i++)
	  	{
	   		for(j = 0; j < k2; j++)
		   	{
		    	printf("Masukkan Data Ke-[%i][%i] : ", i+1, j+1);
		       	scanf("%i", &m2[i][j]);
		   	}
	  	}
	  	printf("TAMPILAN MATRIK B\n");
	  	for (int i=0; i<b2; i++ )
	  	{
	   		for (int j=0; j<k2; j++)
		   	{
		    	printf("%i\t",m2[i][j]);
		   	}
			printf("\n");
		}
	}
	printf("\n============================\n");
		printf("\nHASIL PERKALIAN MATRIK A x B\n");
   	{
   	
    	for(i = 0; i < b1; i++)
	    {
	     	for(j = 0; j < k2; j++)
		    {
	        	for(k = 0; k < k1; k++)
		        {
	             	jumlah = jumlah + m1[i][k] * m2[k][j];
	            }
	      		h1[i][j] = jumlah;
	      		jumlah = 0;
        	}
    	}
   	}
   		
    	for(i = 0; i < b1; i++)
	    {
		    {
	        	printf("%i\t", h1[i][j]);
	        }
        	printf("\n");
    	}
	return 0;
}