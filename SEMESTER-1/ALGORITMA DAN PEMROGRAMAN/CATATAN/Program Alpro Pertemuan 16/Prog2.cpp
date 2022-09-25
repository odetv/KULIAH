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

mahasiswa* mhs1;
mahasiswa mhs2;

int main()
{
	mhs1 = new mahasiswa;
	
	cout << "Silhkan masukkan data mahasiswa:\n\n";
	cout << "Data mahasiswa ke-1\n";
	cout << "NIM\t\t\t: ";
	cin >> mhs1->NIM;
	cout << "Nama\t\t\t: ";
	gets(mhs1->Nama);
	gets(mhs1->Nama);
	cout << "Jenis Kelamin (L/P)\t: ";
	cin >> mhs1->JK;
	cout << "Tahun Masuk\t\t: ";
	cin >> mhs1->ThMasuk;
	cout << "IPK\t\t\t: ";
	cin >> mhs1->IPK;

	cout << "\nData mahasiswa ke-2\n";
	cout << "NIM\t\t\t: ";
	cin >> mhs2.NIM;
	cout << "Nama\t\t\t: ";
	gets(mhs2.Nama);
	gets(mhs2.Nama);
	cout << "Jenis Kelamin (L/P)\t: ";
	cin >> mhs2.JK;
	cout << "Tahun Masuk\t\t: ";
	cin >> mhs2.ThMasuk;
	cout << "IPK\t\t\t: ";
	cin >> mhs2.IPK;
	
	cout << "Data mahasiswa yang telah berhasil di input:\n\n";
	cout << "Data mahasiswa ke-1\n";
	cout << "NIM\t\t\t: " << mhs1->NIM << endl;
	cout << "Nama\t\t\t: " << mhs1->Nama << endl;
	cout << "Jenis Kelamin (L/P)\t: " << mhs1->JK << endl;
	cout << "Tahun Masuk\t\t: " << mhs1->ThMasuk << endl;
	cout << "IPK\t\t\t: " << mhs1->IPK << endl << endl;
	
	cout << "Data mahasiswa ke-2\n";
	cout << "NIM\t\t\t: " << mhs2.NIM << endl;
	cout << "Nama\t\t\t: " << mhs2.Nama << endl;
	cout << "Jenis Kelamin (L/P)\t: " << mhs2.JK << endl;
	cout << "Tahun Masuk\t\t: " << mhs2.ThMasuk << endl;
	cout << "IPK\t\t\t: " << mhs2.IPK << endl;
	
	return 0;
}
