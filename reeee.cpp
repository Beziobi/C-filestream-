//redix sort 
#include <iostream>
using namespace std;
int max(int array[], int n)
{
	
}
void count_sort(int array_[], int n, int pos)
{
	int array_b[n];
	int count[10] = {0};
	int k = 9;
	for(int i = 0 ; i < n ; i++)
	{
		++count[(array[i]/pos)% 10];
	}
	for (int i = 1 ; i < k ; i++)
	{
		count[i] = count[i] + cout [i-1];
	}
	for (int i = n-1 ; i >= 0 ; i--)
	{
		array_b[--count[(array_[i]/pos)% 10]] = array_[i];
	}
	for (int i = 0 ; i < n ; i++ )
	{
		array_[i] = array_b[i];
	}
};
void redix_sort(int array_[], int n)
{
	max(array_[],n);
	for (int pos = 1 ; max/pos ; pos *= 10)
	{
		count_sort(array_,n,pos);
	}
	
}

int main ()
{
	
	
	
	
	return 0;
	
}
