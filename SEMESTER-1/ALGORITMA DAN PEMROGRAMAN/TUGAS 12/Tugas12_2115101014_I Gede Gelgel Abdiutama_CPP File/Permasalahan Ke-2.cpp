#include <iostream>
#include <ctime>

using namespace std;

void tampilkandata (int* arr, int jmldata)
{
    for (int i=0; i<jmldata;i++)
    {
        cout << arr[i]<<" ";
    }
    return;
}

const int jmldata = 10;
int banyakdata[jmldata];

int main()
{
    srand(time(NULL));
    for(int i=0; i<jmldata; i++)
    {
        banyakdata[i]=rand()%10;
    }
    cout<< "PERMASALAHAN KE-2" <<endl;
    cout<< "MENGHITUNG JUMLAH DATA ARRAY" <<endl <<endl;
    cout<< "Banyak Data Dalam Array \t\t: ";
    tampilkandata(banyakdata,jmldata);
    
    int jumlah=0;
    for (int i=0;i<=jmldata;i++)
	{
        jumlah=jumlah+banyakdata[i];
    }
    cout<< endl;
    cout<< "Jumlah Seluruh Data Dalam Array : "<<jumlah;
  return 0;
}
