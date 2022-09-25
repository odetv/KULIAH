#include <iostream>
#include <ctime>
#include <stdlib.h>

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
    cout<< "PERMASALAHAN KE-1" <<endl;
    cout<< "MENAMPILKAN DATA SUATU ARRAY" <<endl <<endl;
    cout<< "Banyak Data Dalam Array : ";
    tampilkandata(banyakdata,jmldata);
  return 0;
}
