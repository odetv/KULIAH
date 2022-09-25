#include <iostream>

using namespace std;

struct mahasiswa
{
	char NIM[11];
	char Nama[51];
	char JK;
	int ThMasuk;
	float IPK;
};

mahasiswa mhs1, mhs2;

int main()
{
	cout << "Silhkan masukkan data mahasiswa:\n\n";
	cout << "Data mahasiswa ke-1\n";
	cout << "NIM: ";
	cin >> mhs1.NIM;
	cout << "Nama: ";
	cin >> mhs1.Nama;
	cout << "Jenis Kelamin (L/P): ";
	cin >> mhs1.JK;
	cout << "Tahun Masuk: ";
	cin >> mhs1.ThMasuk;
	cout << "IPK: ";
	cin >> mhs1.IPK;

	cout << "\nData mahasiswa ke-2\n";
	cout << "NIM: \t\t\t";
	cin >> mhs2.NIM;
	cout << "Nama: \t\t\t";
	cin >> mhs2.Nama;
	cout << "Jenis Kelamin (L/P): \t";
	cin >> mhs2.JK;
	cout << "Tahun Masuk: \t";
	cin >> mhs2.ThMasuk;
	cout << "IPK: \t";
	cin >> mhs2.IPK;
	
	cout << "Data mahasiswa yang telah berhasil di input:\n\n";
	cout << "Data mahasiswa ke-1\n";
	cout << "NIM: " << mhs1.NIM << endl;
	cout << "Nama: " << mhs1.Nama << endl;
	cout << "Jenis Kelamin (L/P): " << mhs1.JK << endl;
	cout << "Tahun Masuk: " << mhs1.ThMasuk << endl;
	cout << "IPK: " << mhs1.IPK << endl << endl;
	
	cout << "Data mahasiswa ke-2\n";
	cout << "NIM: " << mhs2.NIM << endl;
	cout << "Nama: " << mhs2.Nama << endl;
	cout << "Jenis Kelamin (L/P): " << mhs2.JK << endl;
	cout << "Tahun Masuk: " << mhs2.ThMasuk << endl;
	cout << "IPK: " << mhs2.IPK << endl;
	
	return 0;
}
