#include <cstdio>

FILE *ori;
FILE *teks;
FILE *encode;
FILE *decode;

unsigned char varByte;
char charByte;
char bit;
char bitTerkumpul;
int n;

int main()
{
	//MENYEMBUNYIKAN TEXT
	ori = fopen("Gambar.BMP", "rb");
	teks = fopen("Pesan.TXT","rb");
	encode = fopen("Encode_Gambar.BMP", "wb");
	for (int i=0; i<54; i++)
	{
		fread(&varByte, 1, 1, ori);
		fwrite(&varByte, 1, 1, encode);
	}
	while ((charByte = fgetc(teks))!=EOF){
		for (int i=0; i<8; i++){
			bit = ((charByte >> i) &1);
			fread(&varByte, 1, 1, ori);
			if(bit == 0){
				varByte = varByte &= ~(1UL << 0);
			}else if(bit == 1){
				varByte = varByte |= 1UL << 0;
			}
			fwrite(&varByte, 1, 1, encode);
			n++;
		}
	}
	while (fread(&varByte, 1, 1, ori)){
		fwrite(&varByte, 1, 1, encode);
	}
	
	fclose(ori);
	fclose(teks);
	fclose(encode);
	
	//BACA TEXT TERSEMBUNYI
	decode = fopen("Encode_Gambar.BMP", "rb");
	printf ("Hidden Message :\n");
	fseek(decode, 54, 0);
	int x = 0;
	for (int j=0; j<n; j++){
		fread(&charByte, 1, 1, decode);
		bit = ((charByte >> 0) &1);
		if (bit == 0){
			bitTerkumpul = bitTerkumpul &= ~(1UL << x);
			x++;
			while (x == 8){
				x=0;
				printf ("%c", bitTerkumpul);
			}
		}else if(bit == 1){
			bitTerkumpul = bitTerkumpul |= 1UL << x;
			x++;
			while (x == 8){
				x=0;
				printf ("%c", bitTerkumpul);
			}
		}
	}
	fclose(decode);
	return 0;
}