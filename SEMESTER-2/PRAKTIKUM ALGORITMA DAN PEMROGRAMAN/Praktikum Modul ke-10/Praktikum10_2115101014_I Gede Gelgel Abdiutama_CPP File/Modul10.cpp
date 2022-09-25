#include <cstdio>
#include <stdlib.h>

FILE* fl;
FILE* flOut;
unsigned char varByte;
int brightness;

int main()
{
	fl = fopen("Before_Edit.BMP", "rb");
	flOut = fopen("After_Edit.BMP", "wb");
	for (int i=0; i<54; i++)
	{
		fread(&varByte, 1, 1, fl);
		fwrite(&varByte, 1, 1, flOut);
	}
	
	printf("PERMASALAHAN MODUL KE-10");
	printf("\nOPERASI FILE BINARY (Mengatur Brightness File BMP)\n\n");
	printf("Masukkan Intensitas Cahaya (0-255) : ");
	scanf("%i", &brightness);
	while (fread(&varByte, 1, 1, fl)){
		if((varByte+brightness)>255){
			varByte = 255;
        }
		else{
			varByte = varByte+brightness; 
        }
		fwrite(&varByte, 1, 1, flOut); 
    }
	fclose(fl);
	fclose(flOut);
	system("cls");
	printf("OPERASI FILE BINARY (Mengatur Brightness File BMP)\n\n");
	printf("STATUS : BERHASIL\nHASIL  : Brightness Gambar diatur menjadi +%i\n", brightness);
	return 0;
}