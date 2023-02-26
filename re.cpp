#include <iostream>
using namespace std;

int main 
{
	int n;
	int k;
	cin >> n;
	cin >> k;
	int num_array[n];
	int num_count[k];
	int sorted_array[n];
	
	// count the reptaion of single elements inside num_array
	for (int i = 0 ; i < n ; i++)
	{
		num_count[num_array[i]] ++ ;
	}
	
	// updata num_count 
	for (int i = 1 ; i < k ; i++)
	{
		num_count[i] = num_count [i] = num_count [i-1];
	}
	// sorted 
	for (int i = n-1 ; i >= 0 ; i -- )
	{
		sorted_array[ --num_count[num_array[i] ] ] = num_array[i];
	}
	
	return 0;
}
