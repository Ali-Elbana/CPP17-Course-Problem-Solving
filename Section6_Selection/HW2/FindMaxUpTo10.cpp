#include<iostream>
using namespace std;


int main(void) 
{

    int N, Num, result ; 
	
	cin>> N ;
	
    cin>>Num ; // 1
	
	N-- ;
	
	result = Num ;
	
	cin>>Num ; // 2
	
	N-- ;
	
	if( Num > result ) result = Num ;
	
	
	if( N > 0 )
	{
		cin>>Num ; // 3
		
		if( Num > result ) result = Num ;
		
		N--;
	}	
	
	if( N > 0 )
	{
		cin>>Num ; // 4
		
		if( Num > result ) result = Num ;
		
		N--;
	}	
	
	if( N > 0 )
	{
		cin>>Num ; // 5
		
		if( Num > result ) result = Num ;
		
		N--;
	}	
	
	if( N > 0 )
	{
		cin>>Num ; // 6
		
		if( Num > result ) result = Num ;
		
		N--;
	}
	
	if( N > 0 )
	{
		cin>>Num ; // 7
		
		if( Num > result ) result = Num ;
		
		N--;
	}
	
	if( N > 0 )
	{
		cin>>Num ; // 8
		
		if( Num > result ) result = Num ;
		
		N--;
	}
	
	if( N > 0 )
	{
		cin>>Num ; // 9
		
		if( Num > result ) result = Num ;
		
		N--;
	}
	
	if( N > 0 )
	{
		cin>>Num ; // 10
		
		if( Num > result ) result = Num ;
		
		N--;
	}
	
	cout<<result ;

	return 0;
}

