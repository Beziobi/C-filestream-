#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// structure 
struct teacher
{
	string teacher_id;
	string last_name;
	string first_name;
	string sex;
	string department;
	string t_course_n;
	int c_hour;
	string stud_e;
	// service to compute
	int sem_load;
	string status;
	int rank; 
	int over_lp;
	int over_load;
	
	

};


int main()
{

int s_size = 0;
	teacher t[1000];
	
		
	int num_0 = 0; // while menu
	int num_1 = 0; // while input data 
	int num_2 = 0;
	int num_3 = 0; //
	int num_02 = 0;
	int num_03; 
	char button_1; // menu button
	char button_2; // 
	char button_3; // edit button
	char button_4; // edit for name
	char button_5; // edit for date
	char button_6; // 
	char button_7; // search by name 
	char button_8; // search again 
	char button_9;
	char button_10; 
	string emp_id_1; // to edit get emp_id
	string emp_id_2; // to search by emp_id
	string fname_1; // search 
	string lname_1; // search
	double d; // chack for string 
    char c; // chack for string 
    char d_; // sort 
    char e_; // sort
    
    
    // sort 
    string temp_0;
    string temp_1;
    string temp_2;
    string temp_3;
    string temp_4;
    string temp_5;
    int temp_6;
    string temp_7;
    string temp_8;
    int temp_9;
    int temp_10;
  
  
	int full_length_f;
	int full_length_l;
    int full_length_e;
    int full_length_d;
    int full_length_c;
    int full_length_eva;
    int full_lenght_stat;
    
    // delete
    string delete_t;
    
    
    
    
    
    
    
    // counter 
ifstream t_ccfile ;
t_ccfile.open("teacher_counter_.txt");

int counter; 
t_ccfile >> counter ;
cout << counter <<endl;


// teacher file
ifstream t_tfile;
t_tfile.open("teacher_file_.txt");



for (int i = 0 ; i < counter ; i++)
{
	
	t_tfile >> t[i].teacher_id;
	t_tfile >> t[i].first_name;
	t_tfile >> t[i].last_name;
	t_tfile >> t[i].sex;	
	t_tfile >> t[i].over_load;
	t_tfile >> t[i].over_lp;
	t_tfile >> t[i].rank ;
	t_tfile >> t[i].sem_load;
	t_tfile >> t[i].department;
	t_tfile >> t[i].c_hour;
	t_tfile >> t[i].status;
	t_tfile >> t[i].stud_e;
	t_tfile >> t[i].teacher_id;
	t_tfile >> t[i].t_course_n;
}


//fstream
fstream t_filee;
t_filee.open("teacher_file_.txt",std::ios::out);

// file stream 
ofstream t_file ;	
t_file.open("teacher_file_.txt",std::ios::app);
    
    
    
    
	cout << "Teachers record management " <<endl;
	cout << " " <<endl;
// menu
	while(num_0 == 0)	
	{
		cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;
		cout << "| ------------------------------------------------------------------|" <<endl;    
		cout << "| - press I  to add data                                           -|" <<endl;   
		cout << "| - press E  to edit data                                          -|" <<endl;
		cout << "| - press D  to diplay the table data                              -|" <<endl;
		cout << "| - press S  to search for a record uisng various value            -|" <<endl;   
		cout << "| - press Z  to sort your table                                    -|" <<endl;
		cout << "| - press R  to see rank, sem status, sem load  table              -|" <<endl;
		cout << "| - press -  to Delete data                                        -|" <<endl;   
		cout << "| - press X  to exit                                               -|" <<endl;
		cout << "| ------------------------------------------------------------------|" <<endl;
		cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;
		
		
		cin >> button_1; // choose your button (menu button) 
		cin.ignore();
		
// input
		if (button_1 == 'I' || button_1 == 'i')
		{
			num_1 = 0;
			while (num_1 == 0)
			{
				// fstream
				fstream t_filec;
				t_filec.open("teacher_counter_.txt",std::ios::out);
				// new employee
				counter = counter + 1;
				
				// ofstream
				ofstream t_cfile ;	
				t_cfile.open("teacher_counter_.txt",std::ios::app);
				// add one employee in teacher_counter 
				t_cfile << counter << endl;
				s_size = s_size + 1;
			
				for (int i = 0 ; i < counter ; i++)
				{
					if (i == (counter - 1))
					{	
						cout << "Enter Id : " <<endl;
						cin >> t[i].teacher_id;
						
						
						
					

						
						
						// first name 
						cout << "Enter First Name: " <<endl;
						cin >> t[i].first_name;
    					
						
						for (int j = 0; j < t[i].first_name.length(); j++) 
						{

    	   					c = t[i].first_name.at(j);// Get a char from string
        					if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) 
							{
								cout << "invalid inpute Error!" << endl;
            				
								cout<< "Enter First Name: " <<endl; 
								cin >> t[i].first_name;
								j = 0;
        					}		
     					}
     				
					 
					 
									
						// last name 
						cout << "Enter Last Name: " <<endl;
						//getline(cin,e[i].last_name);
						cin >> t[i].last_name;
    					for (int j = 0; j < t[i].last_name.length(); j++) 
						{

    	   					c = t[i].last_name.at(j);// Get a char from string
        					if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) 
							{
								cout << "invalid inpute Error!" << endl;
            				
								cout<< "Enter Last Name: " <<endl; 
								cin >> t[i].last_name;
								j = 0;
        					}		
     					}
     					
						 
						 
						 
					
     					
     					     					
						// sex
						num_03 = 0;
						while (num_03 == 0)
						{
							cout << "Enter Sex: " <<endl;
							cout << "(F) For Female" <<endl;
							cout << "(M) For Male" <<endl;
						
							cin >> button_10;
							if(button_10 == 'F' || button_10 == 'f') 
							{
								t[i].sex = "F";
							
								num_03 = 1;
							
							}
							else if(button_10 == 'M' || button_10 == 'm')
							{
								t[i].sex = "M";
						
								num_03 = 1;
							
							}
							
							else 
							{
								cout << "invalid input" <<endl;
								num_03 = 0;	
							}
						}
						
						// Evaluation
						int num_01 = 0;
						while(num_01 == 0)
						{
						  
							cout << "Enter Evaluation Result" <<endl;
							cout << "N Not bad" <<endl;
							cout << "B Bad" <<endl;
							cout << "G Good" <<endl;
							cout << "V Vary Good" <<endl;
							cout << "E Excellent" <<endl;
						
							cin >> button_9; 
								
							if(button_9 == 'N' || button_9 =='n')
							{
								t[i].stud_e = "Not Bad";
								num_01 = 1;
							}
							else if(button_9 == 'B' || button_9 == 'b')
							{
								t[i].stud_e = "Bad";
								num_01 = 1;
							}
							else if(button_9 == 'G' || button_9 == 'g')
							{
								t[i].stud_e = "Good";
								num_01 = 1;
							}
							else if(button_9 == 'V' || button_9 == 'v')
							{
								t[i].stud_e = "Vary Good";
								num_01 = 1;
							}
							else if (button_9 == 'E' || button_9 == 'e')
							{
								t[i].stud_e = "Excellent";
								num_01 = 1;	
							}
							else 
							{
								cout << "invalid input" <<endl;
								num_01 = 0;	
							}
						}
						
						
						
						
						
						
						//Credit hour
						cout << "Enter Credit hour: " <<endl;
						while(!(cin >> t[i].c_hour))
						{
							cout << "invalid input!" <<endl;
							cout << "pls enter a number again" <<endl;
							cin.clear();
							cin.ignore(123,'\n');
						}
					
						cout << "Enter Department " <<endl;
						cin >> t[i].department;
					
						
						cout << "Enter Taught Course Name" << endl;
						cin>> t[i].t_course_n;
					
						
						// sem status
						if (t[i].c_hour > 12)
						{
							t[i].status = "Over";	
						}	
						else if (t[i].c_hour < 12)
						{
							t[i].status = "Under";
						}
						else if (t[i].c_hour == 12 )
						{
							t[i].status = "Normal";	
						}
						
						//rank and performance level
						if(t[i].stud_e == "Excellent")
						{
							t[i].rank = 1;
						}
						else if (t[i].stud_e == "Vary Good")
						{
							t[i].rank = 2;
						}
						else if (t[i].stud_e == "Good")
						{
							t[i].rank = 3;
						}
						else if (t[i].stud_e == "Not Bad")
						{
							t[i].rank = 4;
						}
						else if (t[i].stud_e == "Bad")
						{
							t[i].rank = 5;
						}
			
						// over load payment
						
						t[i].sem_load = t[i].c_hour;
						t[i].over_load = t[i].c_hour - 12;
						if (t[i].over_load  >= 1 )
						{
							t[i].over_lp = t[i].over_load * 100;
						}
						else 
						{
							t[i].over_lp = 0;
						}
											
						cout << "press A to input data again: " << endl;
						cout << "press E to exit: " <<endl;
						cout << "or any other key to open menu: " <<endl;
						cin >> button_2;
						if(button_2 == 'A' || button_2 == 'a')
						{
							num_1 = 0;
						}
						else if (button_2 == 'E' || button_2 == 'e')
						{
							for(int i = 0 ; i < counter ; i ++)
							{
								t_file << t[i].teacher_id << endl;
								t_file << t[i].first_name << endl;
								t_file << t[i].last_name << endl;
								t_file << t[i].sex << endl;	
								t_file << t[i].over_load << endl;
								t_file << t[i].over_lp << endl;
								t_file << t[i].rank << endl;
								t_file << t[i].sem_load << endl;
								t_file << t[i].department << endl;
								t_file << t[i].c_hour << endl;
								t_file << t[i].status << endl;
								t_file << t[i].stud_e << endl;
								t_file << t[i].teacher_id << endl;
								t_file << t[i].t_course_n << endl;
								
							}
							num_0 = 1;
							num_1 = 1;
						}
						else 
						{
							num_1 = 1;
						}	
					}//end of input while 
				}//end of if input
			}
		}
	
	
	
	
	
	
	
	
	
