#include <cstdio>

FILE* fl;

int main()
{
	fl = fopen("C:\\Contoh\\FileKe-8Ku.txt", "w");
	
	
	fprintf(fl, "Ini adalah file ke-8 ku\n");
	fprintf(fl, "Saya sangat gembira\n");
	fputs("Karena saya sudah bisa membuat file text\n", fl);
	fputs("Hore...", fl);
	                       
	fclose(fl);
	
	return 0;
}



/*

read (r)
write (w)
append (a)

binary (b)

*/