#include <cstdio>

// PROGRAM PERULANGAN FOR MENGHITUNG NILAI COUNTER

int counter, kuadrat;

int main()
{
	//for (counter = 1; counter <= 8; counter = 2*counter)
	for (counter = 0; counter <= 10; counter++)
	//for (counter = 0; counter <= 10; counter += 2)
	//for (counter = 0; counter <= 30; counter = counter + 2 * 3)
	//for (counter = 0; counter <= 30; counter = (counter + 2) * 3)
	{
		printf("Nilai Counter = %i\n", counter);
		kuadrat = counter*counter;
		//counter -= 2;
		//counter -- ;
		counter += 2;
		printf("Nilai Counter Kuadrat = %i\n", kuadrat);
		printf("Bola\n\n");
	
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