// display 		
		else if (button_1 == 'D' || button_1 == 'd')
		{
	
			cout << " ________________________________________________________________________________________________________________________________________________________________ " << endl;
			cout << "|Teacher id          |First Name          |Last Name           |Sex |Department          |Taught Course Name  |Student Evaluation Result     |Credit Hour        |" << endl;
			cout << "|--------------------|--------------------|--------------------|----|--------------------|--------------------|------------------------------|-------------------|" << endl; 
			
				
			
			for (int i = 0 ; i < counter ; i++)
			{			
				
				full_length_e = 20 - t[i].teacher_id.length();
				full_length_f = 20 - t[i].first_name.length();
				full_length_l = 20 - t[i].last_name.length();
				full_length_d = 20 - t[i].department.length();
				full_length_c = 20 - t[i].t_course_n.length();
				full_length_eva = 30 - t[i].stud_e.length();
				
				
				if (!(t[i].teacher_id == "-"))
				{
					cout << "|";
					cout << t[i].teacher_id;
					for (int i = 0 ; i < full_length_e ; i++)
					{
						cout<< " ";
					}
					cout << "|" ;
					cout << t[i].first_name;
					for (int i = 0 ; i < full_length_f ; i++)
					{
						cout<< " ";
					}
					cout << "|" ;
					
					cout << t[i].last_name;
					for (int i = 0 ; i < full_length_l ; i++)
					{
					
						cout<< " ";
					}
					cout << "|" ;
					cout << t[i].sex;
					cout << "   |";
					cout << t[i].department;
					for (int i = 0 ; i < full_length_d ; i++)
					{
						cout<< " ";
					}
					cout << "|";
					
					cout << t[i].t_course_n;
					for (int i = 0 ; i < full_length_c ; i++)
					{
						cout<< " ";
					}
					cout << "|";
				
					cout << t[i].stud_e;
					for (int i = 0 ; i < full_length_eva ; i++)
					{
						cout<< " ";
					}
					cout << "|";
				
					cout << t[i].c_hour << endl;
					cout << "|--------------------|--------------------|--------------------|----|--------------------|--------------------|------------------------------|-------------------|" << endl; 
				}
			}// end of dips for s_size
		
			
			cout << "press A to display table: " << endl;
			cout << "press E to exit: " <<endl;
			cout << "or any other key to open menu: " <<endl;
			cin >> button_2;
			if(button_2 == 'A' || button_2 == 'a')
			{
				num_1 = 0;
			}
			else if (button_2 == 'E' || button_2 == 'e')
			{
				for(int i = 0 ; i < counter ; i ++)
				{
					t_file << t[i].teacher_id << endl;
					t_file << t[i].first_name << endl;
					t_file << t[i].last_name << endl;
					t_file << t[i].sex << endl;	
					t_file << t[i].over_load << endl;
					t_file << t[i].over_lp << endl;
					t_file << t[i].rank << endl;
					t_file << t[i].sem_load << endl;
					t_file << t[i].department << endl;
					t_file << t[i].c_hour << endl;
					t_file << t[i].status << endl;
					t_file << t[i].stud_e << endl;
					t_file << t[i].teacher_id << endl;
					t_file << t[i].t_course_n << endl;
					
				}	
				num_0 = 1;
				num_1 = 1;
			}
			else 
			{
				num_1 = 1;
			}		
		}// end of disp
		
