#include <cstdio>
#include <cmath>


int main(int argc, char** argv)
{
	int bil1,bil2,hasil;
	double hasil_d,bil3,bil4;
	
	if (argc < 3 || argc > 4)
	{
		printf ("Mohon Masukkan 4 Argumen!\n");
		return 1;
	}
	if(argc <= 3)
	{
		sscanf(argv[2],"%lf",&bil3);
		double Radian = bil3 * ((double)M_PI / 180.0);
	
	switch(*(argv[1]))
	{
		case 'L':
		{
		    hasil_d=log(bil3);
		    break;
		}
		case 'S':
		{
		    hasil_d=sin(Radian);
		    break;
		}
		case 'C':
		{
		    hasil_d=cos(Radian);
		    break;
		}
		default:
		{
		    printf("Maaf, perintah yang anda masukkan tidak valid!\n");
		    break;
		}
}
	printf("Hasil : %f\n", hasil_d);
	}
	else
	{
	sscanf(argv[1],"%i",&bil1);
	sscanf(argv[3],"%i",&bil2);
	
	switch(*(argv[2]))
	{
		case '+':
		{
		    hasil=bil1+bil2;
		    printf("Hasil : %i\n", hasil);
		    break;
		}
		case '-':
		{
		    hasil=bil1-bil2;
		    printf("Hasil : %i\n", hasil);
		    break;
		}
		case 'x':
		{
		    hasil=bil1*bil2;
		    printf("Hasil : %i\n", hasil);
			break;
		}
		case '/':
		{
		    bil4=(float)bil1/bil2;
		    printf("Hasil : %.3f\n", bil4);
		    break;
		}
		case '^':
		{
		    hasil=pow(bil1,bil2);
		    printf("Hasil : %i\n", hasil);
		    break;
		}
		default:
		{
		    printf("Maaf, yang anda masukkan tidak valid!\n");
		    break;
		}
	}
}
return 0;
}