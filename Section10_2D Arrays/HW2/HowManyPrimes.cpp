#include <iostream>
#include <cmath>

using namespace std;


int main(void) 
{

	system( "cls" ) ;
	
	unsigned int rows 		;
	unsigned int columns 	;
	unsigned int queries 	;
	unsigned int i 			;
	unsigned int j 			;
	unsigned int subRow 	;
	unsigned int subColumn 	;
	unsigned int cntr = 0 	;
	
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
	
	cout<<endl <<"Enter the number of queries: " ;
	cin>>queries ;
	
	for( int q = 0; q < queries; q++ )
	{
		
		cntr = 0 ;
		
		cout<<endl <<"Enter the querie: " ;
		
		cin>>i >>j >>subRow >>subColumn ;
		
		unsigned int jCopy = j ;
		unsigned int iCopy = i ;
		
		cout<<endl ;
		
		for( i; i < iCopy + subRow; i++ )
		{
			
			for( j; j < jCopy + subColumn; j++ )
			{
				
				cout<<array[i][j] <<' ' ;

				if( array[i][j] == 2 || array[i][j] == 3 )
				{
					cntr++ ;
				}
				
				else if( (array[i][j] % 2 != 0) && (array[i][j] % 3 != 0) )
				{
					cntr++ ;
				}
	            
			}
			
			cout<<endl ;
			
			j = jCopy ;
			
		}
	
		cout<<"-> " <<cntr <<endl ;
		
	}

	return 0 ;
	
}
