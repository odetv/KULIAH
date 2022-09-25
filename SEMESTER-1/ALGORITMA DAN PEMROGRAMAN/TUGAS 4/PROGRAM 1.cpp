#include <cstdio>

int bilangan;

int main()
{
    printf ("SELAMAT DATANG DI PROGRAM MENENTUKAN BILANGAN POSITIF ATAU NEGATIF\n");
    printf ("------------------------------------------------------------------\n\n");
    printf("Masukkan Bilangan : ");
    scanf("%i", &bilangan);
    if(bilangan > 0)
	{
    	printf("%i adalah bilangan POSITIF\n", bilangan);
    }
	else if (bilangan < 0)
	{
    	printf("%i adalah bilangan NEGATIF\n", bilangan);
    }
    else if (bilangan == 0)
	{
    	printf("%i adalah bilangan NETRAL\n", bilangan);
    }

}
