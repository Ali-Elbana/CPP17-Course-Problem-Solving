#include <iostream>
#include <cmath>

using namespace std;


int main(void) 
{

	system( "cls" ) ;
	
	unsigned int rows 		;
	unsigned int columns 	;
	unsigned int queries 	;
	unsigned int querie1 	;
	unsigned int querie2 	;
	
	int flag = -1 ;
	
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
		
		flag = -1 ;
		
		cout<<endl <<"Enter the querie: " ;
		
		cin>>querie1 >>querie2 ;
		
		
		for( int c = 0; c < columns; c++ )
		{
			
			if( array[querie1-1][c] > array[querie2-1][c] )
			{
				
				cout<<"-> " <<"NO" <<endl ;
				
				flag = 100 ;
				
				break ;
				
			}
			
		}
		
		if( flag < 0 )
		{
			cout<<"-> " <<"YES" <<endl ;
		}
     
	}

	return 0 ;
	
}
