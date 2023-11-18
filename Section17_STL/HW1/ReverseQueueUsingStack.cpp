#include <iostream>
#include <string.h>
#include <queue>
#include <stack>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void reverse_queue( queue<int> &q ) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main(void) 
{

	system( "cls" ) ;
	
	queue<int> orgQueue ;
	
	int inputElement {0} ;
	
	for( int i = 1; i <= 10; i++ )
	{
		
		cout << endl << "Enter the " << i << " element: " ;
		
		cin >> inputElement ;
		
		orgQueue.push( inputElement ) ;
		
	}
	
	cout << endl << "The order of elements before reversing the queue: " << endl ;
	
	for( int i = orgQueue.front(); i <= orgQueue.size(); i++ )
	{
		
		cout << endl << i << ' ' ;
		
	}
	
	reverse_queue( orgQueue ) ;
	
	cout << endl << "The order of elements after reversing the queue: " << endl ;
	
	for( int i = orgQueue.front(); i >= orgQueue.back(); i-- )
	{
		
		cout << endl << i << ' ' ;
		
	}
	
	return 0 ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void reverse_queue( queue<int>& q )
{
	
	stack<int> tempStack ;
	
	while( q.empty() != true )
	{
		
		tempStack.push( q.front() ) ;
		
		q.pop( ) ;
		
	}
	
	while( tempStack.empty() != true )
	{
		
		q.push( tempStack.top() ) ;
		
		tempStack.pop( ) ;
		
	}
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////