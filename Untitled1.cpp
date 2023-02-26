#include <iostream>
using namespace std;

void selection_sort(int list[] , int n )
{
	int i,j, smallest ;
	int temp = 0;
	for ( i=0; i<n ; i++ )
	{
		smallest= 1;
		for (j=i+1;j<n;j++)
		{
			if (list[j]<list[smallest])
			smallest = j;
			
		}
		temp = list [smallest];
		list[smallest] = list[i];
		list[i]= temp;
		
	}
	int min = list[0];
	int max = list[n-1];
	cout << "min = " << min << " max = " << max <<endl;
}






int main ()
{

int no;

cin >> no;

int num[no];
for (int i = 0 ; i < no ; i ++ )
{
	cin >> num[i];
}
cout << num[7];
selection_sort(num , no);
cout << num[8];
 


	 
	return 0;
}
