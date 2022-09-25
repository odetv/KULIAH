#include <cstdio>

int* A;
int* B;

int main()
{
	A = new int;
	printf("Masukkan bilangan yang akan dicari alamat memorinya: ");
	scanf("%i", &*A);
	printf("Nilai A = %i\n", A);
	printf("Nilai A sebesar %i didapatkan dari perintah 'new int'\n", A);
	printf("Isi data di memori dengan alamat %i = %i\n\n", A, *A);
	
/*	B = new int;
	*B = 50;
	printf("Nilai B = %i\n", B);
	printf("Nilai B sebesar %i didapatkan dari perintah 'new int'\n", B);
	printf("Isi data di memori dengan alamat %i = %i\n\n", B, *B);
*/	
	return 0;
}
