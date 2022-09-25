#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string alamat;
	string nim;
	string prodi;
	string jurusan;
	string perguruantinggi;
	
	cout<<"================================================"<<endl<<endl;		
	cout<<"|  MOHON MASUKKAN IDENTITAS DIRI DENGAN BENAR  |"<<endl<<endl;
	cout<<"================================================"<<endl;
	
	cout<<"Nama              : ";
	getline (cin, nama); 
	cout<<"Alamat            : ";
	getline (cin, alamat); 
	cout<<"NIM               : ";
	getline (cin, nim); 
	cout<<"Prodi             : ";
	getline (cin, prodi); 
	cout<<"Jurusan           : ";
	getline (cin, jurusan); 
	cout<<"Perguruan Tinggi  : ";
	getline (cin, perguruantinggi); 
	cout<<"--------------DATA SEDANG DIPROSES--------------"<<endl;
	cout<<endl<<endl<<endl<<endl;
	
	cout<<"------------------------------------------------"<<endl;
	cout<<"=============DATA LENGKAP MAHASISWA============="<<endl; 
	cout<<"------------------------------------------------"<<endl;
	cout<<"Nama              : "<<nama<<endl;
	cout<<"Alamat            : "<<alamat<<endl;
	cout<<"NIM               : "<<nim<<endl;
	cout<<"Prodi             : "<<prodi<<endl;
	cout<<"Jurusan           : "<<jurusan<<endl;
	cout<<"Perguruan Tinggi  : "<<perguruantinggi<<endl<<endl;
	cout<<"----------------------SUCCES---------------------"<<endl;
	cout<<"===============DATA TELAH DITERIMA==============="<<endl; 
	cout<<"-------------------TERIMAKASIH-------------------"<<endl<<endl;
	return 0 <<endl;
}
