#include <cstdio>

int bil1, bil2, bil3;

int main()
{
	printf("PERMASALAHAN 2 MENENTUKAN BILANGAN TERKECIL DARI 3 BUAH BILANGAN\n");
	printf("Masukkan tiga bilangan, dengan dipisah spasi: ");
	scanf("%i %i %i", &bil1, &bil2, &bil3);
	
	if (bil1 < bil3)
	{
	printf ("Bilangan yang terkecil = %i\n\n", bil1);
	}
	else if (bil2 < bil3)
	{
	printf ("Bilangan yang terkecil = %i\n\n", bil2);
	}
	else if (bil1 == bil2 && bil1 == bil3)
	{
	printf ("Bilangan %i %i dan %i bernilai sama besar", bil1, bil2, bil3);
	}
	else
	{
	printf ("Bilangan yang terkecil = %i\n\n", bil3);
	}		
	
	return 0;
}
