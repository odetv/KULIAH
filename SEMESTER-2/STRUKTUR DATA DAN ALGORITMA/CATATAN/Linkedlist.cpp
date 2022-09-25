#include <iostream>

using namespace std;

struct node
{
	int value;
	node *next;
};

node *head = NULL;
node *tail = NULL;

//bool *findNodeByIndex(int index, node **node)

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

void insertToHead(int val) //tugas
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
		head->next = newNode;
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

void deleteHead() //tugas
{
	if (head==NULL)
	{
		cout << "ERROR: Empty List\n";
	}
	else if (head=tail)
	{
		delete(head);
		tail = head = NULL;
		cout << "Node deleted from head \n";
	}
	else
	{
		node *tmp = head;
		delete (head);
		head = tmp->next;
		cout << "Node deleted from head \n";
	}
	return;
}

void deleteNode()
{
	
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
	cout << "NULL\n\n";
	return;
}

void printElementByIndex(int index)
{
	cout << "Value Index Ke- = 10 blbabla";
	return;
}

int main()
{
	insertToHead(10);
	insertToHead(20);
	insertToHead(30);
	insertToHead(40);
	insertToTail(50);
	insertToTail(60);
	insertToTail(70);
	insertToTail(80);
	
	printAllNode();
	deleteHead();
	deleteTail();
	printAllNode();
	
	return 0;
}