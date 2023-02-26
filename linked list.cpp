// linked list 
#include <iostream>
using namespace std;

struct node 
{
	int data;
	node *next;
}*head = NULL;

void printList (node * n)
{
	while (n != NULL)
	{
		cout << n -> data << "";
		n = n -> next;
	}
}
void push(node ** head_ref , int new_data)
{
	node* new_node = new node();
	new_node -> data = new_data;
	new_node -> next = (*head_ref);
	(*head_ref) = new_node;
}
void inserAfter(node* prev_node, int new_data)
{
	if(prev_node == NULL)
	{
		cout << "the given previous node cannot be NULL";
		return ;
	}
	node * new_node = new node();
	
	new_node -> data = new_data;
	new_node -> next = perv_node -> next;
	prev_node -> next = new_node;
	
}
void append (node ** head_ref , int new_data)
{
	node* new_node = new node();
	node *last = *head_ref;
	new_node -> data = new_data;
	new_node -> next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}
	while (last -> next != NULL)
	{
		last = last -> next ;
	
	}
	last -> next = new_node;
	return;
}
int main ()
{
	
	node * head = new node();
	node * temp = new node();
	node * last = new node();
	
	head -> data = 1;
	head -> next = temp;
	
	temp -> data = 2;
	temp -> next = NULL;
	
	printList (head);
	
	
	
	
	
	return 0;
}
