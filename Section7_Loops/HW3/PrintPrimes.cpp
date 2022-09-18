#include<iostream>
using namespace std;


int main(void) 
{

    int N, Num ; 

	bool first_print = true;

    cin>>N  ; 
	
	if( (N < 500) && (N >= 3) )
	{
		
		for( Num = 2; Num < N; Num++ )
		{
			
			if( (Num == 2) || (Num == 3) )
			{
				if( !first_print )
				{
					cout<<',' ;
				}
				
				cout<<Num ;
				
				first_print = false ;
			}
         
			else if( (Num % 2 != 0) && (Num % 3 != 0) )
			{
				
				if( !first_print )
				{
					cout<<',' ;
				}
				
				cout<<Num ;
				
				first_print = false ;
			}
         
		}
     
	}

	return 0;
}

