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
	
	bool isMountain = false	;

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
	
	for( int r = 0; r < rows; r++ )
	{
		
		for( int c = 0; c < columns; c++ )
		{
			
			isMountain = false ;
			
			if( r > 0 )
			{
				
				if( (array[r][c] > array[r-1][c]) )
				{
					isMountain = true ;
				}
				else
				{
					isMountain = false ;
					
					continue ;
				}
				
				if( c < columns-1 )
				{
					
					if( (array[r][c] > array[r-1][c+1]) )
					{
						isMountain = true ;
					}
					else
					{
						isMountain = false ;
						
						continue ;
					}
				  
				}
				
			}
			
			if( c > 0 )
			{
				
				if( (array[r][c] > array[r][c-1]) )
				{
					isMountain = true ;
				}
				else
				{
					isMountain = false ;
					
					continue ;
				}
				
				if( r < rows-1 )
				{
					
					if( (array[r][c] > array[r+1][c-1]) )
					{
						isMountain = true ;
					}
					else
					{
						isMountain = false ;
						
						continue ;
					}
				 
				}
				
			}
			
			if( (r > 0) && (c > 0) )
			{
				
				if( (array[r][c] > array[r-1][c-1]) )
				{
					isMountain = true ;
				}
				else
				{
					isMountain = false ;
					
					continue ;
				}
				
			}
			
			if( c < columns-1 )
			{
				
				if( (array[r][c] > array[r][c+1]) )
				{
					isMountain = true ;
				}
				else
				{
					isMountain = false ;
					
					continue ;
				}
				
				if( r < rows-1 )
				{
					
					if( (array[r][c] > array[r+1][c+1]) && (array[r][c] > array[r+1][c]) )
					{
						isMountain = true ;
					}
					else
					{
						isMountain = false ;
						
						continue ;
					}
				 
				}
				
			}
			
			if( isMountain == true )
			{
				
				cout<<endl <<r <<' ' <<c  <<endl ;
				
			}
			
		}
		
	}

	return 0 ;
	
}
