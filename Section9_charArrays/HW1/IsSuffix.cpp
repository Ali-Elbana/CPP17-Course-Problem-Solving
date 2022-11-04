#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	cout<<endl <<"Enter the string: " ;
	string orgStr ;
	getline( cin, orgStr ) ;
	
	cout<<endl <<"Enter the suffix string: " ;
	string inputStr ;
	getline( cin, inputStr ) ;
	
	int cntr = 0 ;
	
	if( inputStr.size() <= orgStr.size() )
	{

		int j = 0 ;

		for( int i = ( orgStr.size() - inputStr.size() ); i < orgStr.size(); i++ )
		{
			
			//cout<<endl <<"INPUT: " <<inputStr[j] <<"\t" ; 
		
			//cout<<"ORIGINAL: " <<orgStr[i] ; 
			
			if( inputStr[j] == orgStr[i] )
			{
				cntr++ ;
			}
			
			j++ ;
	     
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
