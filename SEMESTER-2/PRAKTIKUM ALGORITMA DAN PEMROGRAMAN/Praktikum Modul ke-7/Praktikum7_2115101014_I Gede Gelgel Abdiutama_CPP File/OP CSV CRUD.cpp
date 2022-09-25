#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

struct data{
	char nim[11], nama[51], jk[10], tahunlahir[5], tahunmasuk[5];
	char ipk[10];
};
FILE*file;
data mhs[100];

int pilih, savedata, input;
void menu(){
	cout << "PERMASALAHAN MODUL KE-5\n";
	cout << "PROGRAM DATA OPERASI FILE MAHASISWA\n\n";
	cout << "PILIHAN MENU PROGRAM\n";
	cout << "1. Input/Tambah Data\n";
	cout << "2. Edit Data\n";
	cout << "3. Hapus Data\n";
	cout << "4. Cari Mahasiswa\n";
	cout << "5. Tampilkan Semua Data\n";
	cout << "6. Keluar\n\n";
	cout << "Masukkan Pilihan : ";
	cin >> pilih;
}

void inputdata(){
	//FILE* file = fopen("Database Mahasiswa.csv", "w");
	int i, nomor;
	cout << "Masukkan Jumlah Data Yang Akan Diinput : ";
	cin >> input;
	nomor = 0;
	cout << endl;
	for(i=0; i<input; i++)
	{	
		nomor=nomor+1;
		cout << "Data Ke-" << nomor << endl;
		gets(mhs[savedata].nim);
		input_nim:
		cout << "NIM\t\t: ";
		gets(mhs[savedata].nim);
		for (int i=0; i<savedata; i++)
		{
			if (strcmp(mhs[i].nim, mhs[savedata].nim) == 0)
			{
				cout << "Maaf, NIM Sudah Ada\n";
				cout << "Silahkan Masukkan NIM Yang Berbeda!" << endl;
				goto input_nim;
			}
		}
		cout << "Nama\t\t: ";
		gets(mhs[savedata].nama);
		cout << "Jenis Kelamin\t: ";
		gets(mhs[savedata].jk);
		cout << "Tahun Lahir\t: ";
		cin >> mhs[savedata].tahunlahir;
		cout << "Tahun Masuk\t: ";
		cin >> mhs[savedata].tahunmasuk;
		cout << "IPK\t\t: ";
		cin >> mhs[savedata].ipk;
		cout << "" <<endl;
		
		//fprintf(file,"%s,%s,%s,%s,%s\n", mhs[savedata].nama, mhs[savedata].jk, mhs[savedata].tahunlahir, mhs[savedata].tahunmasuk, mhs[savedata].ipk);
		savedata++;
	}
	fclose(file);
}

/*void lihatdata(){
    FILE* file = fopen("Database Mahasiswa.csv", "r");
 
    if (!file)
    {
    	printf("Belum Ada File Tersimpan\n\n");
	}
 
    else
	{
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
                if (column == 0) {
                    printf("NIM \t\t:");
                }

                if (column == 1) {
                    printf("\nNama \t\t:");
                }

                if (column == 2) {
                    printf("\nJenis Kelamin \t:");
                }
                
                if (column == 3) {
                    printf("\nTahun Masuk \t:");
                }
                
                if (column == 4) {
                    printf("\nTahun Lahir \t:");
                }
                
                if (column == 5) {
                    printf("\nIPK \t\t:");
                }
 
                printf("%s", value);
                value = strtok(NULL, ",");
                column++;
            }
            printf("\n");
        }
        fclose(file);
    }
}*/

