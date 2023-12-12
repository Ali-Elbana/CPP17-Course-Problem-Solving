#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

 string removeDuplicates(string s) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main(void) 
{

	system( "cls" ) ;
	
	string inputStr {0} ;
	

	cout << endl << "Enter the string: " ;
	cin >> inputStr ;
	
	cout << endl << "The output: " 
		 << removeDuplicates(inputStr) << endl ;
	
	return 0 ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

string removeDuplicates(string s)
{
	
	string modStr {""} ;

	stack<char> stk ;

	for( auto ch : s )
	{

		if( stk.empty() == true )
		{
			stk.push( ch ) ;
		}
		else
		{

			if( stk.top() == ch )
			{
				stk.pop() ;
			}
			else
			{
				stk.push( ch ) ;
			}
         
		}
      
	}

	while( stk.empty() != true )
	{

		modStr += stk.top() ;

		stk.pop() ;
     
	}

	reverse( modStr.begin(), modStr.end() ) ;

	return modStr ;

}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
