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

bool findNodeByIndex(int index, node *&Node)
{
	node *tmp = head;
	for(int i=0; i<index; i++)
	{
		if (tmp==NULL)
		return false;
		tmp = tmp->next;
	}
	Node = tmp;
	return true;
}

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

void insertToHead(int val)//tugas
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
		newNode->next=head;
		head=newNode;
	}
	cout << "Node " << val << " Inserted to Head\n";
  return;
}

void deleteHead()//tugas
{
	if(head==NULL)
	{
	cout << "ERROR: Empty List\n";
	}
	else if(head==tail)
	{
		delete(head);
		head=tail=NULL;
		cout << "Node Deleted From Head\n";
	}
	else{
		node *tmp = head;
		head=tmp->next;
		delete (tmp);
		tmp=NULL;
		
		cout << "Node Deleted From Head\n";
	}
	
  return;
}

void deleteTail()
{
	if(head==NULL)
	{ //jika list kosong
		cout << "ERROR: Empty List\n";
	}
	else if(head==tail)//jika hanya ada 1 elemen
	{	delete(tail);
		head=tail=NULL;
		cout << "Node Deleted From Tail\n";
	}
	else
	{
		node *tmp = head;
		while(tmp->next!=tail)
		{
			tmp= tmp->next;
		}
		tail = tmp;
		delete (tmp->next);
		tmp->next = NULL;
		
		
		cout << "Node Deleted From Tail\n";
	}
  return;
}

void deleteNode()//postpone
{
  
  return;
}

void printAllNode()
{
  node *tmp = head;
  cout << "\nPrinting all nodes : \n";
  while(tmp!=NULL)
  {
    cout << tmp->value << " -> ";
    tmp = tmp->next;
  }
  cout << "NULL\n\n";
  return;
}
int noindex;
void printElementByIndex(int index){//tugas -- print value di index ke-x
	int element;
	node *tmp= head;
	
	if(tmp==NULL)
	{
		head = tail = NULL;
		cout << "ERROR: Empty List\n\n";
	}
/*	else if(noindex != tmp)//kondisi ketika tidak dapat menemukan element pada index
	{
		cout << "Sorry, The Element Number You Were Looking For Could Not Be Found\n\n";
	}*/
	else
	{
		for(noindex=0; noindex<=index; noindex++)
		{                       
			element=tmp->value;
			cout << "Element " << element << " Was Found By Index: " << noindex <<endl;
			tmp = tmp->next;
		}
	}

	return;
}

void insertNodeAfter(int val, node *tmp)
{
	if (tmp==NULL)
	{
		cout << "ERROR: Node is null";
	}
	if (tmp==tail)
	{
		insertToTail(val);
	}
	else
	{
		node *newNode = new node();
		newNode->value = val;
		newNode->next = tmp->next;
		tmp->next = newNode;
		cout << "\nNode " << val << " inserted after " << tmp->value;
	}
	return;
}

int main()
{
	printAllNode();	
	
	cout << "\n***********************************\n";
	cout << "Insert A Node To Head ...\n";
	insertToHead(15);	
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Insert More Node To Head ...\n";
	insertToHead(10);
	insertToHead(5);	
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Insert A Node To Tail...\n";
	insertToTail(20);
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Insert More Node To Tail...\n";
	insertToTail(25);
	insertToTail(30);
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Delete A Node From Head...\n";
	deleteHead();
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Delete A Node From Tail...\n";
	deleteTail();
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Delete More Node From Head...\n";
	deleteHead();
	deleteHead();
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Delete More Node From Tail...\n";
	deleteTail();
	deleteTail();
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Delete A Node From Head When Data Is Empty...\n";
	deleteHead();
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Delete A Node From Tail When Data Is Empty...\n";
	deleteTail();
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Print Elements By Index When Data Is Empty...\n";
	printElementByIndex(0);	
	
	cout << "\n***********************************\n";
	cout << "Insert A Node To Head ...\n";
	insertToHead(18);//index0
	printAllNode();
	
	cout << "\n***********************************\n";
	cout << "Print An Element By Index...\n";
	printElementByIndex(0);
	
	cout << "\n***********************************\n";
	cout << "Insert A Node To Head & Tail...\n";
	//Element 18 = index2
	insertToHead(15);//index1
	insertToTail(20);//index3
	insertToTail(22);//index4
	insertToHead(10);//index0
	insertToTail(25);//index5
	printAllNode();
	cout << "\n***********************************\n";
	cout << "Print Elements By Index...\n";
	printElementByIndex(5);
	
	int index;
	cout << "\n\nMasukkan Nilai Index Yang Ingin Dicari: ";
	cin >> index;
	node *searchNode = NULL;
	if(findNodeByIndex(index, searchNode))
	{
		cout << "Node ditemukan... Value node tersebut bernilai : " << searchNode->value << endl;
	}
	else
	{
		cout << "ERROR: Node tidak ditemukan" << endl;
	}
	
	int x;
	cout << "\n\nMasukkan Posisi Nilai Index Yang Ingin InsertNodeAfter: ";
	cin >> index;
	cout << "\nMasukkan Nilai Element Yang Ingin Ditambahkan : ";
	cin >> x;
	if(findNodeByIndex(index, searchNode))
	{
		cout << "Node ditemukan... Value node tersebut bernilai : " << searchNode->value << endl;
		insertNodeAfter(x, searchNode);
	}
	else
	{
		cout << "ERROR: Node tidak ditemukan" << endl;
	}

	printAllNode();
	return 0;
}