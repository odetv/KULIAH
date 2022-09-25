#include <cstdio>
#include <cstring>

struct Mahasiswa
{
	char NIM[11];
	char Nama[51];
	int TahunMasuk;
	float IPK;
};

FILE* fl;

Mahasiswa mhs[3];

int main()
{
	fl = fopen("C:\\Contoh\\FileData1.txt", "a");
	
	strcpy(mhs[0].NIM, "1234567801");	
	strcpy(mhs[0].Nama, "Joni");
	mhs[0].TahunMasuk = 2020;
	mhs[0].IPK = 3.5;
	
	fprintf(fl, "%s\n", mhs[0].NIM);
	fprintf(fl, "%s\n", mhs[0].Nama);
	fprintf(fl, "%i\n", mhs[0].TahunMasuk);
	fprintf(fl, "%.2f\n", mhs[0].IPK);	
	
	strcpy(mhs[1].NIM, "1234567802");
	strcpy(mhs[1].Nama, "Jono");
	mhs[1].TahunMasuk = 2020;
	mhs[1].IPK = 3.6;
	
	fprintf(fl, "%s\n", mhs[1].NIM);
	fprintf(fl, "%s\n", mhs[1].Nama);
	fprintf(fl, "%i\n", mhs[1].TahunMasuk);
	fprintf(fl, "%.2f\n", mhs[1].IPK);
	
	strcpy(mhs[2].NIM, "1234567803");
	strcpy(mhs[2].Nama, "Joko");
	mhs[2].TahunMasuk = 2020;
	mhs[2].IPK = 3.7;
	
	fprintf(fl, "%s\n", mhs[2].NIM);
	fprintf(fl, "%s\n", mhs[2].Nama);
	fprintf(fl, "%i\n", mhs[2].TahunMasuk);
	fprintf(fl, "%.2f\n", mhs[2].IPK);
	        
	fclose(fl);
	
	return 0;
}



/*

read (r)
write (w)
append (a)

binary (b)

*/