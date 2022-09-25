#include <iostream> //DFT

using namespace std;

#define size 9
int	stack[size];
int	top;
bool isVisited[size];

int findNextVertex(int graph[size][size], int curVertex){
	for(int i=0; i<size; i++){
		if (graph[curVertex][i]==1 && i!=curVertex && !isVisited[i]){
			return i;
		}
	}
	return -1;
}

void DFS(int graph[size][size], int start){
	stack[0]			= start;
	top					= 0;
	isVisited[start]	= true;
	
	while(top > -1){
		int nextVertex = findNextVertex(graph, stack[top]);
		if(nextVertex==-1){
			cout << (char)(stack[top]+65) << endl;
			top--;
		}
		else {
			top++;
			stack[top] = nextVertex;
			isVisited[nextVertex] = true;
		}
	}
}

int main(int argc, char** argv){
	top = -1;
	for (int i=0; i<size; i++){
		stack[i]		= -1;
		isVisited[i]	= false;
	}
	
	int graph[size][size] = {
		//		A	B	C 	D	E	F	G	H	I
		/*A*/	{0,	1,	1,	1,	0,	0,	0,	0,	0},
		/*B*/	{1,	0,	1,	0,	1,	0,	0,	0,	0},
		/*C*/	{1,	1,	0,	1,	0,	1,	1,	0,	0},
		/*D*/	{1,	0,	1,	0,	0,	0,	1,	0,	0},
		/*E*/	{0,	1,	0,	0,	0,	0,	0,	0,	0},
		/*F*/	{0,	0,	1,	0,	0,	0,	0,	0,	1},
		/*G*/	{0,	0,	1,	1,	0,	0,	0,	1,	0},
		/*H*/	{0,	0,	0,	0,	0,	0,	1,	0,	0},
		/*I*/	{0,	0,	0,	0,	0,	1,	0,	0,	0},
	};
	
	DFS(graph, 0);
	
	return 0;
}