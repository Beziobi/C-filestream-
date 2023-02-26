#include <iostream>
#include <string>
using namespace std;

struct node 
{
	int data;
	node * next;
	node * prev;
}*head = NULL, *tail = NULL;




void insertAtEnd(int data)
{
	node * t = new node;
	t -> data = data;
	t -> next = NULL;
	if (head == NULL )
	{
		head = t;
		tail = t;
	}
	else 
	{
		t -> prev = tail;
		tail -> next = t;
		tail = t;
		
	}
	cout << "inserted !!!" <<endl;
	
}
void displayFWD()
{
	node * temp = head ;
	
	while (temp != NULL)
	{
		cout << temp -> data << ' ->' <<endl;
		temp = temp -> next ;	
	}
	cout << "NULL " <<endl;
}

void diplayBKD()
{
	node * temp = tail;
	while (temp != NULL)
	{
		cout << temp -> data << '->' <<endl;
		temp = temp -> prev ;
	}	
}
void delete_()
{
	if (head == NULL)
	{
		cout << "the list is empty " <<endl;
		
	}
	else 
	{
		node *temp = tail;
		if (temp -> prev == NULL)
		{
			head = NULL;
				
		}
		else 
		{
			tail = tail -> prev;
			(temp -> prev) ->next = NULL;
			delete temp;
		}
	}
}


int main()
{
	/*
	head 							tail
	NULL -> 5 -> 6 -> 7 -> 8 -> 9 -> NULL
	
	*/
	
insertAtEnd(5);
insertAtEnd(6);
insertAtEnd(7);
insertAtEnd(8);
insertAtEnd(9);
displayFWD();
displayBKD();

	return 0;
}
