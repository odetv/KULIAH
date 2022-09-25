#include <iostream>
#include <ctime>

using namespace std;

float HitungRerata(int* data, int jmlDt)
{
	int sum = 0;
	for(int i=0; i<jmlDt; i++)
	{
		sum += data[i];
	}
	return((float)sum/jmlDt);
}
void TampilkanData(int* data, int jmlDt)
{
	for (int i=0; i<jmlDt; i++)
	{
		cout << data[i] << endl;
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
	cout << "Data:" << endl;
	TampilkanData(dataku, jmlData);
	rerata = HitungRerata(dataku, jmlData);
	cout << "Rata-rata = " << rerata << endl;
	return 0;
}