// edit 	
	else if (button_1 == 'E' || button_1 == 'e')
	{
		num_2 = 0;
		while (num_2 == 0)
		{
		
			cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;
			cout << "| ------------------------------------------------------------------|" <<endl;    
			cout << "| - What do you what to edit?                                      -|" <<endl;   
			cout << "| - If Id press (I)                                                -|" <<endl;
			cout << "| - If Name press (N)                                              -|" <<endl;
			cout << "| - If Department press (D)                                        -|" <<endl;   
			cout << "| - If Taught Course Name (T)                                      -|" <<endl;
			cout << "| ------------------------------------------------------------------|" <<endl;
			cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;		
		
		
			cin >> button_3;
		
			if (button_3 == 'I' || button_3 == 'i')
			{
			
				cout << "Enter Teacher id: " <<endl;
			
				cin >> emp_id_1;
				
				for (int i = 0 ; i < s_size; i++)
				{
					if (t[i].teacher_id == emp_id_1)
					{	
						cin >> t[i].teacher_id;
						
					}
				}	
			}
	
			else if (button_3 == 'N' || button_3 == 'n')
			{
				cout << "F to edit First Name: " <<endl;
				cout << "L to edit Last Name: " <<endl;
				cin >> button_4;
				if(button_4 == 'F' || button_4 == 'f')
				{
					cout << "Enter employee id: " <<endl;
			
					cin >> emp_id_1;
			
					for (int i = 0 ; i < s_size; i++)
					{
						if (t[i].teacher_id == emp_id_1)
						{
							cout << "Enter First Name: " <<endl;
							//getline(cin,e[i].first_name);
							cin >> t[i].first_name;
	    					for (int j = 0; j < t[i].first_name.length(); j++) 
							{

    		   					c = t[i].first_name.at(j);// Get a char from string
        						if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) 
								{
									cout << "invalid inpute Error!" << endl;
            				
									cout<< "Enter First Name: " <<endl; 
									cin >> t[i].first_name;
									j = 0;
    	    					}		
     						}
						}
					}	
				}
				else if(button_4 == 'L' || button_4 == 'l')
				{
					cout << "Enter Teacher id: " <<endl;
			
					cin >> emp_id_1;
			
					for (int i = 0 ; i < s_size; i++)
					{
						if (t[i].teacher_id == emp_id_1)
						{
							cout << "Enter Last Name: " <<endl;
							//getline(cin,e[i].last_name);
							cin >> t[i].last_name;
    						for (int j = 0; j < t[i].last_name.length(); j++) 
							{
	
    		   					c = t[i].last_name.at(j);// Get a char from string
  		      					if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) 
								{
									cout << "invalid inpute Error!" << endl;
            				
									cout<< "Enter Last Name: " <<endl; 
									cin >> t[i].last_name;
									j = 0;
	        					}		
    	 					}
						}
					}	
				}	
			}
			else if (button_3 == 'D' || button_3 == 'd')
			{
				
				
					cout << "Enter Teacher id: " <<endl;
			
					cin >> emp_id_1;
			
					for (int i = 0 ; i < s_size; i++)
					{	
						if (t[i].teacher_id == emp_id_1)
						{
							cin >> t[i].department;
						}
					}	
			}
			
			else if (button_3 == 'T' || button_3 == 't')
			{
			
				cout << "Enter Teacher id: " <<endl;
			
				cin >> emp_id_1;
			
				for (int i = 0 ; i < s_size; i++)
				{
					if (t[i].teacher_id == emp_id_1)
					{
						cin >> t[i].t_course_n;
					}
				}	
			}
			else
			{
				cout << "invalid input" <<endl;
			}
			
			cout << "press A to edit data again: " << endl;
			cout << "press E to exit: " <<endl;
			cout << "or any other key to open menu: " <<endl;
			cin >> button_6;
			if(button_6 == 'A' || button_6 == 'a')
			{
				num_2 = 0;
			}
			else if (button_6 == 'E' || button_6 == 'e')
			{
				for(int i = 0 ; i < counter ; i ++)
				{
					t_file << t[i].teacher_id << endl;
					t_file << t[i].first_name << endl;
					t_file << t[i].last_name << endl;
					t_file << t[i].sex << endl;	
					t_file << t[i].over_load << endl;
					t_file << t[i].over_lp << endl;
					t_file << t[i].rank << endl;
					t_file << t[i].sem_load << endl;
					t_file << t[i].department << endl;
					t_file << t[i].c_hour << endl;
					t_file << t[i].status << endl;
					t_file << t[i].stud_e << endl;
					t_file << t[i].teacher_id << endl;
					t_file << t[i].t_course_n << endl;
				}	
				num_0 = 1;
				num_2 = 1;
			}
			else 
			{
				num_2 = 1;
			}	
		}
	}
	
