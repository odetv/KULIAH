#include <cstdio>

//PROGRAM MENGGUNAKAN DO UNTUK MENGEKSEKUSI PROGRAM YANG TIDAK DIKETAHUI KAPAN TRUE DAN FALSE

int jawaban;

int main()
{
	printf("Anda bisa keluar hanya jika anda bisa menjawab soal dengan benar!\n");
	do
	{
		printf("2 + 3 = ");
		scanf("%i", &jawaban);
	}
	while (jawaban != 5);
	
	printf("Mantap, jawaban anda benar!\nAnda berhasil keluar\n");
	return 0;
}
