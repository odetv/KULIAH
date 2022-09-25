#include <cstdio>

int misteri;

int main()
{
	printf("Perhatikan teka-teki berikut!\n");
	printf("Huruf depan Bebek adalah?\n");
	printf("Jawab: ");
	scanf("%s", &misteri);
	while (misteri != 'b')
	{
		printf("Maaf, jawaban anda salah. Coba ulangi lagi!\n"); 
		printf("Huruf depan Bebek adalah?\n");
		printf("Jawab: ");
		scanf("%s", &misteri);
	}
	printf("Mantap, jawaban anda benar!\n");
	return 0;
}