// search	
	else if (button_1 == 'S' || button_1 == 's')
	{
		num_3 = 0;
		while (num_3 == 0)
		{
		
			cout << "how do you want to search your data?" << endl;
			cout << "press (I) to search by id " <<endl;
			cout << "press (N)to search by name " <<endl;
			cin >> button_7;
			if (button_7 == 'I' || button_7 == 'i')
			{
				cout << "Enter employee id: " << endl;
				cin >> emp_id_2;
				cout << " ________________________________________________________________________________________________________________________________________________________________ " << endl;
				cout << "|Teacher id          |First Name          |Last Name           |Sex |Department          |Taught Course Name  |Student Evaluation Result     |Credit Hour        |" << endl;
				cout << "|--------------------|--------------------|--------------------|----|--------------------|--------------------|------------------------------|-------------------|" << endl; 

				for (int i = 0 ; i < counter; i++)
				{
					if(t[i].teacher_id == emp_id_2)
					{
						
					full_length_e = 20 - t[i].teacher_id.length();
					full_length_f = 20 - t[i].first_name.length();
					full_length_l = 20 - t[i].last_name.length();
					full_length_d = 20 - t[i].department.length();
					full_length_c = 20 - t[i].t_course_n.length();
					full_length_eva = 20 - t[i].stud_e.length();
				
				
						cout << "|";
						cout << t[i].teacher_id;
						for (int i = 0 ; i < full_length_e ; i++)
						{
							cout<< " ";
						}
						cout << "|" ;
						cout << t[i].first_name;
						for (int i = 0 ; i < full_length_f ; i++)
						{
							cout<< " ";
						}
						cout << "|" ;
					
						cout << t[i].last_name;
						for (int i = 0 ; i < full_length_l ; i++)
						{
				
							cout<< " ";
						}
						cout << "|" ;
						cout << t[i].sex;
						cout << "   |";
						cout << t[i].department;
						for (int i = 0 ; i < full_length_d ; i++)
						{
							cout<< " ";
						}
						cout << "|";
				
						cout << t[i].t_course_n;
						for (int i = 0 ; i < full_length_c ; i++)
						{
							cout<< " ";
						}
						cout << "|";
				
						cout << t[i].stud_e;
						for (int i = 0 ; i < full_length_eva ; i++)
						{
							cout<< " ";
						}
						cout << "|";
				
						cout << t[i].c_hour << endl;
						cout << "|--------------------|--------------------|--------------------|----|--------------------|--------------------|------------------------------|-------------------|" << endl; 

					}
				}
			}
			else if (button_7 == 'N' || button_7 == 'n')
			{
				cout <<"Enter First and Last Name: " << endl;
				cin >> fname_1;
				cin >> lname_1;
				cout << " ________________________________________________________________________________________________________________________________________________________________ " << endl;
				cout << "|Teacher id          |First Name          |Last Name           |Sex |Department          |Taught Course Name  |Student Evaluation Result     |Credit Hour        |" << endl;
				cout << "|--------------------|--------------------|--------------------|----|--------------------|--------------------|------------------------------|-------------------|" << endl; 

				for (int i = 0 ; i < counter ; i++)
				{
					if(t[i].first_name == fname_1 && t[i].last_name == lname_1)
					{
						full_length_e = 20 - t[i].teacher_id.length();
						full_length_f = 20 - t[i].first_name.length();
						full_length_l = 20 - t[i].last_name.length();
						full_length_d = 20 - t[i].department.length();
						full_length_c = 20 - t[i].t_course_n.length();
						full_length_eva = 20 - t[i].stud_e.length();
				
						cout << "|";
						cout << t[i].teacher_id;
						for (int i = 0 ; i < full_length_e ; i++)
						{
						cout<< " ";
						}
						cout << "|" ;
						cout << t[i].first_name;
						for (int i = 0 ; i < full_length_f ; i++)
						{
							cout<< " ";
						}
						cout << "|" ;
				
						cout << t[i].last_name;
						for (int i = 0 ; i < full_length_l ; i++)
						{
				
							cout<< " ";
						}
						cout << "|" ;
						cout << t[i].sex;
						cout << "   |";
						cout << t[i].department;
						for (int i = 0 ; i < full_length_d ; i++)
						{
							cout<< " ";
						}
						cout << "|";
				
						cout << t[i].t_course_n;
						for (int i = 0 ; i < full_length_c ; i++)
						{
							cout<< " ";
						}
						cout << "|";
				
						cout << t[i].stud_e;
						for (int i = 0 ; i < full_length_eva ; i++)
						{
							cout<< " ";
						}
						cout << "|";
				
						cout << t[i].c_hour << endl;
						cout << "|--------------------|--------------------|--------------------|----|--------------------|--------------------|------------------------------|-------------------|" << endl; 

					}
				}
			}
			
			cout << "press A to search again: " << endl;
			cout << "press E to exit: " <<endl;
			cout << "or any other key to open menu: " <<endl;
			cin >> button_8;
			if(button_8 == 'A' || button_8 == 'a')
			{
				num_3 = 0;
			}
			else if (button_8 == 'E' || button_8 == 'e')
			{
				for(int i = 0 ; i < counter ; i ++)
				{
					t_file << t[i].teacher_id << endl;
					t_file << t[i].first_name << endl;
					t_file << t[i].last_name << endl;
					t_file << t[i].sex << endl;	
					t_file << t[i].over_load << endl;
					t_file << t[i].over_lp << endl;
					t_file << t[i].rank << endl;
					t_file << t[i].sem_load << endl;
					t_file << t[i].department << endl;
					t_file << t[i].c_hour << endl;
					t_file << t[i].status << endl;
					t_file << t[i].stud_e << endl;
					t_file << t[i].teacher_id << endl;
					t_file << t[i].t_course_n << endl;
				}				
				num_0 = 1;
				num_3 = 1;
			}
			else 
			{
				num_3 = 1;
			}
		}	
	}
	
	