void lihatdata(){
    int i, j;
	if(savedata ==0)
	{
		cout <<"Belum Ada Data Tersimpan\n";
		cout <<"Silahkan Input Data Terlebih Dahulu!"<< endl;
		system ("cls");
	}
	else
	{
		j=1;
		file=fopen("Database Mahasiswa.csv","w");
		for(i=0; i<savedata; i++)
		{
			printf ("\nData Ke-%i", j);
			printf ("\nNIM\t\t: %s",&mhs[i].nim);
			printf ("\nNama\t\t: %s",&mhs[i].nama);
			printf ("\nJenis Kelamin\t: %s",&mhs[i].jk);
			printf ("\nTahun Lahir\t: %s",&mhs[i].tahunlahir);
			printf ("\nTahun Masuk\t: %s",&mhs[i].tahunmasuk);
			printf ("\nIPK\t\t: %s\n", mhs[i].ipk);
			
			fprintf(file,"%s,%s,%s,%s,%s,%s\n", mhs[i].nim, mhs[i].nama, mhs[i].jk, mhs[i].tahunlahir, mhs[i].tahunmasuk, mhs[i].ipk);
			j++;	
		}
        printf("\n");
        fclose(file);
    }
    FILE* file = fopen("Database Mahasiswa.csv", "r");
 
    if (!file)
    {
    	printf("Belum Ada File Tersimpan\n\n");
	}
 
    else
	{
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
                if (column == 0) {
                    printf("NIM \t\t:");
                }

                if (column == 1) {
                    printf("\nNama \t\t:");
                }

                if (column == 2) {
                    printf("\nJenis Kelamin \t:");
                }
                
                if (column == 3) {
                    printf("\nTahun Masuk \t:");
                }
                
                if (column == 4) {
                    printf("\nTahun Lahir \t:");
                }
                
                if (column == 5) {
                    printf("\nIPK \t\t:");
                }
 
                printf(" %s", value);
                value = strtok(NULL, ",");
                column++;
            }
            printf("\n");
        }
        fclose(file);
    }
}

void hapusdata(){
	FILE* file = fopen("Database Mahasiswa.csv", "a");
	int i, j; 
	char pilih;
	if (savedata == 0)
	{
		cout << "Belum Ada Data Tersimpan\n";
		cout << "Silahkan Input Data Terlebih Dahulu!" << endl;
	}
	else
	{
		system ("cls");
		char hapusdata[11];
		cout << "Masukkan Data NIM Yang Ingin Dihapus : ";
		cin >> hapusdata;
		for(i=0; i<savedata; i++)
		{
			if(strcmp(hapusdata, mhs[i].nim) ==0)
			{
				system ("cls");
				cout << "NIM\t\t: " << mhs[i].nim << "\n";
				cout << "Nama\t\t: " << mhs[i].nama << "\n";
				cout << "Jenis Kelamin\t: " << mhs[i].jk << "\n";
				cout << "Tahun Lahir\t: " << mhs[i].tahunlahir << "\n";
				cout << "Tahun Masuk\t: " << mhs[i].tahunmasuk << "\n";
				cout << "IPK\t\t: " << mhs[i].ipk << endl;
	
				mhs[i] = mhs[i+1];
				cout << "\nData Berhasil Di Hapus" << endl;
				
				savedata--;
				break;
			}
			for(int i=0; i<savedata; i++)
			{
				if(mhs[i].nim != hapusdata)
				{
					system ("cls");
					cout << "Maaf NIM Yang Anda Tidak Valid\n";
					cout << "Tidak Ada Data Yang Berhasil Dihapus!" << endl;
				}
			}
		}
	}
}

void caridata(){
	FILE* file = fopen("Database Mahasiswa.csv", "r");	
	system("cls");
	char carinim[11];
	int i,j;
	char pilihan;
	j=1;
	if (savedata == 0)
	{
		cout << "Belum Ada Data Tersimpan\n";
		cout << "Silahkan Input Data Terlebih Dahulu!" << endl;
	}
	else
	{
		cout << "Masukkan Data NIM Yang Ingin Dicari: ";
		cin >> carinim;
		for(i=0; i<savedata; i++)
		{
			if(strcmp(mhs[i].nim, carinim)==0)
			{
				system ("cls");
				cout <<"NIM Berhasil Ditemukan" << endl;
				cout << "NIM\t\t: " << mhs[i].nim << endl;
				cout << "Nama\t\t: " << mhs[i].nama << endl;
				cout << "..." << endl;
				cout <<"Ingin Menampilkan Data Lengkap?(Y/N): ";

				cin >> pilihan;
				if(pilihan == 'y'||'Y')
				{
					system ("cls");
					cout << "NIM\t\t: " << mhs[i].nim << "\n";
					cout << "Nama\t\t: " << mhs[i].nama << "\n";
					cout << "Jenis Kelamin\t: " << mhs[i].jk << "\n";
					cout << "Tahun Lahir\t: " << mhs[i].tahunlahir << "\n";
					cout << "Tahun Masuk\t: " << mhs[i].tahunmasuk << "\n";
					cout << "IPK\t\t: " << mhs[i].ipk << endl;
					}
				else
				{
					system("cls");
					menu();
				}
				break;
			}
			else if(mhs[i].nim != carinim)
				{
					system ("cls");
					cout << "Maaf NIM Yang Anda Cari Tidak Dapat Ditemukan\n";
					cout << "Silahkan Coba Lagi!" << endl;
				}
		}
	}
}

