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
char buffer[256];
int jmlMhs;

int main()
{
	fl = fopen("C:\\Contoh\\FileData5.txt", "r");
	
	jmlMhs = 0;
	if (fl)
	{
		while (fgets(buffer, sizeof(buffer)-1, fl))
		{
			buffer[strlen(buffer)-1] = 0;
			strcpy(mhs[jmlMhs].NIM, buffer);			
//			printf("NIM = %s\n", buffer);
//			printf("NIM Mhs = %s\n\n", mhs[jmlMhs].NIM);
			if (fgets(buffer, sizeof(buffer)-1, fl))
			{
				buffer[strlen(buffer)-1] = 0;
				strcpy(mhs[jmlMhs].Nama, buffer);
//				printf("Nama = %s\n", buffer);
//				printf("Nama Mhs = %s\n\n", mhs[jmlMhs].Nama);
			}
			else
			{
				printf("Data error.");
				break;
			}
			if (fgets(buffer, sizeof(buffer)-1, fl))
			{
				sscanf(buffer, "%i", &(mhs[jmlMhs].TahunMasuk));
			}
			else
			{
				printf("Data error.");
				break;
			}
			if (fgets(buffer, sizeof(buffer)-1, fl))
			{
				sscanf(buffer, "%f", &(mhs[jmlMhs].IPK));
			}
			else
			{
				printf("Data error.");
				break;
			}
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
		printf("No:\t%i\n", i+1);
		printf("NIM:\t%s\n", mhs[i].NIM);
		printf("Nama:\t%s\n", mhs[i].Nama);
		printf("Tahun Masuk:\t%i\n", mhs[i].TahunMasuk);
		printf("IPK:\t%.2f\n\n", mhs[i].IPK);
	}                       
	
	
	return 0;
}



/*

read (r)
write (w)
append (a)

binary (b)

*/