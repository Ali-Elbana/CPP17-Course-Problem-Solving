#include <iostream>
#include <cmath>

using namespace std;


int main(void) 
{

	system( "cls" ) ;
	
	unsigned int rows ;
	unsigned int columns ;
	
	cout<<endl <<"Enter the number of rows: " ;
	cin>>rows ;
	
	cout<<endl <<"Enter the number of columns: " ;
	cin>>columns ;
	
	int array[rows][columns] ;
	
	
	cout<<endl <<"Enter the array elements: " ;
	for( int r = 0; r < rows; r++ )
	{
		
		for( int c = 0; c < columns; c++ )
		{
			cin>>array[r][c] ;
		}
		
	}
	
	cout<<endl ;
	
	for( int c = 0; c < columns; c++ )
	{
		
		for( int r = 0; r < rows; r++ )
		{
			cout<<array[r][c] <<' ' ;
		}
		
		cout<<endl ;
		
	}
	
	return 0 ;
	
}
