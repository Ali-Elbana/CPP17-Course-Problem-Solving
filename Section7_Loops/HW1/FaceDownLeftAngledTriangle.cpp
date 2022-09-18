#include<iostream>
using namespace std;


int main(void) 
{

    int N ; 
	
    cin>>N ; 
	
	int rows  = N ;
	
	int stars = rows ;
	
	while( rows >= 1 )
	{
		
		while( stars >= 1 )
		{
			cout<<'*' ;
			
			stars-- ;
		}
		
		rows-- ;
		
		stars = rows ;
		
		cout<<endl ;
	}
	
	return 0;
}




