#include <iostream>
#include <cmath>

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int max(int a, int b, int c) ;
int max(int a, int b, int c, int d) ;
int max(int a, int b, int c, int d, int e) ;
int max(int a, int b, int c, int d, int e, int f) ;

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int main(void) 
{

	system( "cls" ) ;
	
	int a, b, c, d, e, f = 0 ;

	int maxNum = 0 ;

	cout<<endl <<"Enter the six numbers: " ;
	cin>>a >>b >>c >>d >>e >>f ;

	maxNum = max( a, b, c, d, e, f ) ;
	
	cout<<endl <<"The maximum number of the six is: " <<maxNum ;

	return 0 ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

int max(int a, int b, int c) 
{
	
	int max = a ;
	
	if( max < b  )
	{
		max = b ;
	}
	else
	{
		max = c ;
	}
	
	return max ;
	
}

////////////////////////////////////////////////////////////////////

int max(int a, int b, int c, int d)
{
	
	int result = 0 ;
	
	int max1 = d ;
	
	int max2 = max( a,  b,  c ) ;
	
	if( max1 > max2 )
	{
		result = max1 ;
	}
	else
	{
		result = max2 ;
	}
	
	return result ;
	
}

////////////////////////////////////////////////////////////////////

int max(int a, int b, int c, int d, int e)
{
	
	int result = 0 ;
	
	int max1 = e ;
	
	int max2 = max( a,  b,  c, d ) ;
	
	if( max1 > max2 )
	{
		result = max1 ;
	}
	else
	{
		result = max2 ;
	}
	
	return result ;
	
}

////////////////////////////////////////////////////////////////////

int max(int a, int b, int c, int d, int e, int f)
{
	
	int result = 0 ;
	
	int max1 = f ;
	
	int max2 = max( a,  b,  c, d, e ) ;
	
	if( max1 > max2 )
	{
		result = max1 ;
	}
	else
	{
		result = max2 ;
	}
	
	return result ;
	
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////