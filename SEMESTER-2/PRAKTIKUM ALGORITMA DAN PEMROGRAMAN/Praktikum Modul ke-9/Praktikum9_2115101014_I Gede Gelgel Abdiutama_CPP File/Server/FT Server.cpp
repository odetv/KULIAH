#include <cstdio>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#define MAX 50

using namespace std;

struct data{
	int id_Ayah;
	char nama[51];
};
FILE*file;
int search, pilih, tmp = -1;
struct data keluarga[MAX];
char ulang, isi[MAX][MAX];

void menu();
void tambahRoot();
void tambahNode();
void lihatIndex(struct data keluarga[], int j, int tmp);
void lihatKeluarga(struct data keluarga[], int j, int tmp);
void jalurByIndex(struct data keluarga[], int search, int x, int m);
void lihatJalur(int x);
int main();

void menu(){
	system("cls");
	cout <<"PERMASALAHAN MODUL KE-9"<< endl;
	cout <<"PROGRAM FAMILY TREE"<< endl<< endl;
	cout <<"PILIHAN MENU PROGRAM"<< endl;
	cout <<"1. Tambah Keluarga"<< endl;
	cout <<"2. Lihat Anggota Keluarga"<< endl;
	cout <<"3. Cari Jalur Keturunan"<< endl;
	cout <<"4. Keluar"<< endl<< endl;
	
	cout <<"Masukkan Pilihan : ";
	cin >> pilih;
	switch (pilih){
		case 1:{
			if (tmp==-1){
				tambahRoot();
			}else{
				tambahNode();
			}
			break;
		}
		case 2:{
			system("cls");
			cout <<"(MENU 2). LIHAT ANGGOTA KELUARGA"<<endl<<endl;
			cout <<"Nama Root : " << keluarga[-1].nama <<endl;
			lihatKeluarga(keluarga, 0, tmp);
			cout <<endl<<endl<< "Tekan ENTER untuk kembali...";
			getch();
			system("cls");
			menu();
			break;
		}
		case 3:{
			system("cls");
			cout <<"(MENU 3). LIHAT KETURUNAN BY INDEX"<< endl<< endl;
			lihatIndex(keluarga, 0, tmp);
			cout <<"\nMasukkan Index \t: ";
			cin >> search;
			cout <<"Jalur Keturunan : ";
			int m, x = 0;
			jalurByIndex(keluarga, search, x, m);
			break;
		}
		case 4:{
			system("cls");
			char ulang;
			system("cls");
			cout <<"Apakah Anda Yakin Keluar Dari Program Ini? (Y/N) : ";
			cin >> ulang;
			if(ulang=='y'||ulang=='Y')
			{
				system("cls");
				cout <<"Terimakasih telah menggunakan program ini";
			}
			else
			{
				system("cls");
				menu();
			}
			break;
		}
		default:
			cout <<endl<< "Maaf, pilihan yang anda masukkan tidak ada!\n";
			cout <<"Tekan ENTER untuk mengulang program...";
			getch();
			system("cls");
			menu();
			break;
		}
}

void tambahRoot(){
	system("cls");
	FILE* file = fopen("Database Keluarga(Server).csv", "a");
	cout <<"(MENU 1). TAMBAH KELUARGA"<< endl<< endl;
	cout << "Index Parrent \t: " << tmp <<endl;
	cout <<"Nama Root\t: ";
	gets(keluarga[tmp].nama);
	gets(keluarga[tmp].nama);
	fprintf(file,"%i,%s,%i\n", tmp, keluarga[tmp].nama, -1);
	tmp++;
	cout <<endl;
	fclose(file);
	tambahNode();
}

void tambahNode(){
	int i;
	FILE* file = fopen("Database Keluarga(Server).csv", "a");
	node:	
	cout <<"Index Parrent \t: ";
	cin >> keluarga[i].id_Ayah;
	cout <<"Nama \t\t: ";
	gets(keluarga[i].nama);
	gets(keluarga[i].nama);
	cout <<endl;
	tmp++;
	//i++;
	fprintf(file,"%i,%s,%i\n", tmp-1, keluarga[i].nama, keluarga[i].id_Ayah);
	tambahNode:
	cout <<"Ingin menambah lagi? (Y/N) :";
	cin >> ulang;
	cout <<endl;
	if (ulang == 'y' | ulang == 'Y'){
		goto node;
	}else if (ulang == 'n' | ulang == 'N'){
		fclose(file);
		main();
	}else {
		goto tambahNode;
	}
}

void lihatIndex(struct data keluarga[], int j, int n){
	FILE* file = fopen("Database Keluarga(Server).csv", "r");
	if (!file)
	{
	    printf("\nBelum Ada File Tersimpan\n\n");
	}
	else
		{
			cout <<"\n========================================="<<endl;
			cout <<"| Index\t| Nama\t\t| Index Parrent |"<<endl;
			cout <<"========================================="<<endl;
	        char buffer[1024];
	        int row = 1;
	        int column = 0;
	 
	        while (fgets(buffer, 1024, file))
			{
	            column = 0;
	            row++;
	
	            if(row == 1)
	                continue;
	
	            char* value = strtok(buffer, ", ");
	 
	            while (value) {
	                if (column == 1) {
	                    printf("\t| ");
	                }
	
	                if (column == 2) {
	                    printf("\t\t| ");
	                }
	                if (column == 3) {
	                    printf("\t\t|");
	                }
	                printf("%s", value);
	                value = strtok(NULL, ",");
	                column++;
	            }
	            cout <<"-----------------------------------------"<<endl;
	        }
	        fclose(file);
	    }
}

void lihatKeluarga(struct data keluarga[], int j, int n){
	FILE* file = fopen("Database Keluarga(Server).csv", "r");
	if (!file)
	{
	    printf("\nBelum Ada File Tersimpan\n\n");
	}
	else
		{
			cout <<"\n========================================="<<endl;
			cout <<"| Index\t| Nama\t\t| Index Parrent |"<<endl;
			cout <<"========================================="<<endl;
	        char buffer[1024];
	        int row = 1;
	        int column = 0;
	 
	        while (fgets(buffer, 1024, file))
			{
	            column = 0;
	            row++;
	
	            if(row == 1)
	                continue;
	
	            char* value = strtok(buffer, ", ");
	 
	            while (value) {
	                if (column == 1) {
	                    printf("\t| ");
	                }
	
	                if (column == 2) {
	                    printf("\t\t| ");
	                }
	                if (column == 3) {
	                    printf("\t\t|");
	                }
	                printf("%s", value);
	                value = strtok(NULL, ",");
	                column++;
	            }
	            cout <<"-----------------------------------------"<<endl;
	        }
	        fclose(file);
	    }
}

void jalurByIndex(struct data keluarga[], int search, int x, int m){
	FILE* file = fopen("Database Keluarga(Server).csv", "r");
	int idx = search;
	if(idx<=-1){
		strcpy(isi[x], keluarga[idx].nama);
		lihatJalur(x);
		return;
	}else{
		strcpy(isi[x], keluarga[idx].nama);
		search=keluarga[idx].id_Ayah;
		x++;
		jalurByIndex(keluarga, search, x, m);
	}
}

void lihatJalur(int x){
	if (x==0){
		cout <<isi[0];
		return;
	}else{
		cout <<isi[x];
		cout <<" -> ";
		lihatJalur(x-1);
	}
}


int main(){
	menu();
}