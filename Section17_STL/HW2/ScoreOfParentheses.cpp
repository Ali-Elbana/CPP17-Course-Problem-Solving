#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int scoreOfParentheses(string s) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main(void) 
{

	system( "cls" ) ;
	
	string inputStr {0} ;
	

	cout << endl << "Enter the string: " ;
	cin >> inputStr ;
	
	cout << endl << "The score = " 
		 << scoreOfParentheses(inputStr) << endl ;
	
	return 0 ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int scoreOfParentheses(string s)
{
	
	int score {0} ;
	int depth {0} ;
	
	stack<int> stk ;

	for( char ch : s )
	{

		if( ch == '(' )
		{
			stk.push( 0 ) ;
		}
		else
		{
			
			depth = stk.top() ;
			
			stk.pop() ;
			
			if( stk.empty() == true )
			{
				
				if( depth == 0 )
				{
					score++ ;
				}
				else
				{
					score += (2 * depth) ;
				}
				
			}
			else
			{
			
				if( depth == 0 )
				{
					stk.top()++ ;
				}
				else
				{
					stk.top() += (2 * depth) ;
				}
			 
			}
			
		}
      
	}

	return score ;

}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

