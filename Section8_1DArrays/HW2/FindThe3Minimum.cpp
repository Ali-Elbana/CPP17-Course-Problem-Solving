#include<iostream>
using namespace std;


int main(void) 
{
	
	int Size, temp ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size], SubArray[Size] ;
	
	if( Size < 200 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			cin>>Array[index] ;
			
			SubArray[index] = Array[index] ;
		}
		
		for( int i = 0; i < Size-1; i++ )
		{
			for( int j = 0; j < (Size-1-i); j++ )
			{
				if( SubArray[j] > SubArray[j+1] )
				{
					
					temp 			= SubArray[j] 	;
					
					SubArray[j] 	= SubArray[j+1] ;
					
					SubArray[j+1] 	= temp 			;
				}
			}
		}
		
		cout<<endl <<"The modified array: " ;
		for( int index = 0; index < 3; index++ )
		{
			cout<<SubArray[index] <<' ' ;
		} 
      
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0;
}

