#include <stdio.h>

int jml_bil, bil, i, max, jumlah;

int main ()

{
do{
	printf ("Masukan jumlah data angka yang akan dibandingkan: ");
	scanf ("%i",&jml_bil);
		jumlah +=jml_bil;
		printf("Jumlah totalnya adalah %i\n", jumlah);
		for (i = 1; i < jml_bil; i++)
		{
		scanf ("%i",&bil);
		if (bil > max) max = bil;
		}
}
while (jumlah < 100);
printf ("Hasilnya angka terbesar adalah = %d\n", max);
return 0;
}
