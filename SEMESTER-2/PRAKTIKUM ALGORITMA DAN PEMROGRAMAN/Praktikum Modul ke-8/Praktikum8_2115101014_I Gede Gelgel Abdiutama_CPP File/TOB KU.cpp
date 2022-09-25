#include <cstdio>

void brahma(int piringan, char dari, char tmp, char ke)
{
  	if(piringan>0)
	{
    	brahma(piringan-1, dari, ke, tmp);
    	printf("%c ke %c\n", dari, ke);
    	brahma(piringan-1, tmp, dari, ke);
	}
}

int main()
{
	awal:
	int piringan, dari, ke, end;
	printf("PERMASALAHAN MODUL KE-8\n");
	printf("PROGRAM TOWER OF BRAHMA REKURSI\n\n");
	printf("Input:\n");
	printf("Jumlah Piringan\t : ");
	scanf("%i", &piringan);
	printf("Tiang Asal\t : ");
	scanf("%i", &dari);
	printf("Tiang Tujuan\t : ");
	scanf("%i", &ke);
	printf("\n");
	printf("Output:\nMulai\n");
	if(dari==1&&ke==3)
	{	
	    brahma(piringan,'1','2','3');
	}
	else if(dari==1&&ke==2)
    {		
	    brahma(piringan,'1','3','2');
	}
	else if(dari==2&&ke==1)
	{	
	    brahma(piringan,'2','3','1');
	}
	else if(dari==2&&ke==3)
	{		
	    brahma(piringan,'2','1','3');
	}
	else if(dari==3&&ke==1)
	{	
	    brahma(piringan,'3','2','1');
	}
	else if(dari==3&&ke==2)
	{		
	    brahma(piringan,'3','1','2');
	}
	return 0;
}