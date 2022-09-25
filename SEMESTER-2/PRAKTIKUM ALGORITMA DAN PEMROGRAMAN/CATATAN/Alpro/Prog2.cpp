#include <cstdio>
#include <cstring>

//simpandata

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
	fl = fopen("D:\\Alpro\\FileData1.txt", "a");
	
	strcpy(mhs[0].NIM, "2115101014");
	strcpy(mhs[0].Nama, "Gelgel");
	mhs[0].TahunMasuk = 2021;
	mhs[0].IPK = 3.9;
	fprintf(fl, "%s\n", mhs[0].NIM);
	fprintf(fl, "%s\n", mhs[0].Nama);
	fprintf(fl, "%i\n", mhs[0].TahunMasuk);
	fprintf(fl, "%.2f\n", mhs[0].IPK);
	
	
	strcpy(mhs[1].NIM, "2115101015");
	strcpy(mhs[1].Nama, "Anonim1");
	mhs[1].TahunMasuk = 2020;
	mhs[1].IPK = 3.8;
	
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