#include <iostream>

using namespace std;

#define size 5
int		shortestDistance[size];
int		prevVertex[size];
bool	isVisited[size];

int getMinDistanceVertex(){
	int min			= 9999;
	int minIndex	= 0;
	for(int i=0; i<size; i++){
		if (!isVisited[i] && shortestDistance[i] <= min){
			min			= shortestDistance[i];
			minIndex	= i;
		}
	}
	return minIndex;
}

void djikstra(int graph[size][size], int start){
	shortestDistance[start] = 0;
	prevVertex[start]		= start;
	for(int i=0; i<size; i++){
		int curVertex = getMinDistanceVertex();
		for (int j=0; j<size; j++){
			if (!isVisited[j] && graph[curVertex][j]>0){ //pilih tetangga yang belum dikunjungi
				int newDistance = shortestDistance[curVertex] + graph[curVertex][j];
				if (newDistance < shortestDistance[j]){ //ubah shortest distance jika nilai new distance lebih kecil
					shortestDistance[j] = newDistance;
					prevVertex[j] 		= curVertex;
				}
			}
		}
		isVisited[curVertex] = true;
	}
}

void printData(){
	for (int i=0; i<size; i++){
		cout << (char)(i+65) << " ";
		cout << shortestDistance[i] << " ";
		cout << (char)(prevVertex[i]+65) << endl;
	}
}

int main(int argc, char** argv){
	for(int i = 0; i<size; i++){
		shortestDistance[i]	= 99999; //harus menggunakan angka yang lebih besar dari maximal angka
		isVisited[i]		= false;
	}
	int graph[size][size] = {
		//		 A  B  C  D  E
		/*A*/	{0, 6, 0, 1, 0},
		/*B*/	{6, 0, 5 ,2, 2},
		/*C*/	{0, 5, 0, 0, 5},
		/*D*/	{1, 2, 0, 0, 1},
		/*E*/	{0, 2, 5, 1, 0}
	};
	djikstra(graph, 0);
	printData();
	return 0;
}