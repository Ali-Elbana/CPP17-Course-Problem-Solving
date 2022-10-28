#include<iostream>

using namespace std;


int main(void) 
{
	
	int Size, flag = 0 ;

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
		
		for( int index = 0; index <= Size / 2; index++ )
		{

			if( Array[index] != Array[Size - 1 - index] )
			{
				cout<<endl <<"NO" ;
				
				flag = -1 ;
				
				break ;
			}
         	
		}
		
		if( flag >= 0 )
		{
			cout<<endl <<"YES" ;
		}
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
}
