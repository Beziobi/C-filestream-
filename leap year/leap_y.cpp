#include <iostream>
#include <iostream>
using namespace std;


int main()
{
// day
  int day;
// month 
  int month;
// year
  int year;
// last two number on year
  int year_0; // last two 
// 
  int num_0 = 0;
  int num_1 = 0;
// ger string from the user 
  string date; // input
// change the string to int 
  int c[10]; 
// y if leap year n if not 
  char leap_y ;

  while (num_1 == 0)
  {
  cout << "Enter Date in form of dd/mm/yyyy: " <<endl;
  cin >> date;
  
  
      while (num_0 == 0)
      {
        if (date.length() > 10 || date.length() < 10)
        {
          cout << "invalid input: " << endl;
          cout << "Enter Date in form of dd/mm/yyyy: " <<endl;
          cin >> date;
        }
        else 
        {
          num_0 = 1;
        }
      }  
    
      for (int i = 0 ; i < date.length() ; i++)
      {
        c[i] = date.at(i);
        if (!(( c[i] >= '0' && c[i] <= '9' ) || (c[i] == '/')))
        {
          i = 0;
          cout << "invalid input: " <<endl;
          cout << "Enter Date in form of dd/mm/yyyy: " <<endl;
          cin >> date;
      
          num_0 = 0;
        } //end of if
      }// end of for 
    
// to change string to int - 48 from 1 char 
      c[0] -= 48;
      c[1] -= 48;
      c[3] -= 48;
      c[4] -= 48;
      c[6] -= 48;
      c[7] -= 48;
      c[8] -= 48;
      c[9] -= 48;
      
// chacke the if there is something wrong with the date        
      if (c[0] != '/' && c[1] != '/' && c[2] == '/' && c[3] != '/' && c[4] != '/' && c[5] == '/' && c[6] != '/' && c[7] != '/' && c[8] != '/' && c[9] != '/'  )
      {
      	// store char[0] and char[1] in day 
        // day
        day = c[0];
        day *= 10;
        day += c[1];
        // store char[3] and char[3] in month  
        // month 
        month = c[3];  
        month *= 10;
        month += c[4];
          
        // store char[6],[7],[8] and char[9] in year
        year = c[6];
        for (int i = 7; i < 10 ; i++ )
        {
          year *= 10;
          year += c[i];
        }
        // store char[8] and char[9] in year_0 
        // year last two
        year_0 = c[8];
        year_0 *= 10;
        year_0 += c[9];
        
        // 
        if (year % 4 == 0) 
   		{
    	    if (year % 100 == 0)
    		{
    	    	if (year % 400 == 0)
    	        {
      
    	        	leap_y = 'y';
    			}
            	else
               	{
          			leap_y = 'n';      
        		
				}
          
   		   }
        	else
        	{
        		leap_y = 'y';
     		}
   	 	}
        else 
        {
           leap_y = 'n';
    	}
         
        
          
        if(month < 13 && month > 0)
        {
          if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
          {
            if(day <= 31 && day >= 1)
            {
              if (leap_y == 'y')
              {
                cout << " leap year " <<endl;
                for (int i = 0; i <20 ; i++)
                {
                  cout << year << " , ";
                  year = year+ 4;
                  
                }
                cout << "Good byy " <<endl;


num_1 = 1;
              }
              else if (leap_y == 'n')
              {
                cout << date << " valid date but not leap year" << endl; 
              }
          
            }
            else 
            {
              cout << date << " invalid day " << endl;
                
            }
          }
          else if (month == 2)
          {
            
			if(day <= 29 && day >= 1)
            {
              if (leap_y == 'y')
              {
                cout << date << " leap year " <<endl;
                for (int i = 0; i <20 ; i++)
                {
                	cout << year << " , ";
                  	year = year + 4;
                }
                cout << "Good byy " <<endl;
                num_1 = 1;
              }
              else if (leap_y == 'n')
               {
               		if (day = 29 )
					{
            			cout << "invalid day of the month " << endl;
              		
					}
					else 
					{
						cout << "valid date but not leap year" << endl;
					}
            	}
            }
            else 
            {
              cout << date << " invalid day " <<endl;
            }
          }
          else if (month == 4 || month == 6 || month == 9|| month == 11)
          {
            if (day <= 30 && day >= 1)
            {
              if (leap_y == 'y')
              {
                cout << "leap year " ;
                for (int i = 0; i <20 ; i++)
                {
                  cout << year << " , ";
                  year = year+ 4;
                  
                }
                cout << "Good byy! " <<endl;
                num_1 = 1;
              }
              else if (leap_y == 'n')
              {
                cout << date << " valid date but not leap year" << endl; 
              }
              
            }
            else 
            {
              cout << "invalid day " <<endl;
            }
          }
        }
        else 
        {
          cout << date << " invalid month " <<endl;
        }
      }
      else 
      {
        cout << "invalid date " <<endl;
      }
  
  }
                
  return 0;
}
