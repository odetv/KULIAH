#include <cstdio>
#include <cstring>

struct Mahasiswa
{
	char NIM[11];
	char Nama[51];
	int TahunMasuk;
	float IPK;
};

Mahasiswa mhs[100];
FILE* fl;
char buffer[256]
int jmlMhs;

int main()
{
	fl = fopen("D:\\Alpro\\FilePertama.txt", "r");
	jmlMhs=0;
	if (fl)
	{
		while (fgets(buffer, sizeof(buffer)-1, fl))
		{
			sscanf(buffer, "%s %s %i %f", mhs[jmlMhs].NIM, mhs[jmlMhs].Nama, mhs[jmlMhs].TahunMasuk, mhs[jmlMhs].IPK);
			i++;
		}
		
	}
	
	printf("Data Mahasiswa : \n\n");
	for (int i=0; i<index; i++)
	{
		printf(buffer, "No: \t%i\nNIM:\t%s\nNama: \t%s\nTahun Masuk: \t%i\nIPK: \t%f\n\n", i, mhs[jmlMhs].NIM, mhs[jmlMhs].Nama, mhs[jmlMhs].TahunMasuk, mhs[jmlMhs].IPK);
	}
	
	fclose(fl);
	return 0;
}