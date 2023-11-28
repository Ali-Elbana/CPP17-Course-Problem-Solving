#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main(void) 
{

	system( "cls" ) ;
	
	int 	N 	{0}  	;
	string 	str {""}	;
	
	int 	Q 		{0} 	;
	string 	preStr 	{""}	;
	
	string current_prefix {""} ;
	
	vector<string> prefixes ;
	
	map<vector<string>, string> mp ;
	
	cout << endl << "Enter the number of string: " ;
	cin >> N ;
	
	for( int i = 0; i < N; i++ )
	{
		
		cout << endl << "Enter the string: " ;
		cin >> str ;
		
		current_prefix = "" ;
		
		int s {0} ;
		
		while( s < str.size() )
		{
			
			current_prefix += str[s] ;
			
			prefixes.push_back( current_prefix ) ;
			
			s++ ;
			
		}
		
		mp[ prefixes ] = str ;
		
		prefixes.clear( ) ;
		
	}
	
	cout << endl << "Enter the number of queries: " ;
	cin >> Q ;
	
	for( int j = 0; j < Q; j++ )
	{
		
		cout << endl << "Enter the prefix: " ;
		cin >> preStr ;
		
		for( const auto &entry : mp )
		{
			
			const vector<std::string> &key 	= entry.first ;
			const string &value 			= entry.second ;
			
			auto it = find( key.begin(), key.end(), preStr ) ;
			
			if( it != key.end() )
			{
				
				cout << " --> " << value << endl ;
				
			}
			else
			{
				// Do nothing 
			}
			
			
		}
		
	}
	
	
	return 0 ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

