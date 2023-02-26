#include <iostream>
#include <string>
using namespace std;

int add (int a , int b )
{
	int sum = a + b ;
	string a1 = "nahom";
	
	return sum ;
}

int main ()
{
	
	
	int num1 = 1;
	int num2 = 2;
	int num3 = 1;
	int num4 = 7; 
	
	cout << add (num1 , num2) << endl;
	
	cout << add (num3 , num4) <<endl;
	
	return 0;
}

