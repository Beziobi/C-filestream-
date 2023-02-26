 #include <iostream>
using namespace std;

struct Node
{
    int id;
    string first_name;
    string last_name;
    string sex;
    string department;
    string semister;
    int year;
    Node* next;
};

Node* head = new Node();

bool check(int x)
{
    if (head == NULL)
        return false;

    Node* t = new Node;
    t = head;

    while (t != NULL) {
        if (t->id == x)
            return true;
        t = t->next;
    }
    return false;
}

// Function to insert the record
void Insert_Record(int id,string first_name,string last_name,string sex,string department,string semister,int year)
{
// if Record Already Exist
    if (check(id)) {
        cout << "Student with this "
             << "record Already Exists\n";
        return;
    }
    // Create new Node to Insert Record
    Node* t = new Node();
    t->id = id;
    t->first_name = first_name;
    t->last_name = last_name;
    t->sex = sex;
    t->department = department;
    t->semister = semister;
    t->year = year;

    // Insert at Begin
    if (head == NULL
        || (head->id >= t->id)) {
        t->next = head;
        head = t;
    }

    // Insert at middle or End
    else 
	{
        Node* c = head;
        while (c->next != NULL
               && c->next->id < t->id) {
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }

    cout << "Record Inserted "
         << "Successfully\n"<<endl;
}

// Function to search record for any
// students Record with id number
void Search_Record(int id)
{
    // if head is NULL
    if (!head) {
        cout << "No such Record "
             << "Available\n"<<endl;
        return;
    }

    // Otherwise
    else {
        Node* p = head;
        while (p) {
            if (p->id == id) {
                cout << "id Number  :"<< p->id << endl;
                cout << "first name :"<< p->first_name << endl;
                cout << "last name  :"<< p->last_name << endl;
                cout << "    sex    :"<< p->sex << endl;
                cout << "department :"<< p->department << endl;
                cout << "    year   :"<< p->year << endl;

                return;
            }
            p = p->next;
        }
        if (p == NULL)
            cout << "No such Record "
                 << "Available\n"<<endl;
    }
}

int Delete_Record(int code)
{
	int code;
	cout << "enter the ISBN code you want to delete " <<endl;
    library * t = head;
    library * p = NULL;

    // Deletion at the Begin
    if (t != NULL && t->id == id)
    {
        head = t->next;
        delete t;

        cout << "Record Deleted Successfully"<<endl;
        return 0;
    }

    // Deletion at any point
    while (t != NULL && t->id != id)
    {
        p = t;
        t = t->next;
    }
    if (t == NULL)
        {
        cout << "Error Try again\n"<<endl;
        return -1;
        p->next = t->next;

        delete t;
        cout << "Record Deleted "
             << "Successfully\n"<<endl;

        return 0;
       }
}

// Function to display the Record
void Show_Record()
{
    Node* p = head;
    if (p == NULL) {
        cout << "No Record Available\n";
    }
    else {
       /* cout << "Index  \t";
        cout << "id  \t";
        cout << "user name \t";
        cout << "pass"<<endl;
        */
        // Until p is not NULL
        while (p != NULL) {
            cout << "id Number  :"<< p->id << endl;
            cout << "first name :"<< p->first_name << endl;
            cout << "last name  :"<< p->last_name << endl;
            cout << "    sex    :"<< p->sex << endl;
            cout << "department :"<< p->department << endl;
            cout << "    year   :"<< p->year << endl;

            p = p->next;
        }
    }
}

int main()
{
    head = NULL;
    int id;
    string first_name;
    string last_name;
    string sex;
    string department;
    string semister;
    int year;

    while (true)
        {
        cout << "Press 1 to create a new Record"<<endl;
        cout << "Press 2 to delete a student record"<<endl;
        cout << "Press 3 to Search a Student Record"<<endl;
        cout << "Press 4 to view all students record"<<endl;
        cout << "Press 5 to Exit\n"<<endl;

        cout << "\nEnter your Choice\n";
        int Choice;
        cin >> Choice;

        if (Choice == 1) {

            cout << "Enter id Number of Student\n";
            cin >> id;
            cout << "Enter first name\n";
            cin >> first_name;
            cout << "Enter last name\n";
            cin >> last_name;
            cout << "Enter sex\n";
            cin >> sex;
            cout << "Enter department\n";
            cin >> department;
            cout << "Enter semister\n";
            cin >> semister;
            cout << "Enter year\n";
            cin >> year;


            Insert_Record(id,first_name,last_name,sex,department,semister,year);
        }
        else if (Choice == 2) {
            cout << "Enter id Number of Student whose "
                    "record is to be deleted\n"<<endl;
            cin >> id;
            Delete_Record(id);
        }
        else if (Choice == 3) {
            cout << "Enter id Number of Student whose "
                    "record you want to Search\n"<<endl;
            cin >> id;
            Search_Record(id);
        }
        else if (Choice == 4) {
            Show_Record();
        }
        else if (Choice == 5) {
            return(0);
        }
        else {
            cout << "Invalid Choice "
                 << "Try Again\n"<<endl;
        }
    }
    return 0;
}

