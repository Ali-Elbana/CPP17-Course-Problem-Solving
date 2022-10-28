#include<iostream>

using namespace std;


int max( int num1, int num2 ) ;


int main(void) 
{
	
	system( "cls" ) ;
	
	int n ;

	cout<<endl <<"Enter the array size: " ;
	cin>>n ;

	int arr[n] ;

	if( n <= 1000 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index < n; index++ )
		{
			cin>>arr[index] ;
		}
		
     	int sum = 0 ;
	
		int maxsize = -1, startindex ;
	
		// Pick a starting point as i
		for (int i = 0; i < n - 1; i++) 
		{
			
			sum = (arr[i] == 0) ? -1 : 1 ;
	
			// Consider all subarrays starting from i
			for( int j = i + 1; j < n; j++ ) 
			{
				
				(arr[j] == 0) ? (sum += -1) : (sum += 1) ;
	
				// If this is a 0 sum subarray, then
				// compare it with maximum size subarray
				// calculated so far
				
				if( (sum == 0) && (maxsize < j - i + 1) ) 
				{
					maxsize = j - i + 1 ;
					
					//startindex = i ;
				}
			}
		}
		
		if( maxsize == -1 )
		{
			cout << "No such subarray" ;	
		}
		
		else
		{
			cout<<endl <<"The longest subarray is: "  <<maxsize <<endl ;
		}
		
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}





