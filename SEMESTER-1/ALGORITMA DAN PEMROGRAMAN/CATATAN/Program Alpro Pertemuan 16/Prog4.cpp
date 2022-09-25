#include <iostream>

using namespace std;

long Factorial(long X)
{
	if (X <= 1)
	{
		return 1;
	}
	else
	{
		return(X * Factorial(X - 1));
	}
}

int main()
{
	long x;
	cout << "Masukkan bilangan yang akan di faktorialkan: ";
	cin >> x;
	cout << x << " Faktorial = " << Factorial(x) << endl;
	return 0;
}
