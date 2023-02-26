#include <iostream>
using namespace std;

struct number 
{
	int data;
	number *next ;
	number *prev;
	
}* head = NULL , *tail = NULL;

void insertAtTheBeg(int d )
{
	number *num = new number;
	num -> data = d;
	num -> prev = tail;
	num -> next = head;
	if (head == NULL)
	{
	
		head = num;
		tail = num;
		num -> next = head;
		num -> prev = tail;
		
		
	}
	else
	{
		num -> next = head;
		head -> prev = num;
		head = num;
		tail -> next = head;
		
	//	num -> prev = tail; 
		
	}
	cout << "inserted" << endl;
}
void display ()
{
	number *temp = head ;
	while (temp -> next != head )
	{
		cout << temp -> data << "tail ->"  << endl;
		temp = temp -> next;
		
	}
	cout << temp -> data << "-> head " << endl;
} 
int main ()
{
	insertAtTheBeg (21);
	insertAtTheBeg (22);
	insertAtTheBeg (23);
	insertAtTheBeg (24);
	display();
	
	return 0;
}

