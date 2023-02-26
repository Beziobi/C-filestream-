#include <iostream>
#include <string>
using namespace std;

struct Node
{
	int id;
	string name;
	string password;
	Node * next;
	 
} *head = NULL,*newNode,*temp_1,*temp_2;


void insertAtThebeg(int id , string name, string password  )
{
	newNode = new Node;
	newNode ->name = name;
	newNode ->password = password;
	newNode -> id = id;
	
	if (head == NULL)
	{
		newNode -> next = NULL;
		head = newNode;
	}
	else 
	{
		newNode ->next= head;
		head = newNode;
	}
}
/*
void DeletAtThebe()
{
	if (head == NULL)
	{
		cout << "List is Empty!!! Deletion is not possible" << endl;
		
	}
	
	while (temp_1 -> data != key && temp_2 -> next != NULL)
	{
		temp_2 = temp_1;
		temp_1 = temp_1 -> next;

	}
	else 
	{
		temp = new Node;
		temp = head;
		if (temp -> next == NULL)
		{
			head = NULL;
		}
		else 
		{
			head = temp -> next;
		}
	}

}
*/	

void disp ()
{
	cout << "Item has been added." << endl;
	Node *temp = head ;
	while (temp!=NULL)
	{
		cout << "name" << temp -> name <<endl;
		cout << "password "<< temp -> password << endl;
		cout << "id " << temp -> id << endl;
		temp = temp -> next ;
	}
	cout << "NULL" <<endl;
}
int main ()
{
	//inster at the beg...
	
	int id_;
	string name_;
	string pass_;
	cout << "enter id " <<endl;
	cin >> id_;
	cout << "enter name " <<endl;
	cin >> name_ ;
	cout << "passwoerd" << endl;
	cin >> pass_;
	bool a = false ;
	char b;
	while (a == false )
	{
	 
	insertAtThebeg(id_,name_,pass_);
	cout << "do you want to enter data again y or n"  << endl;
	cin >> b;
	if (b == 'y')
	{
		cout << "enter id " <<endl;
		cin >> id_;
		cout << "enter name " <<endl;
		cin >> name_ ;
		cout << "passwoerd" << endl;
		cin >> pass_;
	}
	else 
	{
		a = true;
	}
	


	}
	

//	DeletAtThebe;
	disp;
	
	
	
	
	
	return 0;
}
