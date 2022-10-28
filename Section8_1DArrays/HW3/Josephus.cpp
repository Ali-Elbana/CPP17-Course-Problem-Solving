#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;


#define SET_BIT(Reg,bitnum)     (Reg) |= ( 1<<(bitnum) )

#define CLR_BIT(Reg,bitnum)     (Reg) &= ~( 1<<(bitnum) )

int main(void) 
{
	
	system( "cls" ) ;
	
	int N, MSB = 0, result ;

	cout<<endl <<"Enter the number of people: " ;
	cin>>N ;

	int n = N ;
	
	while( n != 0 ) 
	{
        n = n / 2 ;
		
        MSB++ ;
    }

	MSB-- ; // Decrement one because it starts count from 0 not 1.

	//cout<<endl <<"MSB = " <<MSB <<endl ;

	result = CLR_BIT( N, MSB )  ;
	
	result = (result << 1) | 1 ;
	
	if( N == 0 )
	{
		result = 0 ;
	}
	
	cout<<endl <<"The winner is: " <<result <<endl;
	
	return 0 ;
	
}
