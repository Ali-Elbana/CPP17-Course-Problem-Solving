#include<iostream>
using namespace std;


int main(void) 
{

	int N, cntr = 1, Nums = 0 ; 
	
    cin>>N ; 
	
	while( (N >= 1) && (N <= 30) && (cntr <= N) )
	{
		
		if( (Nums % 4 != 0) && (Nums % 3 == 0) )
		{
			cout<<Nums <<endl ;
			
			cntr++ ;
		}
		
		Nums++ ;
		
	}

	return 0;
}
