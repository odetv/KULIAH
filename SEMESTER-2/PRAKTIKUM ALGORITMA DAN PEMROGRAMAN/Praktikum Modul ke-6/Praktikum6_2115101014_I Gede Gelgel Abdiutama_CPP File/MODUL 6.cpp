#include <cstdio>
#include <string>
#include <stdlib.h>

int main()
{
    FILE *file; //operasi file
    int jumlah, i=0;
    char array[100][100], *karakter=NULL, *kata=NULL, c;
    
    if ((file=fopen("Data.txt","r"))==NULL) //mengecek apakah file teks ada atau tidak, jika tidak maka program berhenti
	{
        printf("ERROR: File tidak ada!\n");
	}
    while ((c = fgetc(file))!= EOF) //mengecek karakter dan angka, jika ada maka akan diganti dengan spasi
	{
        if (c=='\n' || c == '.' || c == ',' || c == '!' ||  c == '?' || c == '-' || (c >= '0' && c <= '9'))
		{ 
			c = ' '; 
		}
        karakter = (char *)realloc(karakter, ++i*sizeof(char));
        karakter[i-1]=c;
	}
    kata = strtok(karakter," "); //memisahkan string dari karakter tertentu yang telah di set
    while(kata!=NULL) //mengecek jika variabel yang menampung kata itu tidak kosong, maka program dijalankan
	{
		strcpy(array[jumlah++], kata); //mengcopy value variabel kata dimasukkan ke array
        printf("%s\n", kata); //menampilkan setiap kata yang telah disimpan diddalam array
        kata = strtok(NULL," "); //diisi 'NULL' untuk pemanggilan selanjutnya
	}
	return 0;
}