#include <iostream>

using namespace std;

void TowerOfBrahma (int n, int nl, int n2, int n3){

	if (n==1){
		cout << nl << "ke" << n2 << endl;
		return;
	}
		TowerOfBrahma (n-1, nl,n3, n2); cout << nl <<"ke" << n2 << endl;
		cout << nl << "ke" << n2 << endl;
		TowerOfBrahma (n-1, n3, n2, nl);
	}

int main(){
int JP;
int n1 = 1;
int n2 = 3;
int n3 = 2;

cout << "Masukkan Jumlah Piringan: ";
cin >> JP;
if (JP<1){
    cout << "ERROR: Masukkan Jumlah Piringan Yang Benar" << endl;
}
cout << "Mulai: " << endl;
TowerOfBrahma(JP, n1, n2, n3);
cout << "Selesai" << endl;
return 0;
}