#include <cstdio>

int main()
{
	int Sn, hasil, i;
	int S0 = 0, S1 = 1; 
	
	printf("Permasalahan Ke-1\n");
	printf("Program Deret Fibonacci\n\n");
	printf("Masukkan Suku Ke-n : ");
	scanf("%i", &hasil);
	printf("Suku Ke-%i = %i\n", S1, S1);
	for(i = 1 ; i < hasil ; i++)
	{
		Sn = S1 + S0;
		S0 = S1;
		S1 = Sn;
		printf("Suku Ke-%i = %i\n", i+1, Sn);
	}
	return 0;
}