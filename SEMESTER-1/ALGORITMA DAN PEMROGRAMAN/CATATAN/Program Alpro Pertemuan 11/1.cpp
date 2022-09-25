#include <cstdio>

int bil1, bil2;

int main()
{
	printf("PERMASALAHAN 1 MENENTUKAN BILANGAN TERKECIL\n");
	printf("Masukkan dua bilangan, dengan dipisah spasi: ");
	scanf("%i %i", &bil1, &bil2);
	
	if (bil1 < bil2)
	{
	printf ("Bilangan yang terkecil = %i\n\n", bil1);
	}
	else if (bil1 == bil2)
	{
	printf ("Bilangan %i dan %i bernilai sama besar", bil1, bil2);
	}
	else
	{
	printf ("Bilangan yang terkecil = %i\n\n", bil2);
	}		
	
	return 0;
}
