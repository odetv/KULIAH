#include <iostream> //BFT

using namespace std;

#define size 9
int	queue[size];
int	front, back;
bool isVisited[size];

int findNextVertex(int graph[size][size], int curVertex){
	for(int i=0; i<size; i++){
		if (graph[curVertex][i]==1 && i!=curVertex && !isVisited[i]){
			return i;
		}
	}
	return -1;
}

void BFT(int graph[size][size], int start){
	queue[0] = start;
	front = 0;
	back = 1;
	isVisited[start]	= true; //berfungsi untuk "TIDAK" kembali ke tempat yang sudah dikunjungi sebelumnya
	
	while(front!=back){
		int nextVertex = findNextVertex(graph, queue[front]);
		
		if(nextVertex==-1){
			cout << (char)(queue[front]+65) << endl; //char + 65 = A dimulai dari 65
			front++; //dequeue
		}else{
			queue[back] = nextVertex;
			isVisited[nextVertex] = true;
			back++; //enqueue
		}
		
	}
}

int main(int argc, char** argv){
	front, back = -1;
	for (int i=0; i<size; i++){
		queue[i]		= -1;
		isVisited[i]	= false;
	}
	
	int graph[size][size] = {
		//		 A  B  C  D	 E  F  G  H  I
		/*A*/	{0, 1, 1, 1, 0, 0, 0, 0, 0},
		/*B*/	{1, 0, 1, 0, 1, 0, 0, 0, 0},
		/*C*/	{1, 1, 0, 1, 0, 1, 1, 0, 0},
		/*D*/	{1, 0, 1, 0, 0, 0, 1, 0, 0},
		/*E*/	{0, 1, 0, 0, 0, 0, 0, 0, 0},
		/*F*/	{0, 0 ,1, 0, 0, 0, 0, 0, 1},
		/*G*/	{0, 0, 1, 1, 0, 0, 0, 1, 0},
		/*H*/	{0, 0, 0, 0, 0, 0, 1, 0, 0},
		/*I*/	{0, 0, 0, 0, 0, 1, 0, 0, 0},
	};
	
	BFT(graph, 0);
	
	return 0;
}
