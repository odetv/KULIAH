#include <iostream>
#include <cstdio>

using namespace std;

struct mahasiswa
{
	char NIM[11];
	char Nama[51];
	char JK;
	int ThMasuk;
	float IPK;
};

const int JMLMHS = 3;

mahasiswa mhs[JMLMHS];

int main()
{
	cout << "Silhkan masukkan data mahasiswa:\n\n";
	for(int i=0; i<JMLMHS; i++)
	{
		cout << "Data mahasiswa ke-" << i+1 << endl;
		cout << "NIM\t\t\t: ";
		cin >> mhs[i].NIM;
		cout << "Nama\t\t\t: ";
		gets(mhs[i].Nama);
		gets(mhs[i].Nama);
		cout << "Jenis Kelamin (L/P)\t: ";
		cin >> mhs[i].JK;
		cout << "Tahun Masuk\t\t: ";
		cin >> mhs[i].ThMasuk;
		cout << "IPK\t\t\t: ";
		cin >> mhs[i].IPK;
		cout << "\n";
	}
	for(int i=0; i<JMLMHS; i++)
	{
		cout << "\nData mahasiswa yang telah berhasil di input:\n\n";
		cout << "Data mahasiswa ke-" << i+1 << endl;
		cout << "NIM\t\t\t: " << mhs[i].NIM << endl;
		cout << "Nama\t\t\t: " << mhs[i].Nama << endl;
		cout << "Jenis Kelamin (L/P)\t: " << mhs[i].JK << endl;
		cout << "Tahun Masuk\t\t: " << mhs[i].ThMasuk << endl;
		cout << "IPK\t\t\t: " << mhs[i].IPK << endl << endl;
	}
		
	return 0;
}
