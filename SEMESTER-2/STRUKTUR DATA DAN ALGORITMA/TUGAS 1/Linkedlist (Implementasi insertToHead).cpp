#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
	int value;
	node *next;
};

node *head = NULL;
node *tail = NULL;

void insertToHead(int val)
{
	node *newNode = new node();
	newNode->value = val;
	newNode->next = NULL;
	
	if (head==NULL)
	{
		head = tail = newNode;
	}
	else
	{
		newNode->next = head;
		head = newNode;
	}
	cout << "Node " << val << " Inserted to head\n";
	return;
}

void printAllNode()
{
	node *tmp = head;
	cout << "\nPrinting all nodes : \n";
	while(tmp!=NULL)
	{
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << "NULL\n";
	return;
}

int main()
{
	cout << "Press ENTER to Insert Node...";
	getch();
	cout << "\n";
	insertToHead(10);
	insertToHead(20);
	insertToHead(30);
	insertToHead(40);

	cout << "\nPress ENTER to Print All Node...";
	getch();
	printAllNode();
	
	return 0;
}