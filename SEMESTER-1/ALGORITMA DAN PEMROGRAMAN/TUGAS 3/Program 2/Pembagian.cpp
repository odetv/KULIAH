#include <iostream>

using namespace std;

int input (int *a, int *b);
int kali (int a, int b);
float bagi (float a, float b);

int main()
{
    int a, b;
    input (&a, &b);
    cout<<endl;
    kali (a,b);
    bagi (a, b);
}

int input (int *a, int *b)
{
    cout<<"=== SELAMAT DATANG DI KALKULATOR PINTAR ==="
	cout<<"Masukan nilai a : ";cin>>*a;
    cout<<"Masukan nilai b : ";cin>>*b;
}

int kali (int a, int b)
{
    cout<<"Operasi Penjumlahan : "<<a+b<<endl;
    cout<<"Operasi Pengurangan : "<<a-b<<endl;
    cout<<"Operasi Perkalian   : "<<a*b<<endl;
}

float bagi (float a, float b)
{
	cout<<"Hasil Pembagian     : "<<a/b<<endl;
}
