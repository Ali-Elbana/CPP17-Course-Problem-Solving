#include<iostream>
#include<cmath>

using namespace std;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

string replace_str( string input, string pattern, string to ) ;

bool starts_with( string input, string pattern, int pos ) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main(void) 
{
	
	system( "cls" ) ;
	
	string input 	{""} 	;
    string pattern 	{""} 	;
	string replace 	{""} 	;
	string newStr	{""} 	;

	cout<<endl <<"Enter the string: " ;
	cin>>input ;
	
	cout<<endl <<"Enter the pattern: " ;
	cin>>pattern ;
	
	cout<<endl <<"Enter the replacement: " ;
	cin>>replace ;

	newStr = replace_str( input, pattern, replace ) ;
	
	cout<<endl <<"The new string is: " <<newStr ;

}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

bool starts_with( string input, string pattern, int pos )
{
	
	string comp = "" ;
	bool flag{false} ;
	
	int patternlen = pattern.length( ) 	;
	int inputlen   = input.length( ) 	;
	
	for( int i = pos; (i < (pos + patternlen)) && (i < inputlen); i++ )
	{
		
		comp += input[i] ;
		
		if( pattern == comp )
		{
			flag = true ;
		}
		else
		{
			flag = false ;
		}
		
	}
	
	return flag ;
	
}

////////////////////////////////////////////////////////////////////

string replace_str( string input, string pattern, string to )
{
	
	string newStr{""} 	;
	bool flag{false} 	;
	
	int inputlen = input.length( ) 		 ;
	int skipStep = pattern.length( ) - 1 ;
	
	for( int pos = 0; pos < inputlen; pos++ )
	{
		
		flag = starts_with( input, pattern, pos ) ;
		
		if( flag == true )
		{
			newStr += to ;
			
			// To skip the next chars //
			pos += skipStep ;
		}
		else
		{
			newStr += input[pos] ;
		}
		
	}
	
	return newStr ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