// sort	
	else if (button_1 == 'Z' || button_1 == 'z')
	{
		for(int i = 0 ; i < counter ; i++)
		{	
		d_ = t[i].first_name.at(0);	
			for(int j = i+1 ; j < s_size ; j++)
			{
				e_ = t[j].first_name.at(0);
				if(d_>e_)
				{
					temp_0 = t[i].teacher_id;
					t[i].teacher_id = t[j].teacher_id;
					t[j].teacher_id = temp_0;
					
					temp_1 = t[i].first_name;
					t[i].first_name = t[j].first_name;
					t[j].first_name = temp_1;
					
					temp_2 = t[i].last_name;
					t[i].last_name = t[j].last_name;
					t[j].last_name = temp_2;
					
					temp_3 = t[i].sex;
					t[i].sex = t[j].sex;
					t[j].sex = temp_3;
					
					temp_4 = t[i].department;
					t[i].department = t[j].department;
					t[j].department = temp_4;
					
					temp_5 = t[i].t_course_n;
					t[i].t_course_n = t[j].t_course_n;
					t[j].t_course_n = temp_5;
					
					temp_6 = t[i].c_hour;
					t[i].c_hour = t[j].c_hour;
					t[j].c_hour = temp_6;
					
					temp_7 = t[i].stud_e;
					t[i].stud_e = t[j].stud_e;
					t[j].stud_e = temp_7;	
					
					temp_8 = t[i].status;
					t[i].status = t[j].status;
					t[j].status = temp_8;
					
					temp_9 = t[i].rank;
					t[i].rank = t[j].rank;
					t[j].rank = temp_9;
					
					temp_10 = t[i].over_lp;
					t[i].over_lp = t[j].over_lp;
					t[j].over_lp = temp_10;
					
					
					
					
				}
			}
		}
		cout << "Sort Complete " << endl;
	}
	
	else if (button_1 == 'R' || button_1 == 'r')
	{
	int sem_load;
	string status;
	string rank;// base on performance level and student evaluation 
	int over_lp;
	int over_load;
	cout << " __________________________________________________________________________________________________________________________________________________ " << endl;
	cout << "|Teacher id          |First Name          |Last Name           |Sex |Department          |Sem Status     |Rank |Sem Load      |Over Load Payment   |" << endl;
	cout << "|--------------------|--------------------|--------------------|----|--------------------|---------------|-----|--------------|--------------------|" << endl; 
						
						
					for (int i = 0 ; i < counter ; i++)
					{	
						full_length_e = 20 - t[i].teacher_id.length();
						full_length_f = 20 - t[i].first_name.length();
						full_length_l = 20 - t[i].last_name.length();
						full_length_d = 20 - t[i].department.length();
						full_length_c = 20 - t[i].t_course_n.length();
						full_length_eva = 20 - t[i].stud_e.length();
						full_lenght_stat = 15 - t[i].status.length();
						
						
						cout << "|";
						cout << t[i].teacher_id;
						for (int i = 0 ; i < full_length_e ; i++)
						{
						cout<< " ";
						}
						cout << "|" ;
						cout << t[i].first_name;
						for (int i = 0 ; i < full_length_f ; i++)
						{
							cout<< " ";
						}
						cout << "|" ;
				
						cout << t[i].last_name;
						for (int i = 0 ; i < full_length_l ; i++)
						{
				
							cout<< " ";
						}
						cout << "|" ;
						cout << t[i].sex;
						cout << "   |";
						cout << t[i].department;
						for (int i = 0 ; i < full_length_d ; i++)
						{
							cout<< " ";
						}
						cout << "|";
				
						cout << t[i].status;
						for (int i = 0 ; i < full_lenght_stat ; i++)
						{
							cout<< " ";
						}
						cout << "|";
				
						cout << t[i].rank;
						cout << "    |";
						cout << t[i].sem_load;
						cout << "            |";
						cout << t[i].over_lp << endl;
						
						
						cout << "|--------------------|--------------------|--------------------|----|--------------------|---------------|-----|--------------|--------------------|" << endl; 

					}	
	}
