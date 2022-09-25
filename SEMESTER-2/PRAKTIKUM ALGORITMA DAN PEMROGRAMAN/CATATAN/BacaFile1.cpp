#include <cstdio>

FILE* fl;
char buffer[256];

int main()
{
	fl = fopen("C:\\Contoh\\FileKe-6Ku.txt", "r");
	
	if (fl)
	{
		while (fgets(buffer, sizeof(buffer)-1, fl))
		{
			puts(buffer);
		}
	}
	                       
	fclose(fl);
	
	return 0;
}



/*

read (r)
write (w)
append (a)

binary (b)

*/