#include<iostream>
using namespace std;


int main(void) 
{

    int X, s1, e1, s2, e2, s3, e3 ; 
	
    cin>>X >>s1 >>e1 >>s2 >>e2 >>s3 >>e3 ;

	int IntervalFoundingNums = 0 ;
	
	if( ( X >= s1 ) && ( X <= e1 ) )
	{
		IntervalFoundingNums++ ;
	}

	if( ( X >= s2 ) && ( X <= e2 ) )
	{
		IntervalFoundingNums++ ;
	}

	if( ( X >= s3 ) && ( X <= e3 ) )
	{
		IntervalFoundingNums++ ;
	}
	
	cout<<IntervalFoundingNums ;

	return 0;
}

