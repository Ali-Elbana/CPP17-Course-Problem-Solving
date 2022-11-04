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

    unsigned int charSearchedFor 	 						;
	
	int SubsequenceIndecesArray[inputStr.size()] = {-1} 	;
	
	if( inputStr.size() <= orgStr.size() )
	{
		
		for( int i = 0; i < inputStr.size(); i++ )
		{
			
			unsigned int start 	= 0						;
			unsigned int end 	= orgStr.size() - 1		;
			
			charSearchedFor = inputStr[i] ;
			
			// Binary search.
			while( start <= end )
			{
			
				int mid = (start + end) / 2 ;
			
				SubsequenceIndecesArray[i] = mid ;

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
			
			if( SubsequenceIndecesArray[i] < 0 )
			{
				cout<<endl <<"NO" <<endl ;
				
				break ;
			}
		 
		}
		
		int flag0 = 1 ;
		
		for( int c = 0; c < inputStr.size(); c++ )
		{
			
			if( SubsequenceIndecesArray[c] < 0 )
			{
				flag0 = -1 ;
				
				cout<<endl <<"NO" <<endl ;
				
				break ;
			}
		 
		}
		
		if( flag0 > 0 )
		{
			
			int flag = 1 ;
		
			//cout<<"Input Indeces: " ;
		
			for( int a = 0; a < inputStr.size(); a++ )
			{
				
				//cout<<SubsequenceIndecesArray[a] <<' ' ; 
				
				if( SubsequenceIndecesArray[a+1] <  SubsequenceIndecesArray[a] )
				{
					flag = -1 ;
					
					cout<<endl <<"NO" <<endl ;
					
					break ;
				}
				
			}
          
			if( flag > 0 )
			{
				cout<<endl <<"YES" <<endl ; 
			}
			
		}
		
	}
	else
	{
		cout<<endl <<"NO" <<endl ; 
	}	

	return 0 ;
	
}


// Another solution:

/* #include<iostream>
using namespace std;

int main() 
{
	
	string big_str, small_str ;
	
	cin >> big_str >> small_str ;

	if( small_str.size() > big_str.size() ) 
	{
		cout << "NO\n" ;
		
		return 0 ;
	}

	// Keep match letters in order from the big in the small
	int next_to_match = 0 ;
	
	for (int i = 0; i < (int) big_str.size(); ++i) 
	{
		
		if( big_str[i] == small_str[next_to_match] ) 
		{
			
			++next_to_match ;
			
			if( next_to_match == (int)small_str.size() ) 
			{
				cout << "YES\n" ;
				
				return 0 ;
			}
			
		}
		
	}
	
	cout << "NO\n" ;

	return 0;
}
 */

