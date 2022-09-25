#include <cstdio>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

struct data
{
	char nim[11], nama[50], jk[3], tahunlahir[20], tahunmasuk[20], ipk[20];
};
data mhs[100];
int a, b, c, d;

void menu()
{
	printf("PERMASALAHAN MODUL KE-4");
	printf("\nPROGRAM DATA MAHASISWA\n\n");
	printf("PILIHAN MENU PROGRAM\n");
	printf("1. Input/Tambah Data\n");
	printf("2. Edit Data\n");
	printf("3. Hapus Data\n");
	printf("4. Cari Mahasiswa\n");
	printf("5. Tampilkan Semua Data\n");
	printf("6. Keluar\n\n");
}

void inputdata()
{
	printf("Masukkan jumlah data yang akan diinput : ");
	scanf("%i", &b);
	for(c=0; c<b; c++)
	{
		d=d+1;
		printf("\nData ke-%i\n", d);
		printf("NIM\t\t\t : ");
		scanf("%s", &mhs[a].nim);
		printf("Nama\t\t\t : ");
		gets(mhs[a].nama);
		gets(mhs[a].nama);
		printf("Jenis Kelamin(L/P)\t : ");
		scanf("%s", &mhs[a].jk);
		printf("Tahun Lahir\t\t : ");
		scanf("%s", &mhs[a].tahunlahir);
		printf("Tahun Masuk\t\t : ");
		scanf("%s", &mhs[a].tahunmasuk);
		printf("IPK\t\t\t : ");
		scanf("%s", &mhs[a].ipk);
		a++;
	}
	printf("\n\nData Berhasil Ditambahkan. Tekan ENTER untuk lanjut...");
	getch();
	system("cls");
}

void lihatdata()
{
	int i, j;
	printf("\n=========================================================MENAMPILKAN DATA=========================================================\n\n");
	printf("==================================================================================================================================\n");
	printf("||\tNO\t||\tNIM\t||\tNama\t\t\t||\tJK\t||\tT-Lahir\t||\tT-Masuk\t||\tIPK\t||\n");
	j=0;
	for(i=0; i<a; i++)
	{
		j=j+1;
		printf("==================================================================================================================================\n");
		printf("||\t" "%i" "\t||", j);
		printf("%s \t||", mhs[i].nim);
		printf("%s \t\t|", mhs[i].nama);
		printf("|\t" "%s" "\t|", mhs[i].jk);
		printf("|\t" "%s" "\t|", mhs[i].tahunlahir);
		printf("|\t" "%s" "\t|", mhs[i].tahunmasuk);
		printf("|\t" "%s" "\t||", mhs[i].ipk);
		printf("\n");
	}
	printf("==================================================================================================================================\n");
	printf("\nTekan ENTER untuk kembali...");
	getch();
	system("cls");
}

void hapusdata()
{
	int i, j, y;
	char x[11];
	printf("Masukkan NIM Mahasiswa Yang Ingin Dihapus : ");
	scanf("%s", &x);
	for(int i=0; i<a; i++)
	{
		if(strcmp(mhs[i].nim, x)==0)
		{
			for(j = i; j<a ; j++)
			{
				mhs[i]=mhs[i+1];
			}
			a--;
			printf("Mahasiswa Dengan NIM %s Berhasil Dihapus", x);
			printf("\nTekan ENTER untuk kembali...");
			getch();
			system("cls");
		}
	}
	if (strcmp(mhs[i].nim, x)!=0)
		{
			printf("Maaf NIM Yang Anda Masukkan Tidak Ada Pada Program");
			printf("\nTekan ENTER untuk kembali...");
			getch();
			system("cls");
		}
}

void caridata()
{
	char pilihan, cari[11];
	int g;
	printf("Masukkan NIM Mahasiswa Yang Dicari: ");
	scanf("%s", &cari);
	for(g=0; g<b; g++)
	{
		if(strcmp(mhs[g].nim, cari)==0)
		{
			printf("\n=========================================================MENAMPILKAN DATA=========================================================\n\n");
			printf("==================================================================================================================================\n");
			printf("||\tNO\t||\tNIM\t||\tNama\t\t\t||\tJK\t||\tT-Lahir\t||\tT-Masuk\t||\tIPK\t||\n");
			printf("==================================================================================================================================\n");
			printf("||\t" "%i" "\t||", g+1);
			printf("%s \t||", mhs[g].nim);
			printf("%s \t\t||", mhs[g].nama);
			printf("%s \t||", mhs[g].jk);
			printf("%s \t||", mhs[g].tahunlahir);
			printf("%s \t||", mhs[g].tahunmasuk);
			printf("%s \t||", mhs[g].ipk);
			printf("\n==================================================================================================================================\n");
			printf("\nData Ditemukan");
			printf("\nTekan ENTER untuk kembali...");
			getch();
			system("cls");
			menu();
		}
	}
	if(strcmp(mhs[g].nim, cari)!=0)
		{
			printf("\nMaaf, NIM yang anda cari tidak ada pada program");
			printf("\nTekan ENTER untuk melanjutkan program...");
			getch();
			system("cls");
		}
	system("cls");
}

void editdata()
{
	int i;
	char k[11];
	printf("Masukkan NIM Mahasiswa Untuk Diedit Datanya : ");
	scanf("%s", &k);
	for(i=0; i<a; i++)
	{
		if(strcmp(mhs[i].nim,k)==0)
		{
			printf("NIM\t\t\t : ");
			scanf("%s", &mhs[i].nim);
			printf("Nama\t\t\t : ");
			gets(mhs[i].nama);
			gets(mhs[i].nama);
			printf("Jenis Kelamin(L/P)\t : ");
			scanf("%s", &mhs[i].jk);
			printf("Tahun Lahir\t\t : ");
			scanf("%s", &mhs[i].tahunlahir);
			printf("Tahun Masuk\t\t : ");
			scanf("%s", &mhs[i].tahunmasuk);
			printf("IPK\t\t\t : ");
			scanf("%s", &mhs[i].ipk);
			lihatdata();
		}
	}
	if(strcmp(mhs[i].nim,k)!=0)
	{
		printf("\nMaaf, NIM yang dimasukkan tidak ada pada program");
		printf("\nTekan ENTER untuk melanjutkan program...");
		getch();
		system("cls");
	}
}

int main()
{
	int pilih;
	char z;
	awal:
	menu();
	printf("Masukkan Pilihan : ");
	scanf("%i", &pilih);
	if(pilih==1)
	{
		system("cls");
		inputdata();
		//goto awal;
	}
	if(pilih==2)
	{
		system("cls");
		editdata();
		goto awal;
	}
	if(pilih==3)
	{
		system("cls");
		hapusdata();
		goto awal;
	}
	if(pilih==4)
	{
		system("cls");
		caridata();
		goto awal;
	}
	if(pilih==5)
	{
		system("cls");
		lihatdata();
		goto awal;
	}
	if(pilih==6)
	{
		int exit;
		system("cls");
		printf("Apakah Anda Yakin Keluar Dari Program Ini? (Y/N) : ");
		scanf("%s", &exit);
		if(exit=='y'||exit=='Y')
		{
			system("cls");
			printf("Terimakasih telah menggunakan program ini");
		}
		else
		{
			system("cls");
			goto awal;
		}
	}
	else
	{
		printf("Maaf, pilihan yang anda masukkan tidak ada!\n");
		printf("\nTekan ENTER untuk mengulang program...");
		getch();
		system("cls");
		goto awal;
	}
	return 0;
}