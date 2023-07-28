/* FILENAME: main.cpp 
*  Author:  Ali El-bana
*  Version:  V1.0
*  DATE:   Thu 07/27/2023
*/

#include <iostream>
#include "library_interface.hpp"

using namespace std ;


struct book
{

	unsigned int ID{0} 			;
	string 		 name{""}		;
	unsigned int quantity{0}	;

	unsigned int getID( void )
	{
		return ID ;
	}
	
	void setID( unsigned int _ID_ )
	{
		ID = _ID_ ;
	}
	
	string getName( void )
	{
		return name ;
	}
	
	void setName( string _name_ )
	{
		name = _name_ ;
	}
	
	unsigned int getQuantity( void )
	{
		return quantity ;
	}
	
	void setQuantity( unsigned int _quantity_ )
	{
		quantity = _quantity_ ;
	}
	
	void incrQuantity( void ) 
	{
		++quantity ;
	}

	void decrQuantity( void )
	{
		--quantity ;
	}

} ;

struct user
{
	
	
} ;

struct library
{
	
	unsigned int indx{0} ;
	
	book books[ MAX_BOOKS ] ;
	user users[ MAX_USERS ] ;

	void addBook( unsigned int _ID_, string _name_, unsigned int _quantity_ )
	{
		books[indx].setID( _ID_ ) ;
		
		books[indx].setName( _name_ ) ;
		
		books[indx].setQuantity( _quantity_ ) ;
		
		indx++ ;
		
	}
	
} ;


int main( void )
{
	
	system( "cls" ) ;
	
	unsigned int 	menuChoice{0} 		;
	unsigned int 	bookID{0}			;
	string 			bookName{""}		;
	unsigned int 	bookQuantity{0}		;
	
	library lib ;
	
	cout<<endl <<"Welcome to the library system" <<endl ;
	
	do
	{
		
		// Display GUI menu //	
		Disp_vGUIMenu(  ) ;
		
		// Get the choice from the user and hold it in 'menuChoice' //
		Get_vMenuChoice( menuChoice ) ;
		
		switch( menuChoice )
		{
			
			case ADD_BOOK: 
			 
				Add_vBook( bookID, bookName, bookQuantity ) ;
				
				lib.addBook( bookID, bookName, bookQuantity ) ;
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case SEARCH_BOOKS_PREFIX: 
			 
				
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case WHO_BORROWED_BOOK_NAME: 
			 
				
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case PRINT_LIB_ID: 
			 
				
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case PRINT_LIB_NAME: 
			 
				
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case ADD_USER: 
			 
				
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case USER_BORROW_BOOK: 
			 
				
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case USER_RETURN_BOOK: 
			 
				
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case PRINT_USERS: 
			 
				
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			case EXIT: 
			 
				cout<<endl <<"Exit from the library system" <<endl ;
			 
			break ;
			/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
			default:
			
				// Do nothing //
				
			break ;
			
		}//{switch bracket}//
		
	}while( menuChoice != EXIT ) ;
	
}//{main bracket}//



