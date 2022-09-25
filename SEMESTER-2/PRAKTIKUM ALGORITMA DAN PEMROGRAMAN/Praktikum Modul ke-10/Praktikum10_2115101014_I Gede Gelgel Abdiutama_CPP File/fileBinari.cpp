#include <cstdio>

char rgb[3];
FILE* fl;
char varByte;
short varShort;
int varInt;
int main()
{
	fl = fopen("C:\\Contoh\\MerahPutih.BMP", "wb");
	varByte = 0x42;
	fwrite(&varByte, 1, 1, fl);
	varByte = 0x4D;
	fwrite(&varByte, 1, 1, fl);

	
/*	varShort = 0x4D42;
	fwrite(&varShort, 2, 1, fl);
*/		
	varInt = 15054;
	fwrite(&varInt, 4, 1, fl);
	
	varInt = 0;
	fwrite(&varInt, 4, 1, fl);
	
	varInt = 54;
	fwrite(&varInt, 4, 1, fl);
	
	varInt = 40;
	fwrite(&varInt, 4, 1, fl);
	
	varInt = 100;
	fwrite(&varInt, 4, 1, fl);
	varInt = 50;
	fwrite(&varInt, 4, 1, fl);
	
	varShort = 1;
	fwrite(&varShort, 2, 1, fl);
	varShort = 24;
	fwrite(&varShort, 2, 1, fl);
	
	varInt = 0;
	fwrite(&varInt, 4, 1, fl);
	
	varInt = 15000;
	fwrite(&varInt, 4, 1, fl);
	
	varInt = 2835;
	fwrite(&varInt, 4, 1, fl);
	fwrite(&varInt, 4, 1, fl);
	
	varInt = 0;
	fwrite(&varInt, 4, 1, fl);
	fwrite(&varInt, 4, 1, fl);
	
	rgb[0] = 0xFF; rgb[1] = 0xFF; rgb[2] = 0xFF;
	for (int i=0; i<2500; i++)
	{
		fwrite(rgb, 1, 3, fl);
	}
	rgb[0] = 0; rgb[1] = 0; rgb[2] = 0xFF;
	for (int i=0; i<2500; i++)
	{
		fwrite(rgb, 1, 3, fl);
	}
	
	fclose(fl);
	return 0;
}