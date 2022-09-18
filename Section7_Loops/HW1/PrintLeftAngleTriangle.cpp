#include<iostream>
using namespace std;


int main(void) 
{

    int N, rows = 1, stars = 1 ; 
	
    cin>>N ; 
	
	while( rows <= N )
	{
		
		while( stars <= rows )
		{
			cout<<'*' ;
			
			stars++ ;
		}
		
		stars = 1 ;
		
		rows++ ;
		
		cout<<endl ;
	}
	
	return 0;
}




