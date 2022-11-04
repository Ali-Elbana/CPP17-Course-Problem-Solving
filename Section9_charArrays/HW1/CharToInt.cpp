#include<iostream>

using namespace std;


int main(void) 
{
	
	system( "cls" ) ;
	
	int Num = 0, unit = 10, sign = 1, N ;

	string Array ;

	cout<<endl <<"Enter the array: " ;
	cin>>Array ;
	
	if( Array.size() <= 6 )
	{
		
		int index = 0 ;
		
		if( Array[0] == '-' )
		{
			sign = -1 ;
			
			index = 1 ;
		}
	
		while( Array[index] != '\0' )
		{
			
			//cout<<"Indeces: " <<index <<' ' ;
			
			N =  Array[index] - '0' ;
			
			Num = (unit * Num) + N ;
			
			index++ ;
			
		}
		
		Num *= sign ;
		
		cout<<endl <<Num <<' ' <<Num*3 <<endl ;
		
	}
	else
	{
		cout<<"Long array size not accepted, try again" <<endl ;
	}
	
	return 0 ;
	
}
