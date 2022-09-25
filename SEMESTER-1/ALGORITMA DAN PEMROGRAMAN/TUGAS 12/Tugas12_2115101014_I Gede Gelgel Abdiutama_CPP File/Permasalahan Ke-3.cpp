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
void ganda (int* arr, int jmldata)
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
    cout<< "PERMASALAHAN KE-3" <<endl;
    cout<< "MENGGANDAKAN ELEMEN SUATU ARRAY" <<endl <<endl;
    cout<< "Banyak Data Dalam Array Sebelum Digandakan\t: ";
    tampilkandata(banyakdata,jmldata);
    cout<<endl;
    
    srand(time(NULL));
    for(int i=0; i<jmldata; i++)
    {
        banyakdata[i]=rand()%jmldata*2;
    }
    cout<< "Banyak Data Dalam Array Setelah Digandakan\t: ";
    ganda(banyakdata,jmldata);
  return 0;
}
