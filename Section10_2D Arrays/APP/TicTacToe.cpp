#include <iostream>
#include <cmath>

using namespace std;

void printBoard(char *space) ;

void resetBoard(char *space) ;

int main(void) 
{

	system( "cls" ) ;
	
	unsigned int inputLocation{0} 	;
	unsigned int tryCntr{0} 		;
	bool gameStatus{true} 			;
	bool locationStatus{true} 		;
	bool winStatus{false} 			;
	
	char space[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '} ;
	
	resetBoard(space) ;
	
	printBoard( space ) ;
	
	do
	{
		
		tryCntr++ ;
		
		if( tryCntr % 2 != 0  )
		{
			cout<<endl <<"Player X, enter the location from 1 to 9: " ;
		}
		else
		{
			cout<<endl <<"Player O, enter the location from 1 to 9: " ;
		}
		
		cin>>inputLocation ; 
		inputLocation-- ;
		
		// Check if it'sn't a valid location //
		if( !((inputLocation >= 0) && (inputLocation <= 8)) )
		{
			
			locationStatus = false ;
			
			do
			{
				cout<<endl <<"Invalid location, try again: " ;
				cin>>inputLocation ; 
				inputLocation-- ;
				
				if( !((inputLocation >= 0) && (inputLocation <= 8)) )
				{
					locationStatus = false ;
				}
				else
				{
					
					// Check if it's an empty location //
					if( space[inputLocation] == ' ' )
					{
						
						if( tryCntr % 2 != 0  )
						{
							space[inputLocation] = 'X' ;
						}
						else
						{
							space[inputLocation] = 'O' ;
						}
						
						locationStatus = true ;
						
						system( "cls" ) ;
						
						printBoard( space ) ;
						
					}
					else
					{
						
						locationStatus = false ;
						
						do
						{
							cout<<endl <<"Non empty location, try again: " ;
							cin>>inputLocation ; 
							inputLocation-- ;
							
							if( space[inputLocation] == ' ' )
							{
								locationStatus = true ;
								
								if( tryCntr % 2 != 0  )
								{
									space[inputLocation] = 'X' ;
								}
								else
								{
									space[inputLocation] = 'O' ;
								}
							
								locationStatus = true ;
								
								system( "cls" ) ;
								
								printBoard( space ) ;
							 
							}
							else
							{
								locationStatus = false ;
							}
							
						}while( locationStatus == false ) ;
						
					}
			     
				}	
			 
			}while( locationStatus == false ) ;
			
		}
		else
		{
			
			// Check if it's an empty location //
			if( space[inputLocation] == ' ' )
			{
				
				if( tryCntr % 2 != 0  )
				{
					space[inputLocation] = 'X' ;
				}
				else
				{
					space[inputLocation] = 'O' ;
				}
				
				locationStatus = true ;
				
				system( "cls" ) ;
				
				printBoard( space ) ;
				
			}
			else
			{
				
				locationStatus = false ;
				
				do
				{
					cout<<endl <<"Non empty location, try again: " ;
					cin>>inputLocation ; 
					inputLocation-- ;
					
					// Check if it'sn't a valid location //
					if( !((inputLocation >= 0) && (inputLocation <= 8)) )
					{
						
						locationStatus = false ;
						
						do
						{
							cout<<endl <<"Invalid location, try again: " ;
							cin>>inputLocation ; 
							inputLocation-- ;
							
							if( !((inputLocation >= 0) && (inputLocation <= 8)) )
							{
								locationStatus = false ;
							}
							else
							{
								locationStatus = true ;
							}
							
						}while( locationStatus == false ) ;
						
					}
					
					if( space[inputLocation] == ' ' )
					{
						locationStatus = true ;
						
						if( tryCntr % 2 != 0  )
						{
							space[inputLocation] = 'X' ;
						}
						else
						{
							space[inputLocation] = 'O' ;
						}
					
						locationStatus = true ;
						
						system( "cls" ) ;
						
						printBoard( space ) ;
				     
					}
					else
					{
						locationStatus = false ;
					}
					
				}while( locationStatus == false ) ;
				
			}
		 
		}
	 
		// Check if there's a winner //
		if( (space[0] != ' ') && (space[0] == space[1]) && (space[1] == space[2]) ) 
		{
			space[0] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[3] != ' ') && (space[3] == space[4]) && (space[4] == space[5]) )
		{
			space[3] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[6] != ' ') && (space[6] == space[7]) && (space[7] == space[8]) )
		{
			space[6] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[0] != ' ') && (space[0] == space[3]) && (space[3] == space[6]) )
		{
			space[0] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[6] != ' ') && (space[6] == space[7]) && (space[7] == space[8]) )
		{
			space[6] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[1] != ' ') && (space[1] == space[4]) && (space[4] == space[7]) )
		{
			space[1] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[6] != ' ') && (space[6] == space[7]) && (space[7] == space[8]) )
		{
			space[6] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[2] != ' ') && (space[2] == space[5]) && (space[5] == space[8]) )
		{
			space[2] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[0] != ' ') && (space[0] == space[4]) && (space[4] == space[8]) )
		{
			space[0] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( (space[2] != ' ') && (space[2] == space[4]) && (space[4] == space[6]) )
		{
			space[2] == 'X' ? cout << "PLAYER X WINS \n" : cout << "PLAYER O WINS \n" ;
			
			gameStatus = false ;
		}
		else if( tryCntr == 9 )
		{
			cout <<"Tie\n" ;
			
			gameStatus = false ;
		}
		
	}while( gameStatus == true ) ;
	
	return 0 ;
	
}

void resetBoard(char *space) 
{
	
  for (int i = 0; i < 9; i++) 
  {
    space[i] = ' ';
  }
  
}

void printBoard(char *space) 
{
	
  cout << '\n';
  cout << "     |     |     " << '\n';
  cout << "  " << space[0] << "  |  " << space[1] << "  |  " << space[2]
       << "  " << '\n';
  cout << "_____|_____|_____" << '\n';
  cout << "     |     |     " << '\n';
  cout << "  " << space[3] << "  |  " << space[4] << "  |  " << space[5]
       << "  " << '\n';
  cout << "_____|_____|_____" << '\n';
  cout << "     |     |     " << '\n';
  cout << "  " << space[6] << "  |  " << space[7] << "  |  " << space[8]
       << "  " << '\n';
  cout << '\n';
  
}