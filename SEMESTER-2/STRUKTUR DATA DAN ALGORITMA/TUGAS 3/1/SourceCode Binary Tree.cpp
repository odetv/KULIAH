#include <iostream>
using namespace std;

struct node {
   node *left, *right;
   int value;
}
*root = NULL, *nodeawal = NULL, *nodelanjut = NULL, *q;

void create() {
   int v,c;
   cout << "Masukkan Jumlah Data Node pada Binary Trees: ";
   cin >> c;
   for(int i=0; i<c; i++) {
      	if (root == NULL) {
         	root = new node;
         	cout<<"enter value of root node: ";
         	cin>>root->value;
         	root->right = NULL;
         	root->left = NULL;
      	} 
	  	else {
	        nodeawal = root;
	        cout<<"enter value of node: ";
	        cin>>v;
	        while(true) {
	            if (v< nodeawal->value) {
		               	if (nodeawal->left == NULL) {
		                nodeawal->left = new node;
		                nodeawal = nodeawal->left;
		                nodeawal->value = v;
		                nodeawal->left = NULL;
		                nodeawal->right = NULL;
		                cout<<"value entered in left\n";
		                break;
	              	 } 
				   	else if (nodeawal->left != NULL) {
	                  nodeawal = nodeawal->left;
	               }
	            } 
				else if (v >nodeawal->value) {
	               	if (nodeawal->right == NULL) {
	                  	nodeawal->right = new node;
	                  	nodeawal = nodeawal->right;
	                  	nodeawal->value = v;
	                  	nodeawal->left = NULL;
	                  	nodeawal->right = NULL;
	                  	cout<<"value entered in right\n";
	                  	break;
	               	} 
					else if (nodeawal->right != NULL) {
	                  	nodeawal = nodeawal->right;
	               	}
	            }
	        }
      	}
   }
}

void inorder(node *nodeawal) {
   if (nodeawal != NULL) {
      inorder(nodeawal->left);
      cout<<nodeawal->value<<endl;
      inorder(nodeawal->right);
   }
}

void preorder(node *nodeawal) {
   if (nodeawal != NULL) {
      cout<<nodeawal->value<<endl;
      preorder(nodeawal->left);
      preorder(nodeawal->right);
   }
}

void postorder(node *nodeawal) {
   if (nodeawal != NULL) {
      postorder(nodeawal->left);
      postorder(nodeawal->right);
      cout<<nodeawal->value<<endl;
   }
}

int main() {
   create();
   cout<<" traversal in inorder\n";
   inorder(root);
   cout<<" traversal in preorder\n";
   preorder(root);
   cout<<" traversal in postorder\n";
   postorder(root);
}