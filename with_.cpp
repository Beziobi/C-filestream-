#include <iostream>
#include <string>
using namespace std;
struct library
{
    string title;
    string author;
    int isbn;
    int publish_year;
    library *next;
}*head=NULL;

void menu();
void add_book();
void Delete_Record();
void search_book();
void display_book();
void exit();

int main()
{ 
menu();
return 0;
}



void menu()
	{
		int a;
		do
		{

			int n;
     		cout <<"_______________________________________" <<endl;
   			cout<<"|press 1 to  Add a book " << endl;
   			cout<<"|press 2 to  Delete a book " << endl;
   			cout<<"|press 3 to  search for a book " << endl;
   			cout<<"|press 4 to  Display the list of books "<<endl;
   			cout<<"|press 5 to  quit the library  " <<endl;
   			cout<<" ----------------------------------------" <<endl;
  		 	cin>>n;
    
    	 	switch(n)
    		{
				case 1: 
				{
  					add_book();
             		break;
				 }
    			case 2:
				{ 
  					Delete_Record();
    				break;
				}
    				
    			case 3:
				{ 
  					search_book();
    				break;
				}				
    			case 4:
				{
   					display_book();
   					break;
  				}
  				case 5:
				{
    				exit();
    				break;
  				}
    		}

    cout<<"press 1 to continue "<<endl;
    cin>>a;

   
		} 
	while(a=1);
   

   }  

// add book 
void add_book()
{

	library *new_node=new library;
	cout<<"enter the isbn"<<endl;
	cin>>new_node->isbn;
	cout<<"enter the title"<<endl;
	cin>>new_node->title;
	cout<<"enter the author"<<endl;
	cin>>new_node->author;
	cout<<"enter the publish year"<<endl;
	cin>>new_node->publish_year;
	
	if(head==NULL)
	{
		new_node->next=NULL;
		head=new_node;
	}
   else
	{
		new_node->next=head;
		head=new_node;
	}
    cout<<"Book has been inserted " <<endl;  
}

// delete book
void Delete_Record()
{
	int code;
	cout << "enter the ISBN code you want to delete " <<endl;
	cin >> code;
    library * t = head;
    library * p = NULL;

    // Deletion at the Begin
    if (t != NULL && t -> isbn == code)
    {
        head = t->next;
        delete t;

        cout << "Record Deleted Successfully"<<endl;
		
    }

	// Deletion at any point
    while (t != NULL && t -> isbn != code)
    {
        p = t;
        t = t->next;
    }
    if (t == NULL)
        {
        cout << "Error Try again "<<endl;
        p->next = t->next;

        delete t;
        cout << "Record Deleted Successfully" <<endl;
       }
}

void search_book()
	{
		cout<<"search" <<endl;  
		int key;
    	cout<<"enter the isbn for the book you are looking for"<<endl;
     	cin>>key;
    	library *temp=head;
    	while(temp!=NULL)
    	{
        	if(temp->isbn==key)
        	{
				cout<<"the book is found: "<<endl;
				cout<<"ISBN_code:"<<temp->isbn<<endl;
				cout<<"Title: "<<temp->title<<endl;
				cout<<"Author: "<<temp->author<<endl;
				cout<<"Published year: "<<temp->publish_year<<endl;
           		break;
   			}

            temp=temp->next;

    	}		
   
	}
		
void display_book()
	{
		cout<<"display";
		library *temp=head;
    	while(temp!=NULL)
    	{
    	    cout<<"ISBN_code: "<<temp->isbn<<endl;
    	    cout<<"Title: "<<temp->title<<endl;
    	    cout<<"Author: "<<temp->author<<endl;
    	    cout<<"Published year: "<<temp->publish_year<<endl;
        
    	    temp=temp->next;
    	}  
	}
void exit()
	{
		char confirm;
		cout<<"are u sure u want to exit press y to confirm\n";
		cin>>confirm;
		if(confirm=='y' || confirm=='Y')
		{
  			cout<<"\nthank you ";   
  			exit(0);  
  		}
		else
		{
    		cout<<"you chose to continue\n";
    		menu();
  		}	
	}
