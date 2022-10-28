#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	int Size, cntr = 0, sum = 0 ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size], Freq[200] = { 0 } ;

	if( Size <= 200 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index < Size; index++ )
		{
			cin>>Array[index] ;
		}
		
		
		int indexBefore = Array[0] ;
		
		for( int index = 1; index < Size; index++ )
		{
			
			if( Array[index] > indexBefore )
			{
				cntr++ ;
			}
			
			indexBefore = Array[index] ;
			
		}
		
		sum = Size ;
		
		if( cntr == (Size / 2) )
		{
			
			if( Array[Size/2] < Array[(Size/2) - 1] )
			{
				sum-- ;
			}
		}
		
		for( cntr; cntr >= 0; cntr-- )
		{
			sum += cntr ;
		}
		
		
		cout<<endl <<"The number of the increasing subarrays is: " <<sum <<endl ;
     
     
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}
