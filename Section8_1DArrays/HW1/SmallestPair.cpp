#include<iostream>

using namespace std;


int main(void) 
{
	
	int Size, index = 1, index1 = 2 ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size] ;

	if( Size <= 200 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			cin>>Array[index] ;
		}
		
		int min = Array[index] + Array[index1] + index1 - index ;
		
		for( index = 1; index <= Size - 1; index++ )
		{

			for( index1 = index + 1; index1 <= Size - 1; index1++ )
			{
				if( min > (Array[index] + Array[index1] + index1 - index) )
				{
					min = (Array[index] + Array[index1] + index1 - index) ;
				}
			}
			
		}
		
		cout<<endl <<"Smallest pair = " <<min ;
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}
