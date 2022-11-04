#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;

	string Array ;

	cout<<endl <<"Enter the array: " ;
	cin>>Array ;
	
	if( Array.size() <= 100 )
	{
		
		int index = 0 ;
		
		while( Array[index] != '\0' )
		{
			
			cout<<Array[index] ;
			
			if( Array[index+1] != Array[index] )
			{
				cout<<' ' ;
			}
			
			index++ ;
			
		}
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}
