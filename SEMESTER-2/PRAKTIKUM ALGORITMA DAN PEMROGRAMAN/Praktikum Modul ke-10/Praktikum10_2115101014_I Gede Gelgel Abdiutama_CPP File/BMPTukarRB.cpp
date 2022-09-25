#include <cstdio>

FILE* fl;
FILE* flOut;
char varByte;
short varShort;
int varInt;
int width;
int height;
int numPadding;
char rgb[3];
int main()
{
	fl = fopen("C:\\Contoh\\Cover.BMP", "rb");
	flOut = fopen("C:\\Contoh\\CoverTukarRB.BMP", "wb");
	fseek(fl, 18, 0);
	fread(&width, 4, 1, fl);
	fread(&height, 4, 1, fl);
	numPadding = width % 4;
	fseek(fl, 0, 0);
	
	for (int i=0; i<54; i++)
	{
		fread(&varByte, 1, 1, fl);
		fwrite(&varByte, 1, 1, flOut);
	}
	
	for (int i=0; i<height; i++)
	{
		for (int j=0; j<width; j++)
		{
			fread(&rgb, 1, 3, fl);
			varByte = rgb[0];
			rgb[0] = rgb[2];
			rgb[2] = varByte;
			fwrite(&rgb, 1, 3, flOut);
		}
		for (int j=0; j<numPadding; j++)
		{
			fread(&varByte, 1, 1, fl);
			fwrite(&varByte, 1, 1, flOut);
		}
	}
	
	fclose(fl);
	fclose(flOut);
	return 0;
}