void editdata(){
	FILE* file = fopen("Database Mahasiswa.csv", "a");
	system("cls");
	int i;
	if (savedata == 0)
	{
		cout << "Belum Ada Data Tersimpan\n";
		cout << "Silahkan Input Data Terlebih Dahulu!" << endl;
	}
	else
	{
		char edit[11];
		cout << "Masukkan Data NIM Yang Ingin Diedit : ";
		cin >> edit;
		for(i=0; i<savedata; i++)
		{
			if(strcmp(mhs[i].nim, edit) ==0)
			{
				system ("cls");
				cout << "NIM Tervalidasi\n";
				cout << "Silahkan Edit Data\n\n"; 
				cout << "NIM\t\t: " << mhs[i].nim << "\n";
				cout << "Nama\t\t: ";
				gets(mhs[i].nama);
				gets(mhs[i].nama);
				cout << "Jenis Kelamin\t: ";
				gets(mhs[i].jk);
				cout << "Tahun Lahir\t: ";
				cin >> mhs[i].tahunlahir;
				cout << "Tahun Masuk\t: ";
				cin >> mhs[i].tahunmasuk;
				input_ipk:
				cout << "IPK\t\t: ";
				cin >> mhs[i].ipk;
				cout << "\nData Berhasil Diubah" <<endl;
				break;
			}
			
			else if(edit != mhs[i].nim)
				{
					system ("cls");
					cout << "Maaf NIM Yang Anda Masukkan Tidak Valid\n";
					cout << "Tidak Ada Data Yang Berhasil Di Edit" << endl;
				}
		}
	}
}
		
int main(){
	awal:
	menu();
	switch(pilih)
	{
		case 1:
			{
				system("cls");
				cout << "INPUT/TAMBAH DATA MAHASISWA" << endl;
				inputdata();
				cout << "\nTekan ENTER untuk kembali...";
				getch();
				system("cls");
				goto awal;
			}
		case 2:
			{
				system("cls");
				cout << "EDIT DATA MAHASISWA" << endl;
				editdata();
				cout << "\nTekan ENTER untuk kembali...";
				getch();
				system("cls");
				goto awal;
			}
		case 3:
			{
				system("cls");
				cout << "HAPUS DATA MAHASISWA" << endl;
				hapusdata();
				cout << "\nTekan ENTER untuk kembali...";
				getch();
				system("cls");
				goto awal;
			}
		case 4:
		{
			system("cls");
			cout << "MENCARI DATA MAHASISWA" << endl;
			caridata();
			cout << "\nTekan ENTER untuk kembali...";
			getch();
			system("cls");
			goto awal;
		}
		case 5:
			{
				system("cls");
				cout << "MENAMPILKAN SEMUA DATA MAHASISWA" << endl << endl;
				lihatdata();
				cout << "\nTekan ENTER untuk kembali...";
				getch();
				system("cls");
				goto awal;
			}
		case 6:
			{
				system("cls");
				int exit;
				system("cls");
				cout << "Apakah Anda Yakin Keluar Dari Program Ini? (Y/N) : ";
				scanf ("%s", &exit);
				if(exit=='y'||exit=='Y')
				{
					system("cls");
					cout << "Terimakasih telah menggunakan program ini";
				}
				else
				{
					system("cls");
					goto awal;
				}
				return 0;
			}
		default:
		{
			system("cls");
			printf("\nMaaf, pilihan yang anda masukkan tidak ada!\n\n");
			cout << "\nTekan ENTER untuk mengulang program...";
			getch();
			system("cls");
			goto awal;
		}
	}
	return 0;
}