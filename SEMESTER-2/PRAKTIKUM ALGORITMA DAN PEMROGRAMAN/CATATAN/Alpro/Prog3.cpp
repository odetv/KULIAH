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
	
	fprintf(fl, "%s %s %i %.2f\n", mhs[0].NIM, mhs[0].Nama, mhs[0].TahunMasuk, mhs[0].IPK);
	
	strcpy(mhs[1].NIM, "2115101015");
	strcpy(mhs[1].Nama, "Anonim1");
	mhs[1].TahunMasuk = 2020;
	mhs[1].IPK = 3.7;
	
	fprintf(fl, "%s %s %i %.2f\n", mhs[1].NIM, mhs[1].Nama, mhs[1].TahunMasuk, mhs[1].IPK);
	
	strcpy(mhs[1].NIM, "2115101016");
	strcpy(mhs[1].Nama, "Anonim2");
	mhs[1].TahunMasuk = 2019;
	mhs[1].IPK = 3.98;
	
	fprintf(fl, "%s %s %i %.2f\n", mhs[2].NIM, mhs[2].Nama, mhs[2].TahunMasuk, mhs[2].IPK);
	
	strcpy(mhs[2].NIM, "2115101017");
	strcpy(mhs[2].Nama, "Anonim3");
	mhs[2].TahunMasuk = 2018;
	mhs[2].IPK = 4.0;
	
	fclose(fl);
	return 0;
}
