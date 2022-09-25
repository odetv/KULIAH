#include <cstdio>

int bilangan1, bilangan2, selisih;

int main()
{
    printf ("SELAMAT DATANG DI PROGRAM MENGHITUNG SELISIH BILANGAN BULAT\n");
    printf ("-----------------------------------------------------\n\n");
    printf("Masukkan Bilangan Bulat Pertama\t: ");
    scanf("%i", &bilangan1);
    printf("Masukkan Bilangan Bulat Kedua\t: ");
    scanf("%i", &bilangan2);
    printf ("--------------------------------\n"); 
	if (bilangan1 < bilangan2)
	{
		selisih = bilangan2 - bilangan1;
    	printf("Selisih = %i", selisih);
	}
	else if (bilangan1 > bilangan2)
	{
		selisih = bilangan1 - bilangan2;
    	printf("Selisih = %i", selisih);
	}
	else if (bilangan1 = bilangan2)
	{
    	printf("Selisih = 0");
	}
	else
	{
    	printf("Maaf, masukkan bilangan dengan benar!\n");
	}

    return 0;
}
