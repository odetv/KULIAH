//buatlah fungsi untuk menukar 2 buah bilangan

#include <cstdio>

void tukar(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main()
{
	int x, y;
	x = 10;
	y = 5;
	tukar(&x, &y);
	printf ("Nilai x dan y sebelum ditukar:\n");
	printf ("Nilai x = %i\n", y);
	printf ("Nilai y = %i\n\n", x);
	printf ("Nilai x dan y setelah ditukar:\n");
	printf ("Nilai x = %i\n", x);
	printf ("Nilai y = %i\n", y);
	return 0;
}
