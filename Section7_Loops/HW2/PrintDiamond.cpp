#include<iostream>
using namespace std;


int main(void) 
{

    int N, rows = 1, stars = 1 ; 
	
    cin>>N ; 
	
	int spaces = 1 ;
	
	while( rows <= N )
	{
		
		while( spaces <= N-rows )
		{
			cout<<' ' ;
			
			spaces++  ;
		}
		
		while( stars <= 2*rows-1 )
		{
			cout<<'*' ;
			
			stars++   ;
		}
		
		spaces = 1 ;
		
		stars = 1  ;
		
		rows ++    ;
		
		cout<<endl ;
		
	}
	
	rows = 5 ;
	
	while( rows >= 1 )
	{
		
		while( spaces <= N-rows )
		{
			cout<<' ' ;
			
			spaces++  ;
		}
		
		stars = 2*rows-1 ;
		
		while( stars >= 1 )
		{
			cout<<'*' ;
			
			stars--   ;
		}
		
		spaces = 1 ;
		
		rows --    ;
		
		cout<<endl ;
		
	}
	
	
	
	
	return 0;
}




