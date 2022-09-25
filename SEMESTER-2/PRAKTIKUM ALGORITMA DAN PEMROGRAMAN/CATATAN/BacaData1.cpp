#include <cstdio>


struct Mahasiswa
{
	char NIM[11];
	char Nama[51];
	int TahunMasuk;
	float IPK;
};

Mahasiswa mhs[100];


FILE* fl;
char buffer[256];
int jmlMhs;

int main()
{
	fl = fopen("FileData5.txt", "r");
	
	jmlMhs = 0;
	if (fl)
	{
		while (fgets(buffer, sizeof(buffer)-1, fl))
		{
			printf("Isi buffer = %s\n", buffer);
			sscanf(buffer, "%s %s %i %f", &(mhs[jmlMhs].NIM), &(mhs[jmlMhs].Nama), &(mhs[jmlMhs].TahunMasuk), &(mhs[jmlMhs].IPK));
			jmlMhs++;
		}
	}
	else
	{
		printf("File tidak bisa dibuka.");
		return 1;
	}
	
	fclose(fl);
	
	printf("Data Mahasiswa:\n\n");
	for (int i=0; i<jmlMhs; i++)
	{ 
		printf("No:\t%i\nNIM:\t%s\nNama:\t%s\nTahun Masuk:\t%i\nIPK:\t%f\n\n", i+1, mhs[i].NIM, mhs[i].Nama, mhs[i].TahunMasuk, mhs[i].IPK);
	}
		                       
	
	
	return 0;
}



/*

read (r)
write (w)
append (a)

binary (b)

*/