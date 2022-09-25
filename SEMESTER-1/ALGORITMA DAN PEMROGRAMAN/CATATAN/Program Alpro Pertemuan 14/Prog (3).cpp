#include <cstdio> //Program Function

void Kuadratkan(int* bil)
{
	*bil = *bil * *bil;
	return;
}

int main()
{
	int a;
	
	a = 3;
	printf ("Nilai a sebelum dikuadratkan = %i\n", a);
	Kuadratkan(&a); //pas by reffrence
	printf ("Nilai a setelah dikuadratkan = %i\n", a);
	return 0;
}
