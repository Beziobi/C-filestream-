#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// structure 
struct emp
{
	// employee name id sex salary 
	string emp_id;
	string last_name;
	string first_name;
	string sex;
	double basic_salary;
	// date
	string date_birth;	
	string date_e;
	string edu_rank;
	// services to compute
	int rankBsalary;
	int exp;
	int ret_age;
	string ret;
	

};


// age and exprieance calculater 
int date_calc(string d , string d_2)
{
int day,month, year;
int day_1, month_1, year_1;
string date;
string date_1;
int c[10];
int calc_date;	

date = d;
date_1 = d_2;
	
// d_1		
	for (int i = 0 ; i < date.length() ; i++)
    {
       	c[i] = date.at(i);  	
    } 
	c[0] -= 48;
    c[1] -= 48;
   	c[3] -= 48;
    c[4] -= 48;
    c[6] -= 48;
   	c[7] -= 48;
	c[8] -= 48;
    c[9] -= 48;	
	
	//day
	day = c[0];
    day *= 10;
	day += c[1];
          
   	// month 
   	month = c[3];  
    month *= 10;
    month += c[4];
    	      
    // year 
    year = c[6];
    for (int i = 7; i < 10 ; i++ )
    {
      year *= 10;
   	  year += c[i];
    
	}
// d_2
	for (int i = 0 ; i < date_1.length() ; i++)
    {
       	c[i] = date_1.at(i);   	
    } 
	c[0] -= 48;
    c[1] -= 48;
   	c[3] -= 48;
    c[4] -= 48;
    c[6] -= 48;
   	c[7] -= 48;
	c[8] -= 48;
    c[9] -= 48;	
	
	//day 
	day_1 = c[0];
    day_1 *= 10;
	day_1 += c[1];
          
   	// month 
   	month_1 = c[3];  
    month_1 *= 10;
    month_1 += c[4];
    	      
    // year 
    year_1 = c[6];
    for (int i = 7; i < 10 ; i++ )
    {
      year_1 *= 10;
   	  year_1 += c[i];
    
	}
calc_date = year - year_1;		

return calc_date;		
}


// date 
int date_0(string d)
{
int day,month, year;
int year_0;
int num_0 = 0;
int num_1 = 0;
string date;
int c[10];

int num_c; 	
	
	date = d;
	
	if (date.length() > 10 || date.length() < 10)
    {
   		num_c = 1;
    }
    else 
    {
    	for (int i = 0 ; i < date.length() ; i++)
      	{
        	c[i] = date.at(i);
        	
        } 
        
        if (!(( c[0] >= '0' && c[0] <= '9' ) || (c[0] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[1] >= '0' && c[1] <= '9' ) || (c[1] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[2] >= '0' && c[1] <= '9' ) || (c[2] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[3] >= '0' && c[3] <= '9' ) || (c[3] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[4] >= '0' && c[4] <= '9' ) || (c[4] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[5] >= '0' && c[5] <= '9' ) || (c[5] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[6] >= '0' && c[6] <= '9' ) || (c[6] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[7] >= '0' && c[7] <= '9' ) || (c[7] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[8] >= '0' && c[8] <= '9' ) || (c[8] == '/')))
        	{	
       			num_c = 1;	
          	}
        else if (!(( c[9] >= '0' && c[9] <= '9' ) || (c[9] == '/')))
        	{	
       			num_c = 1;	
          	}
          	
      	else 
      	{
      		
			c[0] -= 48;
      		c[1] -= 48;
      		c[3] -= 48;
      		c[4] -= 48;
      		c[6] -= 48;
   	        c[7] -= 48;
	      	c[8] -= 48;
     		c[9] -= 48;	
		
		
			if (c[0] != '/' && c[1] != '/' && c[2] == '/' && c[3] != '/' && c[4] != '/' && c[5] == '/' && c[6] != '/' && c[7] != '/' && c[8] != '/' && c[9] != '/'  )
			{
				// day
    		    day = c[0];
    		    day *= 10;
        	    day += c[1];
          
   			    // month 
   			    month = c[3];  
    		    month *= 10;
    		    month += c[4];
    	      
    		    // year 
    		    year = c[6];
    		    for (int i = 7; i < 10 ; i++ )
    	    	{
    	    	  year *= 10;
    	    	  year += c[i];
    	    	}
    	    	// year last two
    	    	year_0 = c[8];
    	    	year_0 *= 10;
    	   		year_0 += c[9];
			
				if(month < 13 && month > 0)
    		    {
    		    	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    		    	{
    		        	if(day <= 31 && day >= 1)
    		        	{
        					num_c = 0;
    		        	}
    		        	else 
    		        	{
    		        		num_c = 1;
						}
                
					}
					else if (month == 2)
					{
						if (day <= 28 && day >= 1)
						{
							num_c = 0;
						}
						else 
						{
							num_c = 1;
						}
					}
					else if (month == 4 || month == 6 || month == 9|| month == 11)
        			{
        		    	if (day <= 30 && day >= 1)
        		    	{
        		    		num_c = 0;
        		    	}
        		    	else 
        	    		{
							num_c = 1;
						}
				
					}
				}
				else 
				{
					num_c = 1;
				}
			}
			else 
			{
				num_c = 1;		
			}
		}
	}
	return num_c;
}





