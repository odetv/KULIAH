#include <cstdio>

//PROGRAM MEMBUAT KOLOM BARIS MENGGUNAKAN FOR (NILAI X=Y)

int hasilkali;

int main()
{
	for (int y=1; y<=4; y++)
	{
		for (int x=1; x<=7; x++)
		{
			hasilkali = x*y;
			printf("%i\t", hasilkali);
		}
		printf("\n");
	}
	return 0;
}
