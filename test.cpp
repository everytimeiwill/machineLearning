#include <iostream>

using namespace std;

// create a node struct
struct node{
	int data;
	node* next;	
	
};

int main(){
	
	// create some pointers
	node* n;
	node* t;
	node* h;
	node* search;
	
	n = new node;     // create a new node
	n->data = 1;      // add data to the node	
	t = n;   		  // t points to new node
	h = n;			  // h points to new node
	search = n;		  // search is pointing to n
	
	n = new node;	  // create a new node 
	n->data = 2;	  // add data to the node
	t->next = n;	  // t->next now points to the second node
	t = t->next;	  // t now is pointing to the second node
	
	// outputs the number 2 
	cout << n->data <<endl;
	
	
	return 0;
}