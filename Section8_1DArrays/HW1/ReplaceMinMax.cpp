#include<iostream>
using namespace std;


int main(void) 
{
	int Size ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size] ;
	
	if( Size < 200 )
	{
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			cin>>Array[index] ;
		}
		
		int max = Array[0] ;
		int min = Array[Size-1] ;
		
		for( int index = 1; index <= Size - 1; index++ )
		{
			if( Array[index] > max )
			{
				max = Array[index] ;
			}
			if( Array[index] < min )
			{
				min = Array[index] ;
			}
		 
		}

		for( int index = 0; index <= Size - 1; index++ )
		{
			if( Array[index] == max )
			{
				Array[index] = min ;
			}
			else if( Array[index] == min )
			{
				Array[index] = max ;
			}
		 
		}
		
		cout<<endl <<"The modified array: " ;
		for( int index = 0; index <= Size - 1; index++ )
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