// delete record
	else if (button_1 == '-')
	{
		cout << "Enter Teacher id " << endl;
		cin >> delete_t;
		for (int i = 0 ; i < counter ; i++ )
		{
			if (delete_t == t[i].teacher_id)
			{
			
				t[i].teacher_id = "-";
		 		t[i].first_name = "-";
				t[i].last_name = "-";
				t[i].sex = "-";
				t[i].over_load = 0;
				t[i].over_lp = 0;
				t[i].rank = 0;
				t[i].sem_load = 0;
				t[i].department = "-";
				t[i].c_hour = 0;
				t[i].status = "-";
				t[i].stud_e = "-";
				t[i].t_course_n = "-";
			}
		}
	}

// exit 
	else if (button_1 == 'X' || button_1 == 'x')
	{
		for(int i = 0 ; i < counter ; i ++)
		{
			t_file << t[i].teacher_id << endl;
			t_file << t[i].first_name << endl;
			t_file << t[i].last_name << endl;
			t_file << t[i].sex << endl;	
			t_file << t[i].over_load << endl;
			t_file << t[i].over_lp << endl;
			t_file << t[i].rank << endl;
			t_file << t[i].sem_load << endl;
			t_file << t[i].department << endl;
			t_file << t[i].c_hour << endl;
			t_file << t[i].status << endl;
			t_file << t[i].stud_e << endl;
			t_file << t[i].teacher_id << endl;
			t_file << t[i].t_course_n << endl;
		}	
		num_0 = 1;
	}
	
	else 
	{
		cout << "invalid input" << endl;
	}
	
	
	}//end of while menu


cout << "Good bye: " <<endl;		


	return 0;
}








	
	
	


				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				






	
	
	

















