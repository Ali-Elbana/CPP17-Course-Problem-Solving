#include<iostream>
using namespace std;


int main(void) 
{
	int Size, flag = -1 ;

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
		
		int reference = Array[0] ;
		
		for( int index = 1; index <= Size - 1; index++ )
		{
			if( Array[index] > reference )
			{
				flag = 1 ;
			}
			else
			{
				flag = -1 ;
				
				break ;
			}
		 
		}
		
		if( flag > 0 )
		{
			cout<<"YES" <<endl ;
		}
		else
		{
			cout<<"NO" <<endl ;
		}
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	

	return 0;
}




