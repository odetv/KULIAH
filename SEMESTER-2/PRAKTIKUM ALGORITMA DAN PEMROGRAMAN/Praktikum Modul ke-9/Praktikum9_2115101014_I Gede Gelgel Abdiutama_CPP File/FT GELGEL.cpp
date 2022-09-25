#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct data{
	int id_Ayah[100];
	char nama[51];
};
FILE*file;
data keluarga[100];
int id_Ayah[100];
int pilih, a, get, idx[100], cari[100], hasil, i;

void input(){
	FILE* file = fopen("Database Keluarga.csv", "a");
	void menu();
	cout <<"(MENU 1). TAMBAH KELUARGA"<< endl<< endl;
	cout << "Masukkan Jumlah Orang : ";
	cin>>get;
	idx[a] = 0;
	id_Ayah[a] = -1;
	system("cls");
	cout <<"(MENU 1). TAMBAH KELUARGA"<< endl<< endl;
	cout << "Index Parrent \t: -1\n";
	cout <<"Nama \t\t: ";
	gets(keluarga[a].nama);
	gets(keluarga[a].nama);
	cout << endl;
	fprintf(file,"%i,%s,%i\n", idx[a], keluarga[a].nama, id_Ayah[a]);
	a++;
	for (i=0; i<get-1; i++)
	{
		idx[a]=1;
		idx[a]=idx[a]+i;
		cout << "Index Parrent \t: ";
		cin>>id_Ayah[a];
	    cout <<"Nama \t\t: ";
	    gets(keluarga[a].nama);
	    gets(keluarga[a].nama);
	    cout << endl;
	    fprintf(file,"%i,%s,%i\n", idx[a], keluarga[a].nama, id_Ayah[a]);
	    a++;
	}
    fclose(file);
    cout <<"\n\nData Berhasil Ditambahkan. Tekan ENTER untuk lanjut...";
    getch();
	system("cls");
	menu();
}

void lihatkeluarga(){
	FILE* file = fopen("Database Keluarga.csv", "r");
	void menu();
	cout <<"(MENU 2). LIHAT ANGGOTA KELUARGA"<< endl;
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
	cout <<"\n\nTekan ENTER untuk kembali...";
	getch();
	system("cls");
	menu();
}

void jalurByIndex(){
	FILE* file = fopen("Database Keluarga.csv", "r");
	void menu();
	cout <<"(MENU 3). LIHAT KETURUNAN BY INDEX"<< endl<< endl;
	cout << "Masukkan Index : ";
    cin>>cari[a];
    if (!file)
    {
    	printf("Belum Ada File Tersimpan\n\n");
	}
    else if(cari[a]==idx[a]){
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
    }
	else {
		cout << "Keluarga yang dicari tidak ada" <<endl;
	}
	fclose(file);
	cout <<"\n\nTekan ENTER untuk kembali...";
	getch();
	system("cls");
	menu();
}

void menu(){
	cout <<"PERMASALAHAN MODUL KE-9"<< endl;
	cout <<"PROGRAM FAMILY TREE"<< endl<< endl;
	cout <<"PILIHAN MENU PROGRAM"<< endl;
	cout <<"1. Tambah Keluarga"<< endl;
	cout <<"2. Lihat Anggota Keluarga"<< endl;
	cout <<"3. Cari Jalur Keturunan by Index"<< endl;
	cout <<"4. Keluar"<< endl<< endl;
	
	cout <<"Masukkan Pilihan : ";
	cin >> pilih;
	switch(pilih){
		case 1:
		system("cls");
		input();
		break;
		
		case 2:
		system("cls");
		lihatkeluarga();
		break;
		
		case 3:
		system("cls");
		jalurByIndex();
		break;
		
		case 4:
		system("cls");
		char exit;
		system("cls");
		cout <<"Apakah Anda Yakin Keluar Dari Program Ini? (Y/N) : ";
		cin >> exit;
		if(exit=='y'||exit=='Y')
		{
			system("cls");
			cout <<"Terimakasih telah menggunakan program ini";
		}
		else
		{
			system("cls");
			menu();
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

int main()
{
	menu();
	return 0;
}