#include <cstdio>

//PROGRAM MEMBUAT KOLOM BARIS MENGGUNAKAN FOR (NILAI X=Y)

int main()
{
	for (int y=1; y<=4; y++)
	{
		for (int x=1; x<=y; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
