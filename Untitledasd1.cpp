#inculde <iostream>
#include <string>
using namespace std;
struct library 
{
	string book_title;
	string author_;
	int p_year;
	int ibs_code;
	
	library* next;
}*head = NULL;

library * head = new library();

bool check(int code)
{
	if (head == NULL)
	{
		return false;
		
	}
	else if ()
	{
	
		library * t = new library;
		t = head; 
		while (t != NULL )
		{
			if (t -> code == ibs_code)
			{
				return true;
			}
			else 
			{
				t = t -> next;
			}
		
		}
		
		return false ;
	}
}
void insert_record(string title , string author , int year , int code )
{
	library * t = new library ();
	t -> book_title = title;
	t -> author_ = author;
	t -> p_year = year;
	t -> ibs_code = code;
	
	if (head = NULL || (head -> code == t -> ibs_code ))
	{
		t -> next = head;
		head = t;
	}
	else 
	{
		library * c = head;
		while (c -> next != NULL && c -> next -> code < t -> code )	
		{
			c = c-> next ;
			
		}
		t -> next = c -> next;
		c -> next = t;
	}
}
void search_book(int code)
{
	if (head == NULL)
	{
		cout << "there is no book in the library " << endl;
	}
	
	else 
	{
		library * p = head;
		while (p -> next != NULL) 
		{
			if (p -> ibs_code == code )
			{
				cout << "Book title :" << p -> book_title << endl;
				cout << "Author :" << p -> author << endl;
				cout << "Publish year :" << p -> p_year << endl;
				cout << "Ibs code :" << p -> ibs_code << endl;
			}
			p = p -> next;
		}
	}
}


	string book_title;
	string author_;
	int p_year;
	int ibs_code;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
