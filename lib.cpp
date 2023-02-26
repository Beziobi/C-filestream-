#include <iostream>
#include <string>
#include<windows.h>
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
         cout<<endl;
         cout<<"Key           Function\n";
         cout<<"1             Add Book\n";
         cout<<"2             Delete Book\n";
         cout<<"3             Search Book\n";
         cout<<"4             Display All Books\n";
         cout<<"5             Exit\n ";
         cout<<"Please Enter a key:";
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

  
   
    } 
  while(a=1);
   

   }  

// insertion
void add_book()
{

  library *new_node=new library;
  cout<<"please enter the publish year\n";
  cin>>new_node->publish_year;
  cout<<"please enter the isbn\n";
  cin>>new_node->isbn;
  cout<<"please enter the title\n";
  cin>>new_node->title;
  cout<<"please enter the author\n";
  cin>>new_node->author;
  
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
    cout<<"Insertion Completed\n";  
}


// ----------------
void Delete_Record()
{
  int code;
  cout << "please enter isbn code: " <<endl;
  cin >> code;
    library * t = head;
    library * p = NULL;

    // Deletion at the Begin
    if (t != NULL && t -> isbn == code)
    {
        head = t->next;
        delete t;
	Sleep(30);
	cout<<".";
	Sleep(30);
	cout<<".";
	Sleep(30);
	cout<<".";
	Sleep(30);
	cout<<".";
	Sleep(30);
	cout<<".";
	Sleep(30);
	cout<<".";
        cout << "Deleted"<<endl;
    
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
    cout<<"search";  
    int key;
      cout<<"enter the isbn for the book you are looking for\n";
       cin>>key;
      library *temp=head;
      while(temp!=NULL)
      {
          if(temp->isbn==key)
          {
        cout<<"the book is found: "<<endl<<"ISBN_code:"<<temp->isbn<<endl<<"Title: "<<temp->title<<endl<<"Author: "<<temp->author<<endl<<"Published year: "<<temp->publish_year<<endl;
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
