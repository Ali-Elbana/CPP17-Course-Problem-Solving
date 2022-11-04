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
		
		int cntr{1} ;
		
		int index = 0 ;
		
		cout<<endl ;
		
		while( Array[index] != '\0' )
		{
			
			if( index == (Array.size() - 1) )
			{
				cout<<Array[index] <<cntr ;
			}
			else if( Array[index+1] != Array[index] )
			{
				cout<<Array[index] <<cntr <<"_"  ;
				
				cntr = 1 ;
			}
			else
			{
				cntr++ ;
			}
			
			index++ ;
			
		}
		
		cout<<endl ;
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}
