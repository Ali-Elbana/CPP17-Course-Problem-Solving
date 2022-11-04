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
	
	unsigned int cntr 			 	= 0 					;
	unsigned int start 			 	= 0						;
    unsigned int end 			 	= orgStr.size() - 1		;
    unsigned int charSearchedFor 	= inputStr[0] 			;
	int charSearchedIndex  			= -1					;
	
	if( inputStr.size() <= orgStr.size() )
	{
		
		// Binary search.
		while( start <= end )
		{
		
			int mid = (start + end) / 2 ;
		
			charSearchedIndex = mid ;
			
			if( charSearchedFor == orgStr[mid] )
			{
				break ;
			}
			
			else if( charSearchedFor > orgStr[mid] )
			{
				start = mid + 1 ;
			}
			
			else if( charSearchedFor < orgStr[mid] )
			{
				end = mid - 1 ;
			}
		 
		}
		
		if( charSearchedIndex < 0 )
		{
			cout<<endl <<"NO" <<endl ;
		}
		else
		{
			
			int i = charSearchedIndex ;
	
			for( int j = 0; j < inputStr.size(); j++ )
			{
				
				//cout<<endl <<"INPUT: " <<inputStr[j] <<"\t" ; 
			
				//cout<<"ORIGINAL: " <<orgStr[i] ; 
				
				if( inputStr[j] == orgStr[i] )
				{
					cntr++ ;
				}
				
				i++ ;
			  
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
		
	}
	else
	{
		cout<<endl <<"NO" <<endl ; 
	}	

	return 0 ;
	
}
