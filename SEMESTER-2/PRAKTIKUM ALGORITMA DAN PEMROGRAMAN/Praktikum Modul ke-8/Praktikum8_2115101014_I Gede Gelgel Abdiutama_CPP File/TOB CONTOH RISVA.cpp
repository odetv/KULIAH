#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void inputan();
void brahmaRekursif();
void brahma(int n, char x, char y, char z);
void opsi();
void judul();
int piringan,hasil,x, asal,tujuan;

int validInt(int *var){
	char buff[1024];
	char check;
	if (fgets(buff, sizeof(buff), stdin) !=NULL) {
		if (sscanf(buff, "%d %c", var, &check) ==1){
			return 1;
		}
	}
	return 0;
}

int main(){
	int pilihan;
	fflush(stdin);
	system("cls");
	judul();
	brahmaRekursif();
	return 0;
}

void inputan()
{
	fflush(stdin);
	system ("cls");
	judul(); 
	printf("\tMasukan Jumlah piringan : ");
	if(!validInt(&piringan)){
		brahmaRekursif();
	}
	printf("\tMasukan Asal Piringan [1-3]: ");
	if(!validInt(&asal)){
		brahmaRekursif();
	}
	printf("\tMasukan Tujuan piringan[1-3] : ");
	if(!validInt(&tujuan)){
		brahmaRekursif();
	}
	if(tujuan==asal)
	{
		printf("\n\tMasukan Tujuan Yang berbeda dengan Asal\n");
		opsi();
	}
}

void brahmaRekursif(){
	
	inputan();
	
	if(asal==1&&tujuan==3)
	{
		printf("\n\tLangkah-langkah pemindahan piringan :\n");		
	    brahma(piringan,'1','2','3');
	    hasil=pow(2,piringan)-1;
		printf ("\n\tMaka jumlah langkah minimum menara Brahma adalah %d\n",hasil);
		opsi();
	}
	else if(asal==1&&tujuan==2)
    {
    	printf("\n\tLangkah-langkah pemindahan piringan :\n");		
	    brahma(piringan,'1','3','2');
	    hasil=pow(2,piringan)-1;
		printf ("\n\tMaka jumlah langkah minimum menara Brahma adalah %d\n",hasil);
		opsi();
	}
	else if(asal==2&&tujuan==1)
	{
		printf("\n\tLangkah-langkah pemindahan piringan :\n");		
	    brahma(piringan,'2','3','1');
	    hasil=pow(2,piringan)-1;
		printf ("\n\tMaka jumlah langkah minimum menara Brahma adalah %d\n",hasil);
		opsi();
	}
	else if(asal==2&&tujuan==3)
	{
		printf("\n\tLangkah-langkah pemindahan piringan :\n");		
	    brahma(piringan,'2','1','3');
	    hasil=pow(2,piringan)-1;
		printf ("\n\tMaka jumlah langkah minimum menara Brahma adalah %d\n",hasil);
		opsi();
	}
	else if(asal==3&&tujuan==1)
	{
		printf("\n\tLangkah-langkah pemindahan piringan :\n");		
	    brahma(piringan,'3','2','1');
	    hasil=pow(2,piringan)-1;
		printf ("\n\tMaka jumlah langkah minimum menara Brahma adalah %d\n",hasil);
		opsi();
	}
	else if(asal==3&&tujuan==2)
	{
		printf("\n\tLangkah-langkah pemindahan piringan :\n");		
	    brahma(piringan,'3','1','2');
	    hasil=pow(2,piringan)-1;
		printf ("\n\tMaka jumlah langkah minimum menara Brahma adalah %d\n",hasil);
		opsi();
	}
	else
	{
		printf("Maksimal Tower adalah 3!");
		opsi();
	}
	

}


void brahma(int n, char x, char y, char z){ 
  	if (n==1) 
	{
    	printf("\tPindahkan piringan paling atas dari tiang %c ke tiang %c\n",x,z);  
	}
	else{
        brahma(n-1,x,z,y);
        brahma(1,x,y,z);
        brahma(n-1,y,x,z);
    }
}


void opsi(){
	char pil[10];
	printf ("\n\tIngin Kembali ke Program? [Y/N] : "); 
	scanf("%s", &pil);
 	
	if(!strcmp(pil, "y") || !strcmp(pil, "Y")){
		system("cls");
		main();
	}
	else if(!strcmp(pil, "n") || !strcmp(pil, "N")){
		system("cls");
		printf("\n\tTerimakasih Telah Menggunakan Program Ini!");
  		exit(0);
	}  
	else{
		opsi();
	}
}


void judul(){
	printf("\n\t+===================================================+");
	printf("\n\t|             PROGRAM TOWER OF BRAHMA               |");
	printf("\n\t+===================================================+\n");
}