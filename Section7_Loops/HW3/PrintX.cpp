#include<iostream>
using namespace std;


int main(void) 
{

    int N, row = 1, column = 1 ; 
	
    cin>>N ; 
	
	int spaces = 1 ;
	
	for( row = 1; row <= N; row++ )
	{
		
		for( column = 1; column <= N; column++ )
		{
			
			if( (row - column == 0) || ( (double)(row+column)/2 == (N+1)/2) )
			{
				cout<<'*' ;
			}
			
			else
			{
				cout<<' ' ;
			}
			
		}
		
		cout<<endl ;
	}
	
	
	return 0 ;

}




