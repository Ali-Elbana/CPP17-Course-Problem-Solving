#include<iostream>
using namespace std;


int main(void) 
{

    int N, Num ; 
	
	bool isPrime = true ;

    cin>>N  ; 
	
	if( (N < 500) && (N > 1) )
	{
		
		for( Num = 2; Num < N; Num++ )
		{
			if( N % Num == 0 )
			{
				isPrime = false ;
			}
         
		}
     
	}

	if( isPrime )
	{
		cout<<"Yes, Is prime number"<<endl ;
	}
	
	else
	{
		cout<<"No, Isn't prime number"<<endl ;
	}


	return 0;
}

