#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	int Size, index = 0 ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size], Freq[200] = { 0 } ;

	if( Size <= 200 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			cin>>Array[index] ;
			
			Array[index] += 10 ; // shift all of them to the positive zone.
			
			Freq[Array[index]]++ ;
		}
		
		int max_index = 0 ;
		
		for( index = 0; index < 200; index++ )
		{
			
			if( Freq[max_index] < Freq[index] )
			{
				max_index = index ;
			}
			
		}
		
		
		
		cout<<endl <<"Most frequent number is: " <<max_index-10 <<" has repeated " <<Freq[max_index] 
			<<" times" <<endl ;
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}
