#include <iostream>
#include <ctime>

using namespace std;

void TambahMatrik(float** MatrikA, float** MatrikB, float** MatrikC, int baris, int kolom)
{
    for(int i=0; i<baris;i++)
    {
        for (int j=0; j<kolom;j++)
        {
            MatrikC[i][j] = MatrikA[i][j] + MatrikB[i][j];
        }
    }
    return;
}

void TampilkanMatrik(float** Matrik, int baris, int kolom )
{
     for(int i=0; i<baris;i++)
    {
        for (int j=0; j<kolom;j++)
        {
            cout << Matrik[i][j]<< "\t";

        }
        cout << endl;
    }
    return;
}

const int baris =3;
const int kolom =3;

float** MatA;
float** MatB;
float** MatC;

//float MatA[baris][kolom], MatB[baris][kolom], MatC[baris][kolom];

int main()
{
    MatA= new float*[baris];
    MatB= new float*[baris];
    MatC= new float*[baris];
    for (int i=0; i<baris; i++)
    {
        MatA[i]= new float[kolom];
        MatB[i]= new float[kolom];
        MatC[i]= new float[kolom];
    }
    srand(time(NULL));
    for(int i=0; i<baris; i++)
    {
    for (int j=0; j<kolom;j++)
    {
        MatA[i][j] = (float)(rand()%10);
        MatB[i][j] = (float)(rand()%10);
    }
    }
    cout << "Matrik A : \n";
    TampilkanMatrik(MatA, baris, kolom);
    cout << "\n\nMatrik B : \n";
    TampilkanMatrik(MatB, baris, kolom);

    TambahMatrik(MatA, MatB, MatC, baris, kolom);
    cout << "\n\nMatrik A + B : \n";
    TampilkanMatrik(MatC, baris, kolom);

  return 0;
}
