#include <iostream>
using namespace std; 
struct list 
{
	char name [10];
	int count;
	struct list * next  ; // instance of list 
	
};
struct node 
{
	char name [10];
	int age ;
	float height ;
	node *next ;
};
node *start_ptr = NULL ;
// single linked list 
struct Node 
{
	int data 
	Node *next ;
	
} * haed = NULL;
int main {
//insert at the b
int d ; 
Node *newNode = new Node ;
cout << "enter the first node data:";
cin >> d ;
newNode -> data = d;
if (head == NULL)
{
	newNode -> next = NULL;
	head = newNode;
	
}
else 
{
	newNode -> next = head ;
	head = newNode;
}
// insert at the e 
int d;
Node *newNode = new Node;
cout << "Enter the node data:";
cin>> d;
newNOde -> data = d;
newNode ->next = NULL ;
if (head == NULL)
{
	head =newNOde;
	
}
else 
{
	node *temp = head ;
	while (temp -> next != NULL)
	{
		temp = temp -> next ;
		
	}
	temp -> next = newNode 
}
// inserting at specific location 
int d ;
Node * newNode = new Node ;
cout << "enter the node data:";
cin >> d 
newNode -> data = d;
if (head == NULL)
{
	newNode -> next = NULL;
	head = newNode;
	
}
else 
{
	Node *temp =head ;
	while (temp -> next != NULL && temp -> data != 10)
	{
		temp = temp -> next ;
		
	}
	if (temp -> next == NULL)
	{
		cout << "Given node is not found in the list !!! Insertion not possible !!!";	

	}
	else 
	{
		newNode -> next = temp -> next ;
		temp -> next = newNOde ;
		cout << "New node added at the middle "<< endl;
	}
}	

return 0;
}
