#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define Pohon 50

using namespace std;

struct data{
	int id_Ayah;
	char nama[51];
};
int search, pilih, tmp = -1;
struct data keluarga[Pohon];
char ulang, isi[Pohon][Pohon];

void tambahRoot();
void tambahNode();
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
	cout <<"3. Cari Silsilah Keturunan"<< endl;
	cout <<"4. Keluar"<< endl<< endl;
	cout <<"Masukkan Pilihan : ";
	cin >> pilih;
	switch (pilih){
		case 1:{
			system("cls");
			cout <<"(MENU 1). TAMBAH KELUARGA"<< endl<< endl;
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
			cout <<"Root \t\t\t: " << keluarga[-1].nama <<endl;
			cout <<"Index dari " << keluarga[-1].nama << " \t: -1" <<endl;
			cout <<"========================================="<<endl;
			cout <<"| Index\t| Nama\t\t| Index Parrent |"<<endl;
			cout <<"========================================="<<endl;
			lihatKeluarga(keluarga, 0, tmp);
			cout <<endl<<endl<<endl<< "Tekan ENTER untuk kembali...";
			getch();
			system("cls");
			menu();
			break;
		}
		case 3:{
			system("cls");
			cout <<"(MENU 3). LIHAT KETURUNAN BY INDEX"<< endl<< endl;
			cout <<"\nMasukkan Index \t: ";
			cin >> search;
			cout <<endl<<"Silsilah : ";
			int m, x = 0;
			jalurByIndex(keluarga, search, x, m);
			cout <<endl<<endl<<endl<< "Tekan ENTER untuk kembali...";
			getch();
			system("cls");
			menu();
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
			system("cls");
			cout <<"ERROR: Pilihan yang anda masukkan tidak ada!\n";
			cout <<"Tekan ENTER untuk mengulang program...";
			getch();
			system("cls");
			menu();
			break;
		}
}

void tambahRoot(){
	system("cls");
	cout <<"(MENU 1). TAMBAH KELUARGA"<< endl<< endl;
	cout << "Index Parrent \t: " << tmp <<endl;
	cout <<"Nama Root\t: ";
	gets(keluarga[tmp].nama);
	gets(keluarga[tmp].nama);
	tmp++;
	cout <<endl;
	tambahNode();
}

void tambahNode(){
	node:
	cout <<"Index Parrent \t: ";
	cin >> keluarga[tmp].id_Ayah;
	cout <<"Nama \t\t: ";
	gets(keluarga[tmp].nama);
	gets(keluarga[tmp].nama);
	cout <<endl;
	tmp++;
	
	tambahNode:
	cout <<"Ingin menambah lagi? (Y/N) :";
	cin >> ulang;
	cout <<endl;
	if (ulang == 'y' | ulang == 'Y'){
		goto node;
	}else if (ulang == 'n' | ulang == 'N'){
		main();
	}else {
		goto tambahNode;
	}
}

void lihatKeluarga(struct data keluarga[], int j, int n){
	if (j>=n){
		return;
	}else{
		printf("| %i\t| %s\t\t| %i\t\t|\n", j, keluarga[j].nama, keluarga[j].id_Ayah);
		cout <<"-----------------------------------------"<<endl;
		lihatKeluarga(keluarga, j+1, n);
	}
}

void jalurByIndex(struct data keluarga[], int search, int x, int m){
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