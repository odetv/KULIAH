#include <iostream>
#include <ctime>

using namespace std;

void BalikArray(int* arr, int size)
{
	int temp[size];
	
	for(int i=0; i<size; i++)
	{
		temp[i] = arr[size -1 - i];
	}
	for(int i=0; i<size; i++)
	{
		arr[i] = temp[i];
	}
	return;
}

void TampilkanData(int* data, int jmlDt)
{
	for (int i=0; i<jmlDt; i++)
	{
		cout << data[i] << " ";
	}
	return;
}


const int jmlData = 10;

int dataku[10];
float rerata;

int main()
{
	srand(time(NULL));
	for(int i=0; i<jmlData; i++)
	{
		dataku[i] = rand()%10;
	}
	cout << "Data sebelum dibalik urutannya:" << endl;
	TampilkanData(dataku, jmlData);
	BalikArray(dataku, jmlData);
	cout << "\nData setelah dibalik urutannya:" << endl;
	TampilkanData(dataku, jmlData);
	return 0;
}
