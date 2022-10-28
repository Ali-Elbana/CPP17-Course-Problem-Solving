#include<iostream>

using namespace std;


int max( int num1, int num2 ) ;


int main(void) 
{
	
	system( "cls" ) ;
	
	int Size, cntr = 0, sum = 0 ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size] ;

	if( Size <= 1000 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index < Size; index++ )
		{
			cin>>Array[index] ;
			
			if( Array[index] == 0 )
			{
				cntr++ ;
				
				sum = max( sum, cntr ) ;
			}
			
			else if( Array[index] == 1 )
			{
				cntr = 0 ;
			}
			
		}
     
		cout<<endl <<"The longest subarray of zero sum is: " <<sum <<endl ;
	 
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}


int max( int num1, int num2 )
{
	return ( num1 > num2 ) ? num1 : num2 ;
}

