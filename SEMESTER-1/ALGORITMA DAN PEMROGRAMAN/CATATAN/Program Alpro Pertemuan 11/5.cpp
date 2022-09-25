#include <cstdio>

int bil, counter, jumlah=0;

int main()
{
	do
	{
		printf("Silahkan masukkan bilangan: ");
		scanf("%i", &counter);
		jumlah +=counter;
		printf("Jumlah totalnya adalah %i\n", jumlah);
	} while (jumlah < 100);
	printf("Jumlah Bilangan sudah 100 atau lebih");

	return 0;
}
