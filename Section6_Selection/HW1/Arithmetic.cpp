#include<iostream>
using namespace std;


int main(void) 
{

    int A, B ; 
	
    cin>>A >>B ; 
	
	// In case they are both odd numbers.
	if( ( A % 2 != 0 ) && (  B % 2 != 0 ) )
	{
		cout<< A*B <<endl ;
	}

	// In case they are both even numbers.
	if( ( A % 2 == 0 ) && (  B % 2 == 0 ) )
	{
		cout<< (double)A/B <<endl ;
	}
	
	// In case A is odd and B is even.
	if( ( A % 2 != 0 ) && (  B % 2 == 0 ) )
	{
		cout<< A+B <<endl ;
	}
	
	// In case A is even and B is odd.
	if( ( A % 2 == 0 ) && (  B % 2 != 0 ) )
	{
		cout<< A-B <<endl ;
	}


	return 0;
}

