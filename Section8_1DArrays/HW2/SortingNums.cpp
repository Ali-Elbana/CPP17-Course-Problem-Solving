#include<iostream>
using namespace std;


int main(void) 
{
	
	int Size, temp ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size] ;
	
	if( Size <= 900 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			cin>>Array[index] ;
		}
		
		for( int i = 0; i < Size-1; i++ )
		{
			for( int j = 0; j < (Size-1-i); j++ )
			{
				if( Array[j] > Array[j+1] )
				{
					
					temp 		= Array[j] 	 ;
					
					Array[j] 	= Array[j+1] ;
					
					Array[j+1] 	= temp 		 ;
				}
			}
		}
		
		cout<<endl <<"The sorted array: " ;
		for( int index = 0; index < Size; index++ )
		{
			cout<<Array[index] <<' ' ;
		} 
      
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0;
}

