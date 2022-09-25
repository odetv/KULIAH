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


void insertToTail (int val)
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
		tail->next = newNode;
		tail = newNode;
	}
	cout << "Node " << val << " Inserted to tail\n";
	return;
}

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

void insertNodeAfter()
{
	
	return;
}

void deleteTail()
{
	if (head==NULL)
	{
		cout << "ERROR: Empty List\n";
	}
	else if (head==tail)
	{
		delete(tail);
		head = tail = NULL;
		cout << "Node deleted from tail \n";
	}
	else
	{
		node *tmp = head;
		while (tmp->next!=tail)
		{
			tmp = tmp->next;
		}
		tail = tmp;
		delete (tmp->next);
		tmp->next = NULL;
		cout << "Node deleted from tail \n";
	}
	return;
}

void deleteHead()
{
	if (head==NULL)
	{
		cout << "ERROR: Empty List\n";
	}
	else if (head==tail)
	{
		delete(head);
		head = tail = NULL;
		cout << "Node deleted from head \n";
	}
	else
	{
		node *tmp = head;
		head = tmp->next;
		delete (tmp);
		tmp = NULL;
		cout << "Node deleted from head \n";
	}
	return;
}

void deleteNode()
{
	
	return;
}

void printElementByIndex(int index)
{
	node *tmp = head;
	int val=1;
	while (head != NULL)
	{
		cout << "Value Index Ke-" << val << " = " << head->value;
		head = head->next;
		cout << "\n";
		val++;
	};
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
	insertToTail(50);
	insertToTail(60);
	insertToTail(70);
	insertToTail(80);

	cout << "\nPress ENTER to Print All Node & Delete Head...";
	getch();
	printAllNode();
	deleteHead();
	
	cout << "\nPress ENTER to Print All Node & Delete Tail...";
	getch();
	printAllNode();
	deleteTail();
	
	cout << "\nPress ENTER to Print All Node...";
	getch();
	printAllNode();
	
	cout << "\nPress ENTER to Print Element By Index...";
	getch();
	cout << "\n";
	printElementByIndex(10);
	return 0;
}