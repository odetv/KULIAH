#include <cstdio>

int counter, jumlah=0, terbesar;

int main()
{
	do
	{
		printf("Silahkan masukkan bilangan: ");
		scanf("%i", &counter);
		jumlah +=counter;
		printf("Jumlah totalnya adalah %i\n", jumlah);
		if (counter >= terbesar)
		{
			terbesar = counter;
		}
	}	while (jumlah < 100);
		printf("Jumlah Bilangan sudah 100 atau lebih\n");
		printf ("Bilangan yang terbesar adalah %i\n\n", terbesar);
		
	return 0;
}
