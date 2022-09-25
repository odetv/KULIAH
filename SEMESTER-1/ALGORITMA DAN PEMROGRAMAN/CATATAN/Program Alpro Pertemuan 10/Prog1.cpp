#include <cstdio>

//PROGRAM MENGGUNAKAN WHILE UNTUK MENGEKSEKUSI PROGRAM YANG TIDAK DIKETAHUI KAPAN TRUE DAN FALSE

int jawaban;

int main()
{
	printf("Jawablah soal berikut dengan benar\n\n");
	printf("2 + 3 = ");
	scanf("%i", &jawaban);
	while (jawaban != 5)
	{
		printf("Maaf, jawaban anda salah. Coba ulangi lagi!\n"); 
		printf("2 + 3 = ");
		scanf("%i", &jawaban);
	}
	printf("Mantap, jawaban anda benar!\n");
	return 0;
}
