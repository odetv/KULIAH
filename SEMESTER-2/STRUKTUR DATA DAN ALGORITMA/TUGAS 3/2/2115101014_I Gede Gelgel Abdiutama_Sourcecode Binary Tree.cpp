#include <iostream>

using namespace std;

struct Node{
	int value;
	Node *left;
	Node *right;
}

*root = NULL;

void insertNode(int val, Node *&currentNode){
	if(currentNode==NULL){
		/*Node *newNode = new Node();
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->value = val;
		currentNode = newNode;*/
		currentNode = new Node();
		currentNode->left = NULL;
		currentNode->right = NULL;
		currentNode->value = val;
		cout << "node " << val << " inserted!" << endl;
	}
	else if(val < currentNode->value){
		insertNode(val, currentNode->left);
	}
	else if(val > currentNode->value){
		insertNode(val, currentNode->right);
	}
	else{
		cout << "ERROR: Node Already Exist!" << endl;
	}
}

void insertNode(int val){
	if (root==NULL){
		root = new Node();
		root->left = NULL;
		root->right = NULL;
		root->value = val;
	}
	else{
		Node *currentNode = root;
		insertNode(val, currentNode);
	}
}

Node *findMin(Node *currentNode){
	if (currentNode->left == NULL){
		return currentNode;
	}
	else{
		return findMin(currentNode->left);
	}
}

Node *findMax(Node *currentNode){
	if (currentNode->right == NULL){
		return currentNode;
	}
	else{
		return findMax(currentNode->right);
	}
}

void PreOrderTraversal(Node *currentNode){
	if (currentNode!=NULL){
		cout << currentNode->value << " - ";
		PreOrderTraversal(currentNode->left);
		PreOrderTraversal(currentNode->right);
	}
}

void PostOrderTraversal(Node *currentNode){
	if (currentNode!=NULL){
		PostOrderTraversal(currentNode->left);
		PostOrderTraversal(currentNode->right);
		cout << currentNode->value << " - ";
	}
}

void InOrderTraversal(Node *currentNode){
	if (currentNode!=NULL){
		InOrderTraversal(currentNode->left);
		cout << currentNode->value << " - ";
		InOrderTraversal(currentNode->right);
	}
}

int main(){
	insertNode(6);
	insertNode(3);
	insertNode(10);
	insertNode(1);
	insertNode(4);
	insertNode(15);
	insertNode(2);
	cout << "\n";
	cout << "Min Node value: " << findMin(root)->value << endl;
	cout << "Max Node value: " << findMax(root)->value << endl;		
	cout << "\n";
	cout << "Pre-Order Traversal: ";
	PreOrderTraversal(root);
	cout << "\n\n";
	cout << "Post-Order Traversal: ";
	PostOrderTraversal(root);
	cout << "\n\n";
	cout << "In-Order Traversal: ";
	InOrderTraversal(root);
	
	return 0;
}