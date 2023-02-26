#include <iostream>
#include <string>
using namespace std ;

struct node{
	int id;
	string name;
	string pass;
	
	node* next;
} *new_,*temp,*head = NULL;


void insert_be(int id_,string name_,string pass_)
{
	new_ = new node;
	new_ -> id = id_;
	new_ -> name = name_;
	new_ -> pass = pass_;
	
	if(head == NULL)
	{
		new_ -> next = NULL;
		head = new_;
	}
	else 
	{
		new_ -> next = head;
		head = new_;	
	}
}
void delete_ (int id_ )
{
	if (head == NULL)
	{
		cout << "NULL !!! Deletion is not possible " <<endl;
		
	}	
	else 
	{
		int num_1 = 0;
		temp = new node;
		temp = head;
		while (num_1 == 0)
		{
			
			if (temp -> id == id_)
			{
				next = temp -> next;
			}
			else 
			{	
				head=temp->next; 
    			delete temp; 
			}
		}
	}
	
	
}

int main ()
{
	
	int id;
	string name;
	string pass;
	
	
	
	while (num = 1 )
	{
	cout << "enter id" <<endl;
	cin >> id;
	cin << "enter password" << endl;
	cin >> pass;
	cin << "enter name" << endl;
	cin >> name;
	insert_be(id,name,pass)	;	
	}
	
	
	return 0;
}
