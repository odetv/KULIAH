#include <cstdio>

// PROGRAM PERULANGAN FOR MENAMPILKAN OUTPUT PERULANGAN

int counter;

int main()
{
	//for (counter = 1; counter <= 5; counter++)
	//for (counter = 0; counter <= 5; counter = counter + 3)
	//for (counter = 1; counter <= 5; counter = 2*counter)
	//for (counter = 1; counter <= 5; counter = counter - 2)
	//for (counter = 1; counter <= 5; counter = counter --)
	for (counter = 1; counter <= 7; counter = 2*counter)
	{
		printf("Bola\n");
		printf("Warnanya Merah\n\n");
	}
	return 0;
}

/*
Sistematika cara kerja:
perulangan ke-1: counter berisi 1, true
perulangan ke-2: counter berisi 2, true
perulangan ke-3: counter berisi 3, true
perulangan ke-4: counter berisi 4, true

Output dilayar:
Bola
Bola
Bola
Bola
*/
