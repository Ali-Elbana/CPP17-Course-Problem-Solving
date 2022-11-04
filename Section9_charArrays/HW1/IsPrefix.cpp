#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	cout<<endl <<"Enter the string: " ;
	string orgStr ;
	getline( cin, orgStr ) ;
	
	cout<<endl <<"Enter the prefix string: " ;
	string inputStr ;
	getline( cin, inputStr ) ;
	
	int cntr = 0 ;
	
	if( inputStr.size() <= orgStr.size() )
	{

		for( int i = 0; i < inputStr.size(); i++ )
		{
			
			if( inputStr[i] == orgStr[i] )
			{
				cntr++ ;
			}
			
		}
	 
		if( cntr == inputStr.size() )
		{
			cout<<endl <<"YES" <<endl ;
		}
		else
		{
			cout<<endl <<"NO" <<endl ; 
		}	
		
	}
	
	else
	{
		cout<<endl <<"NO" <<endl ; 
	}	

	return 0 ;
	
}
