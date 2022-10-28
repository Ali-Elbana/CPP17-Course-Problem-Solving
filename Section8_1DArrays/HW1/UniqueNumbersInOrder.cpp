#include<iostream>

using namespace std;


int main(void) 
{
	
	int Size ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size] ;

	if( Size < 1000 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			cin>>Array[index] ;
		}
		
		for( int index = 0; index <= Size - 1; index++ )
		{
			
			for( int index1 = index + 1; Array[index1] <= Array[index]; index1++ )
			{
				if( Array[index1] == Array[index] )
				{
					Array[index1] = -1 ;
					
				}
			}
			
		}
		
		cout<<endl <<"The modified array: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			
			if( Array[index] > 0 )
			{
		
				cout<<Array[index] <<' ' ;
				
			}
		 
		} 
     	
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
}




// Another solution 


/* int main() {
	int arr[999];	// < 1000 = 999 elements

	int n;   // assume n > 0
	cin >> n;

	// Let's do it first with an array
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// As the list is sorted, it is enough to check if an element as same as the previous or not
	// if equal, then duplicate. If not, then it is the first of its value!
	// Always make use of the given information :)
	cout<<arr[0]<<" ";
	for (int i = 1; i < n; i++) {
		assert(arr[i] >= arr[i-1]);  // make sure input is ordered

		if (arr[i] != arr[i-1])
			cout << arr[i]<<" ";
	}
	return 0;
}
 */