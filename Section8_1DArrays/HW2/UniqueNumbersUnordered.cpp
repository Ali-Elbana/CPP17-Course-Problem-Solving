#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	int Size, index = 0, digit = 0 ;

	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size], is_available[900] = { 0 } ;

	if( Size <= 900 )
	{
		
		cout<<endl <<"Enter the array elements: " ;
		for( int index = 0; index <= Size - 1; index++ )
		{
			cin>>Array[index] ;
			
			if( is_available[Array[index]] == 0 )
			{
				cout<<Array[index] <<' ' ;
			}
			
			is_available[Array[index]] = 1 ;
		}
	 
	}
	else
	{
		cout<<"Long array size not accepted, try again" ;
	}
	
	return 0 ;
	
}
