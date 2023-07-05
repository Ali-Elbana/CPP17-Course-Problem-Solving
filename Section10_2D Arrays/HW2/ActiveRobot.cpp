#include <iostream>
#include <cmath>

using namespace std;


int main(void) 
{

	system( "cls" ) ;
	
	int rows 						;
	int columns 					;
	unsigned int CommandsNum 		;
	unsigned int direction 			;
	unsigned int steps 				;
	int currentRow{0}		;
	int currentColumn{0} 	;
	
	cout<<endl <<"Enter the number of rows: " ;
	cin>>rows ;
	
	cout<<endl <<"Enter the number of columns: " ;
	cin>>columns ;
	
	int array[rows][columns] ;
	
	cout<<endl <<"Enter the number of commands: " ;
	cin>>CommandsNum ;
	
	for( int k = 0; k < CommandsNum; k++ )
	{
		
		cout<<endl <<"Enter the direction: " ;
		cin>>direction ;
		
		cout<<endl <<"Enter the steps: " ;
		cin>>steps ;
		
		switch( direction )
		{
			// UP //
			case 1:     
				
				currentRow = currentRow - steps ;
				
				if( currentRow < 0 )
				{
					currentRow = -( currentRow % (-rows) ) ;
					
					currentRow = rows - currentRow ;
					
					if( currentRow == rows )
					{
						currentRow = 0 ;
					}
				}
				
				
			break ;
			
			//---------------------------------------------------//
			
			// RIGHT //
			case 2:     
				
				currentColumn = (currentColumn + steps) % columns ;
				
			break ;
			
			//---------------------------------------------------//
			
			// DOWN //
			case 3:     
				
				currentRow = (currentRow + steps) % rows ;
				
			break ;
			
			//---------------------------------------------------//
			
			// LEFT //
			case 4:     
				
				currentColumn = currentColumn - steps ;
				
				if( currentColumn < 0 )
				{
					currentColumn = -( currentColumn % (-columns) ) ;
					
					currentColumn = columns - currentColumn ;
					
					if( currentColumn == columns )
					{
						currentColumn = 0 ;
					}
				}
				
				
			break ;
			
			//---------------------------------------------------//
			
			// DEFAULT //
			default:     
				
				// Do nothing //
				
			break ;
			
		}
		
		cout<<endl <<"Current position: " <<'(' <<currentRow <<',' <<' ' <<currentColumn <<')' <<endl ;
		
	}
	
	
	return 0 ;
	
}
