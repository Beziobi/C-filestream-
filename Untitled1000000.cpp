#include <iostream> 
#include <string> 
using namespace std; 
struct login_profile 
{ 
    string name; 
    string password; 
    int id; 
    login_profile *next; 
}*head=NULL; 
 
void insertion_login_profile() 
{ 
 
   login_profile *new_node=new login_profile; 
   cout<<"enter the new id\n"; 
   cin>>new_node->id; 
   cout<<"enter the new name\n"; 
   cin>>new_node->name; 
   cout<<"enter the new password\n"; 
   cin>>new_node->password; 
   if(head==NULL) 
   { 
       new_node->next=NULL; 
       head=new_node; 
   } 
   else{ 
    new_node->next=head; 
    head=new_node; 
 
   } 
    cout<<"inserting the record of login profile at the begining is successful\n"; 
 
} 
 
 
void deletiing_login_profile() 
{    login_profile *temp; 
   if(head=NULL) 
    cout<<"deletion is not possible\n"; 
    else 
  { 
 
  login_profile *temp=head;} 
 
 
   if(temp->next=NULL) 
   { 
       head=NULL; 
       delete temp; 
   } 
 
   else 
{ 
    head=temp->next; 
    delete temp; 
} 
 
cout<<"deleting the existing profile is completed\n"; 
} 
 
void login_profile_search() 
{   int key; 
    cout<<"enter the id for the profile you are looking for\n"; 
     cin>>key; 
    login_profile *temp=head; 
    while(temp->next!=NULL) 
    { 
        if(temp->id==key) 
        { 
            cout<<"the profile is found: "<<temp->id<<" "<<temp->name<<" "<<temp->password<<endl; 
           break; } 
 
            temp=temp->next; 
 
    } 
    cout<<"sorry! the profile you are looking for is not found\n"; 
} 
 
void display_report() 
{ 
    login_profile *temp=head; 
    while(temp->next!=NULL) 
    { 
        cout<<"profile id: "<<temp->id<<endl; 
        cout<<"profile name: "<<temp->name<<endl; 
        cout<<"profile password: "<<temp->password<<endl; 
    } 
 
} 
 
int main() 
{ int a; 
    do{ 
 
     int n; 
   cout<<" press 1 to  Insert the record of login profile \n "; 
   cout<<" press 2 to Delete the record of an existing login profile \n"; 
   cout<<" press 3 to  Find the record of an existing login profile \n"; 
   cout<<" press 4 to  Display Report\n "; 
	cin>>n; 
    switch(n) 
    { 
    case 1: insertion_login_profile(); 
    case 2: deletiing_login_profile(); 
    case 3: login_profile_search(); 
    case 4: display_report(); 
    } 
 
    cout<<"press any key except 1 to continue\n"; 
 
    } while(a!=1); 
    return 0; 
}
