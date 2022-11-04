#include <iostream>
#include <cmath>

using namespace std;


int main(void) 
{

	system( "cls" ) ;
	
	string Array1 ;
	string Array2 ;
	
	cout<<endl <<"Enter the first array: " ;
	cin>>Array1 ;
	
	cout<<endl <<"Enter the second array: " ;
	cin>>Array2 ;
	
	if( Array1.size() <= 200 && Array2.size() <= 200 )
	{
		
		int flag = 1 ;
		
		if( Array1.size() != Array2.size() )
		{
			cout<<endl <<"Not equal strings" <<endl ;
		}
		else
		{
			
			for( int i = 0; i < Array1.size(); i++ )
			{
				
				if( Array1[i] != Array2[i] )
				{
					flag = -1 ;
					
					cout<<endl <<"Not equal strings" <<endl ;
					
					break ;
				}
				
			}
			
			if( flag > 0 )
			{
				cout<<endl <<"Equal strings" <<endl ;
			}
			
		}
     
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}