int main ()
{
// date 	
string date_t;
int num_01 = 0;
int C;
cout << "Enter the date" <<endl;
while(num_01 == 0)
{
	cin >> date_t;
	C =	date_0(date_t);
	if (C == 1)
	{
		cout << "invalid input enter date in form of dd/mm/yyyy" <<endl;
	}
	else 
	{
		num_01 = 1;
	}
}

// int main diclaration 
int s_size = 0;
	emp e[1000];
			
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
    double temp_4;
    string temp_5;
    string temp_6;
    string temp_7;
    int temp_8;
    string temp_9;
    int temp_10;
    int temp_11;
    int temp_12;
    
  	// table display
	int full_length_f;
	int full_length_l;
    int full_length_e;
    int full_length_r;
    int full_length_ret;


	
// counter 
ifstream t_ccfile ;
t_ccfile.open("employee_counter.txt");

int counter; 
t_ccfile >> counter ;
cout << counter <<endl;


// teacher file
ifstream t_tfile;
t_tfile.open("employee_file.txt");



for (int i = 0 ; i < counter ; i++)
{
	
	cout << "i = " << i << endl;
	
	t_tfile >> e[i].emp_id;
	t_tfile >> e[i].first_name;
	t_tfile >> e[i].last_name;
	t_tfile >> e[i].sex;
	t_tfile >> e[i].basic_salary;
	t_tfile >> e[i].date_birth;
	t_tfile >> e[i].ret , 15;
	t_tfile >> e[i].date_e;
	t_tfile >> e[i].exp;	
	t_tfile >> e[i].edu_rank;

}


//fstream
fstream t_filee;
t_filee.open("employee_file.txt",std::ios::out);

// file stream 
ofstream t_file ;	
t_file.open("employee_file.txt",std::ios::app);


while(num_0 == 0)	
	{
		cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;
		cout << "| ------------------------------------------------------------------|" <<endl;    
		cout << "| - press I  to add data                                           -|" <<endl;   
		cout << "| - press E  to edit data                                          -|" <<endl;
		cout << "| - press D  to diplay the table data                              -|" <<endl;
		cout << "| - press S  to search for a record uisng various value            -|" <<endl;   
		cout << "| - press Z  to sort your table                                    -|" <<endl;
		cout << "| - press R  to see rank table                                     -|" <<endl;
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
				t_filec.open("employee_counter.txt",std::ios::out);
				// new employee
				counter = counter + 1;
				
				// ofstream
				ofstream t_cfile ;	
				t_cfile.open("employee_counter.txt",std::ios::app);
				// add one employee in teacher_counter 
				t_cfile << counter << endl;

				// get new employee data			
				for (int i = 0 ; i < counter ; i++)
				{
					if (i == (counter - 1))
					{	
						// get employee id
						cout << "Enter Id : " <<endl;
						cin >> e[i].emp_id;
						 
						
						// get first name 
						cout << "Enter First Name: " <<endl;
						cin >> e[i].first_name;
    					for (int j = 0; j < e[i].first_name.length(); j++) 
						{

    	   					c = e[i].first_name.at(j);// Get a char from string
        					if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) 
							{
								cout << "invalid inpute Error!" << endl;
            				
								cout<< "Enter First Name: " <<endl; 
								cin >> e[i].first_name;
								j = 0;	
        					}		
     					}
     									
						// get employee last name 
						cout << "Enter Last Name: " <<endl;
						cin >> e[i].last_name;
    					for (int j = 0; j < e[i].last_name.length(); j++) 
						{

    	   					c = e[i].last_name.at(j);// Get a char from string
        					if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) 
							{
								cout << "invalid inpute Error!" << endl;
            				
								cout<< "Enter Last Name: " <<endl; 
								cin >> e[i].last_name;
								j = 0;
        					}		
     					}
     					    					
						//get employee sex
						num_03 = 0;
						while (num_03 == 0)
						{
							cout << "Enter Sex: " <<endl;
							cout << "(F) For Female" <<endl;
							cout << "(M) For Male" <<endl;
						
							cin >> button_10;
							if(button_10 == 'F' || button_10 == 'f') 
							{
								e[i].sex = "F";
							
								num_03 = 1;
							
							}
							else if(button_10 == 'M' || button_10 == 'm')
							{
								e[i].sex = "M";
						
								num_03 = 1;
							
							}
							
							else 
							{
								cout << "invalid input" <<endl;
								num_03 = 0;	
							}
						}
						
						//get employee Basic salary
						cout << "Enter Basic Salary: " <<endl;
						while(!(cin >> e[i].basic_salary))
						{
							cout << "invalid input!" <<endl;
							cout << "pls enter a number again" <<endl;
							cin.clear();
							cin.ignore(123,'\n');
						}
						
						//get employee Birth date
						num_01 = 0;
						cout << "Enter your Birth Date" <<endl;
						while(num_01 == 0)
						{
							cin >> e[i].date_birth;
							C =	date_0(e[i].date_birth);
							if (C == 1)
							{
								cout << "invalid input enter date in form of dd/mm/yyyy" <<endl;
							}
							else 
							{
								
								num_01 = 1;
							}
						}
						
						//calculate employee retirment age 
						e[i].ret_age = date_calc(date_t, e[i].date_birth);
						
						if (e[i].ret_age > 65)
						{
							e[i].ret = "Retired";
						}
						else 
						{
							e[i].ret = "working";
						}
		
						//get employee Employment date
						num_01 = 0;
						cout << "Enter your Employment  Date" <<endl;
						while(num_01 == 0)
						{
							cin >> e[i].date_e;
							C =	date_0(e[i].date_e);
							if (C == 1)
							{
								cout << "invalid input enter date in form of dd/mm/yyyy" <<endl;
							}
							else 
							{
								
								num_01 = 1;
							}
						}
					
						// exprieance
						e[i].exp = date_calc(date_t, e[i].date_e);
	
						// Education Rank
						num_02 = 0;
						while (num_02 == 0)
						{
							cout << "Enter Education Rank: " <<endl;
							cout << "D for Dipl"<< endl;
							cout << "B for Bsc" << endl;
							cout << "M for Mcs" << endl;
							cin >> button_9;
							if(button_9 == 'D' || button_9 == 'd') 
							{
								e[i].edu_rank = "Diploma";	
							
								num_02 = 1;
							
							}
							else if(button_9 == 'B' || button_9 == 'b')
							{
								e[i].edu_rank = "Bachelor Degree";	
						
								num_02 = 1;
							
							}
							else if(button_9 == 'M' || button_9 == 'm')
							{
								e[i].edu_rank = "Masters";	
						
								num_02 = 1;	
							
							}
							else 
							{
								cout << "invalid input" <<endl;
								num_02 = 0;	
							}						
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
								t_file << e[i].emp_id << endl;
								t_file << e[i].first_name << endl;
								t_file << e[i].last_name << endl;
								t_file << e[i].sex << endl;
								t_file << e[i].basic_salary << endl;
								t_file << e[i].date_birth << endl;
								t_file << e[i].ret << endl;
								t_file << e[i].date_e << endl;
								t_file << e[i].exp << endl;
								t_file << e[i].edu_rank << endl;
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
	// display table 	
		else if (button_1 == 'D' || button_1 == 'd')
		{
			// attributes 
			cout << " _________________________________________________________________________________________________________________________________________________________" << endl;
			cout << "|Employee id         |First Name          |Last Name           |sex |Birth Date|Education Rank      |Retirement          |Experience |Basic Salary        |" << endl;
			cout << "|---------------------------------------------------------------------------------------------------------------------------------------------------------| " << endl; 

				
			
			for (int i = 0 ; i < counter ; i++)
			{			
				// Configure line of the table and print record on the table 
				full_length_e = 20 - e[i].emp_id.length();
				full_length_f = 20 - e[i].first_name.length();
				full_length_l = 20 - e[i].last_name.length();
				full_length_r = 20 - e[i].edu_rank.length();
				full_length_ret = 20 - e[i].ret.length();
			
				cout << "|";
				cout << e[i].emp_id;
				for (int i = 0 ; i < full_length_e ; i++)
				{
					cout<< " ";
				}
				cout << "|" ;
				cout << e[i].first_name;
				for (int i = 0 ; i < full_length_f ; i++)
				{
					cout<< " ";
				}
				cout << "|" ;
				cout << e[i].last_name;
				for (int i = 0 ; i < full_length_l ; i++)
				{
				
					cout<< " ";
				}
				cout << "|" ;
				cout << e[i].sex;
				cout << "   |";
				cout << e[i].date_birth;
				cout << "|";
				cout << e[i].edu_rank;
				for (int i = 0; i < full_length_r ; i++)
				{
					cout << " ";
				}
				cout <<"|";
				
				cout << e[i].ret;
				for (int i = 0; i < full_length_ret  ; i++)
				{
					cout << " ";
				}
				cout << "|";
				cout << e[i].exp;
				cout << "          |";
				cout << e[i].basic_salary << endl;	
			
				cout << "|---------------------------------------------------------------------------------------------------------------------------------------------------------| " << endl; 
	
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
					t_file << e[i].emp_id << endl;
					t_file << e[i].first_name << endl;
					t_file << e[i].last_name << endl;
					t_file << e[i].sex << endl;
					t_file << e[i].basic_salary << endl;
					t_file << e[i].date_birth << endl;
					t_file << e[i].ret << endl;
					t_file << e[i].date_e << endl;
					t_file << e[i].exp << endl;
					t_file << e[i].edu_rank << endl;	
				}
				num_0 = 1;
				num_1 = 1;
			}
			else 
			{
				num_1 = 1;
			}		
		}// end of disp
		
		
// edit record
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
			cout << "| - If Date press (D)                                              -|" <<endl;   
			cout << "| - If Education Rank (E)                                          -|" <<endl;
			cout << "| ------------------------------------------------------------------|" <<endl;
			cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " <<endl;		
		
			cin >> button_3;
		
			if (button_3 == 'I' || button_3 == 'i')
			{
			
				cout << "Enter employee id: " <<endl;
			
				cin >> emp_id_1;
				
				for (int i = 0 ; i < counter; i++)
				{
					if (e[i].emp_id == emp_id_1)
					{	
						cout << "Enter new employee id" << endl;
						cin >> e[i].emp_id;
						
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
						if (e[i].emp_id == emp_id_1)
						{
							cout << "Enter First Name: " <<endl;
							//getline(cin,e[i].first_name);
							cin >> e[i].first_name;
	    					for (int j = 0; j < e[i].first_name.length(); j++) 
							{

    		   					c = e[i].first_name.at(j);// Get a char from string
        						if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) 
								{
									cout << "invalid inpute Error!" << endl;
            				
									cout<< "Enter First Name: " <<endl; 
									cin >> e[i].first_name;
									j = 0;
    	    					}		
     						}
						}
					}	
				}
		
				else if(button_4 == 'L' || button_4 == 'l')
				{
					cout << "Enter employee id: " <<endl;
			
					cin >> emp_id_1;
			
					for (int i = 0 ; i < s_size; i++)
					{
						if (e[i].emp_id == emp_id_1)
						{
							cout << "Enter Last Name: " <<endl;
							//getline(cin,e[i].last_name);
							cin >> e[i].last_name;
    						for (int j = 0; j < e[i].last_name.length(); j++) 
							{
	
    		   					c = e[i].last_name.at(j);// Get a char from string
  		      					if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) ) ) 
								{
									cout << "invalid inpute Error!" << endl;
            				
									cout<< "Enter Last Name: " <<endl; 
									cin >> e[i].last_name;
									j = 0;
	        					}		
    	 					}
						}
					}	
				}	
			}
		
			else if (button_3 == 'D' || button_3 == 'd')
			{
				
				
					cout << "Enter employee id: " <<endl;
			
					cin >> emp_id_1;
			
					for (int i = 0 ; i < s_size; i++)
					{	
						if (e[i].emp_id == emp_id_1)
						{
							cin >> e[i].date_birth;
						}
					}	
			}
			
			else if (button_3 == 'E' || button_3 == 'e')
			{
			
				cout << "Enter employee id: " <<endl;
			
				cin >> emp_id_1;
			
				for (int i = 0 ; i < s_size; i++)
				{
					if (e[i].emp_id == emp_id_1)
					{
						cin >> e[i].edu_rank;
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
					t_file << e[i].emp_id << endl;
					t_file << e[i].first_name << endl;
					t_file << e[i].last_name << endl;
					t_file << e[i].sex << endl;
					t_file << e[i].basic_salary << endl;
					t_file << e[i].date_birth << endl;
					t_file << e[i].ret << endl;
					t_file << e[i].date_e << endl;
					t_file << e[i].exp << endl;
					t_file << e[i].edu_rank << endl;
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
				cout << " ________________________________________________________________________________________________________________________" << endl;
				cout << "|Employee id         |First Name          |Last Name           |sex |Birth Date|Education Rank      |Basic Salary        |" << endl;
				cout << "|------------------------------------------------------------------------------------------------------------------------| " << endl; 				

				for (int i = 0 ; i < counter; i++)
				{
					if(e[i].emp_id == emp_id_2)
					{
						
						full_length_e = 20 - e[i].emp_id.length();
						full_length_f = 20 - e[i].first_name.length();
						full_length_l = 20 - e[i].last_name.length();
						full_length_r = 20 - e[i].edu_rank.length();
						full_length_ret = 20 - e[i].ret.length();
			
			
						cout << "|";
						cout << e[i].emp_id;
						for (int i = 0 ; i < full_length_e ; i++)
						{
							cout<< " ";
						}
						cout << "|" ;
			
			
			
						cout << e[i].first_name;
						for (int i = 0 ; i < full_length_f ; i++)
						{
							cout<< " ";
						}
						cout << "|" ;
				
						cout << e[i].last_name;
						for (int i = 0 ; i < full_length_l ; i++)
						{
				
							cout<< " ";
						}
						cout << "|" ;
						cout << e[i].sex;
						cout << "   |";
						cout << e[i].date_birth;
						cout << "|";
						cout << e[i].edu_rank;
						cout << "|";
						cout << e[i].basic_salary << endl;	
			
						cout << "|------------------------------------------------------------------------------------------------------------------------| " << endl; 				
					}
				}		
			}
			else if (button_7 == 'N' || button_7 == 'n')
			{
				cout <<"Enter First and Last Name: " << endl;
				cin >> fname_1;
				cin >> lname_1;
				
				
				
				cout << " ________________________________________________________________________________________________________________________" << endl;
				cout << "|Employee id         |First Name          |Last Name           |sex |Birth Date|Education Rank      |Basic Salary        |" << endl;
				cout << "|------------------------------------------------------------------------------------------------------------------------| " << endl; 				
			
				
				
				
				
				for (int i = 0 ; i < counter ; i++)
				{
					if(e[i].first_name == fname_1 && e[i].last_name == lname_1)
					{
						full_length_e = 20 - e[i].emp_id.length();
						full_length_f = 20 - e[i].first_name.length();
						full_length_l = 20 - e[i].last_name.length();
						full_length_r = 20 - e[i].edu_rank.length();
						full_length_ret = 20 - e[i].ret.length();
			
						cout << "|";
						cout << e[i].emp_id;
						for (int i = 0 ; i < full_length_e ; i++)
						{
							cout<< " ";
						}
						cout << "|" ;
			
			
			
						cout << e[i].first_name;
						for (int i = 0 ; i < full_length_f ; i++)
						{
							cout<< " ";
						}
						cout << "|" ;
				
						cout << e[i].last_name;
						for (int i = 0 ; i < full_length_l ; i++)
						{
				
							cout<< " ";
						}
						cout << "|" ;
						cout << e[i].sex;
						cout << "   |";
						cout << e[i].date_birth;
						cout << "|";
						cout << e[i].edu_rank;
						for (int i = 0; i < full_length_r ; i++)
						{
							cout << " ";
						}
						cout <<"|";
			
						cout << e[i].basic_salary << endl;	
			
						cout << "|------------------------------------------------------------------------------------------------------------------------| " << endl; 				
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
					t_file << e[i].emp_id << endl;
					t_file << e[i].first_name << endl;
					t_file << e[i].last_name << endl;
					t_file << e[i].sex << endl;
					t_file << e[i].basic_salary << endl;
					t_file << e[i].date_birth << endl;
					t_file << e[i].ret << endl;
					t_file << e[i].date_e << endl;
					t_file << e[i].exp << endl;
					t_file << e[i].edu_rank << endl;	
				
	
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
		d_ = e[i].first_name.at(0);	
			for(int j = i+1 ; j < counter ; j++)
			{
				e_ = e[j].first_name.at(0);
				if(d_>e_)
				{
					temp_0 = e[i].emp_id;
					e[i].emp_id = e[j].emp_id;
					e[j].emp_id = temp_0;
					
					temp_1 = e[i].first_name;
					e[i].first_name = e[j].first_name;
					e[j].first_name = temp_1;
					
					temp_2 = e[i].last_name;
					e[i].last_name = e[j].last_name;
					e[j].last_name = temp_2;
					
					temp_3 = e[i].sex;
					e[i].sex = e[j].sex;
					e[j].sex = temp_3;
					
					temp_4 = e[i].basic_salary;
					e[i].basic_salary = e[j].basic_salary;
					e[j].basic_salary = temp_4;
					
					temp_5 = e[i].date_birth;
					e[i].date_birth = e[j].date_birth;
					e[j].date_birth = temp_5;
					
					temp_6 = e[i].date_e;
					e[i].date_e = e[j].date_e;
					e[j].date_e = temp_6;
					
					temp_7 = e[i].edu_rank;
					e[i].edu_rank = e[j].edu_rank;
					e[j].edu_rank = temp_7;	
					
					temp_8 = e[i].exp;
					e[i].exp = e[j].exp;
					e[j].exp = temp_8;
					
					temp_9 = e[i].ret;
					e[i].ret = e[j].ret;
					e[j].ret = temp_9;
					
					temp_10 = e[i].ret_age;
					e[i].ret_age = e[j].ret_age;
					e[j].ret_age = temp_10;	
				}
			}
		}
		cout << "Sort Complete " << endl;
	}
	
// rank
	else if (button_1 == 'R' || button_1 == 'r')
	{
		for(int i = 0 ; i < counter ; i++)
		{	
		
			for(int j = i+1 ; j < counter ; j++)
			{
			
				if(e[i].basic_salary < e[j].basic_salary)
				{
					temp_0 = e[i].emp_id;
					e[i].emp_id = e[j].emp_id;
					e[j].emp_id = temp_0;
					
					temp_1 = e[i].first_name;
					e[i].first_name = e[j].first_name;
					e[j].first_name = temp_1;
					
					temp_2 = e[i].last_name;
					e[i].last_name = e[j].last_name;
					e[j].last_name = temp_2;
					
					temp_3 = e[i].sex;
					e[i].sex = e[j].sex;
					e[j].sex = temp_3;
					
					temp_4 = e[i].basic_salary;
					e[i].basic_salary = e[j].basic_salary;
					e[j].basic_salary = temp_4;
					
					temp_5 = e[i].date_birth;
					e[i].date_birth = e[j].date_birth;
					e[j].date_birth = temp_5;
					
					temp_6 = e[i].date_e;
					e[i].date_e = e[j].date_e;
					e[j].date_e = temp_6;
					
					temp_7 = e[i].edu_rank;
					e[i].edu_rank = e[j].edu_rank;
					e[j].edu_rank = temp_7;	
					
					temp_8 = e[i].exp;
					e[i].exp = e[j].exp;
					e[j].exp = temp_8;
					
					temp_9 = e[i].ret;
					e[i].ret = e[j].ret;
					e[j].ret = temp_9;
					
					temp_10 = e[i].ret_age;
					e[i].ret_age = e[j].ret_age;
					e[j].ret_age = temp_10;
							
				}
			}
		}
		for (int i = 0; i < counter ; i++)
		{
			e[i].rankBsalary = i+1;
		}
		

			cout << " __________________________________________________________________________________________________________________________________________" << endl;
			cout << "|Employee id         |First Name          |Last Name           |sex |Birth Date|Education Rank      |Rank based on salaray|Basic Salary    |" << endl;
			cout << "|------------------------------------------------------------------------------------------------------------------------------------------| " << endl; 				

		for (int i = 0; i < counter ; i++)
		{
		
			full_length_e = 20 - e[i].emp_id.length();
			full_length_f = 20 - e[i].first_name.length();
			full_length_l = 20 - e[i].last_name.length();
			full_length_r = 20 - e[i].edu_rank.length();
			full_length_ret = 20 - e[i].ret.length();
			
			cout << "|";
			cout << e[i].emp_id;
			for (int i = 0 ; i < full_length_e ; i++)
			{
				cout<< " ";
			}
				cout << "|" ;
		
			cout << e[i].first_name;
			for (int i = 0 ; i < full_length_f ; i++)
			{
				cout<< " ";
			}
			cout << "|" ;
				
			cout << e[i].last_name;
			for (int i = 0 ; i < full_length_l ; i++)
			{
				cout<< " ";
			}
			cout << "|" ;
			cout << e[i].sex;
			cout << "   |";
			cout << e[i].date_birth;
			cout << "|";
			cout << e[i].edu_rank;
			for (int i = 0; i < full_length_r ; i++)
				{
					cout << " ";
				}
				cout <<"|";
				
			cout << e[i].rankBsalary;
			cout << "                    |";
			cout << e[i].basic_salary << endl;	
			
			cout << "|------------------------------------------------------------------------------------------------------------------------------------------| " << endl; 				
		}
		cout << "press E to exit: " <<endl;
		cout << "or any other key to open menu: " <<endl;
		cin >> button_8;
		
	    if (button_8 == 'E' || button_8 == 'e')
		{
			for(int i = 0 ; i < counter ; i ++)
			{
				t_file << e[i].emp_id << endl;
				t_file << e[i].first_name << endl;
				t_file << e[i].last_name << endl;
				t_file << e[i].sex << endl;
				t_file << e[i].basic_salary << endl;
				t_file << e[i].date_birth << endl;
				t_file << e[i].ret << endl;
				t_file << e[i].date_e << endl;
				t_file << e[i].exp << endl;
				t_file << e[i].edu_rank << endl;
			
		
			}

			num_0 = 1;
			num_3 = 1;
		}
		else 
		{
			num_0 = 0;
		}	
	}
	
	
// exit 
	else if (button_1 == 'X' || button_1 == 'x')
	{
		for(int i = 0 ; i < counter ; i ++)
		{
			t_file << e[i].emp_id << endl;
			t_file << e[i].first_name << endl;
			t_file << e[i].last_name << endl;
			t_file << e[i].sex << endl;
			t_file << e[i].basic_salary << endl;
			t_file << e[i].date_birth << endl;
			t_file << e[i].ret << endl;
			t_file << e[i].date_e << endl;
			t_file << e[i].exp << endl;
			t_file << e[i].edu_rank << endl;
		
		}


		num_0 = 1;
	}
	
	else 
	{
		cout << "invalid input" << endl;
	}
	
	



		


	
	}
	cout << "Good by: " <<endl;		

	
	
	return 0;
}
