#include <cstdio>

FILE* fl;
FILE* flOut;
char varByte;
short varShort;
int varInt;
int main()
{
	fl = fopen("C:\\Contoh\\Cover.BMP", "rb");
	flOut = fopen("C:\\Contoh\\CoverNegatif.BMP", "wb");
	
	for (int i=0; i<54; i++)
	{
		fread(&varByte, 1, 1, fl);
		fwrite(&varByte, 1, 1, flOut);
	}
	
	while (fread(&varByte, 1, 1, fl))
	{
		varByte = ~varByte;
		fwrite(&varByte, 1, 1, flOut);
	}
	
	fclose(fl);
	fclose(flOut);
	return 0;
}