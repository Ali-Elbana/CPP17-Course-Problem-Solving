#include<iostream>

using namespace std;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

bool IsPalindrome( int size, int array[ ] ) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////


int main(void) 
{
	
	system( "cls" ) ;
	
	int Size{0} ;
	bool palindrome{false} ;
	
	cout<<endl <<"Enter the array size: " ;
	cin>>Size ;

	int Array[Size] ;

	cout<<endl <<"Enter the array elements: " ;
	for( int index = 0; index <= Size - 1; index++ )
	{
		cin>>Array[index] ;
	}
	
	palindrome = IsPalindrome( Size, Array ) ;
	
	if( palindrome == true )
	{
		cout<<endl <<"This array is palindrome" <<endl ;
	}
	else
	{
		cout<<endl <<"This array isn't palindrome" <<endl ;
	}		
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

bool IsPalindrome( int size, int array[ ] )
{
	
	bool flag = true ;
	
	for( int index = 0; index <= size / 2; index++ )
	{

		if( array[index] != array[size - 1 - index] )
		{
			flag = false ;
			
			break ;
		}
       	
	}
	
	return flag ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
