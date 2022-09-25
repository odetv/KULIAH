#include <cstdio>

FILE* fl;
char buffer[256];

int main()
{
	fl = fopen("D:\\Alpro\\FilePertama.txt", "r");
	
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

fprintf(fl, "Ini adalah file pertamaku\n");
fprintf(fl, "Saya sangat senang\n");
fputs("Karena saya sudah bisa membuat file text\n", fl);
fputs("Terimakasih\n", fl);

read (r)
write (w)
append (a)
binary (b)

*/