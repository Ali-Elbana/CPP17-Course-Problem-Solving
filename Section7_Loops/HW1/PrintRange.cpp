#include<iostream>
using namespace std;


int main(void) 
{

    int A, B ; 
	
    cin>>A >>B ; 
	
	// In case they are both equal.
	if( ( A == B ) )
	{
		cout<< "There's no range they are the same number" <<endl ;
	}

	else
	{
		while( A <= B )
		{
			cout<<endl <<A++ <<endl ;
		}
	}


	return 0;
}

