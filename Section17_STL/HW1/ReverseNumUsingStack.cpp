#include <iostream>
#include <string>
#include <stack>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void reverseStack( stack<int> &myStack ) ;

int reverse_num( int num ) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main(void) 
{

	system( "cls" ) ;
	
	int inputNum {0} ;
	

	cout << endl << "Enter the Num: " ;
	
	cin >> inputNum ;
	
	cout << endl << "The Num after being reversed: " 
		 << reverse_num( inputNum ) << endl ;
	
	return 0 ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void reverseStack( stack<int> &myStack ) 
{
	
	stack<int> reversedStack ;
	
	if( myStack.size() > 1 ) 
	{

		while( myStack.empty() != true ) 
		{
			
            reversedStack.push( myStack.top( ) ) ;
			
            myStack.pop( ) ;
			
        }

        myStack = reversedStack;
	 
	}
	else
	{
		
	}
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int reverse_num( int num )
{
	
	stack<int> RevStack ;
	
	int revNum 		{0} 	;
	int digit 		{0} 	;
	int lastElement {0}		;
	string strNum 	{""} 	;
	
	while( num >= 1 )
	{
		
		digit = num % 10 ;
		
		num = num / 10 ;
		
		RevStack.push( digit ) ;
		
	}
	
	reverseStack( RevStack ) ;
	
	while( RevStack.empty() != true )
	{
		
		strNum += to_string( RevStack.top() ) ;
		
		RevStack.pop( ) ;
		
	}
	
	revNum = stoi( strNum ) ;
	
	return revNum ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

