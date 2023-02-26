#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// structure 
struct emp
{
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
	
	int length_l;
	int length_f;
	int length_e;		
};


// date calculater 

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
    
  
	int full_length_f;
	int full_length_l;
    int full_length_e;


// file stream 
fstream t_file ;// creating an object 
t_file.open("teacher.txt",ios::out);
t_file.close();
fstream t_cfile;
t_cfile.open("teacher_c.txt",ios::out);






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
				s_size = s_size + 1;
				t_cfile << s_size << endl;
			
				for (int i = 0 ; i < s_size ; i++)
				{
					if (i == (s_size - 1))
					{	
						cout << "Enter Id : " <<endl;
						cin >> e[i].emp_id;
						e[i].length_e = e[i].emp_id.length();
						
						// saved file of emp id 
						t_file << e[i].emp_id << endl;

						
						
						// first name 
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
     					
     					// saved file of first name  
						t_file << e[i].first_name << endl;
						
						
						
     					e[i].length_f = e[i].first_name.length();				
				
						// last name 
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
     					
     					
     					
     					// saved file of last name 
     					t_file << e[i].last_name << endl;
     					
     					
     					
     					
     					e[i].length_l = e[i].last_name.length();
     					
     					     					
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
						
						
						// saved file of sex
						t_file << e[i].sex << endl;
						
						
						
						
						//Basic salary
						cout << "Enter Basic Salary: " <<endl;
						while(!(cin >> e[i].basic_salary))
						{
							cout << "invalid input!" <<endl;
							cout << "pls enter a number again" <<endl;
							cin.clear();
							cin.ignore(123,'\n');
						}
						
						// saved file of basix salary 
						t_file << e[i].basic_salary << endl;
						
					
						
						// Birth date
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
						
						
						// saved file of birth date 
						t_file << e[i].date_birth << endl;
						
						
						
						
						//retirment 
						e[i].ret_age = date_calc(date_t, e[i].date_birth);
						
						if (e[i].ret_age > 65)
						{
							e[i].ret = "Retired        ";
						}
						else 
						{
							e[i].ret = "Still working  ";
						}
						
						// saved file retirment   
						t_file << e[i].ret << endl;
						
						
						
						
						// Employment date
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
						
						// saved file of employment date  
						t_file << e[i].date_e << endl;
						
						
						
						
						
						// exprieance
						e[i].exp = date_calc(date_t, e[i].date_e);
	
						// saved file of exprieance 
						t_file << e[i].exp << endl;
	
	
	
	
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
								e[i].edu_rank = "Diploma             ";	
							
								num_02 = 1;
							
							}
							else if(button_9 == 'B' || button_9 == 'b')
							{
								e[i].edu_rank = "Bachelor Degree     ";	
						
								num_02 = 1;
							
							}
							else if(button_9 == 'M' || button_9 == 'm')
							{
								e[i].edu_rank = "Masters             ";	
						
								num_02 = 1;	
							
							}
							else 
							{
								cout << "invalid input" <<endl;
								num_02 = 0;	
							}
						}
						// saved file of education rank  
						t_file << e[i].edu_rank << endl;
						
						
						
											
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
	}

































	
	
	
	
	
	
	
	
	return 0;
}
