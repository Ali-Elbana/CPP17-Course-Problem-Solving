/*
 * @file 		Employee_main.c
 * @author 		Ali El_bana (alitheboss922@gmail.com)
 * @brief 
 * @version 	0.1
 * @date 		2022-11-4
 * 
 * @copyright 	Copyright (c) 2022
 * 
 */


#include <iostream>
#include <stdlib.h>

#include "Employee_Interface.hpp"

using namespace std ;


int main(void) 
{
	
	/* Is a function from stdlib.h to clear the console screen */
	system( "cls" ) ;
	
	unsigned int L_u16SelectOption = 0 ; // Is a variable to select from the options of the system.
	
	
	// Making a option for the Employee Program.
	do
	{
		
		/* To display the main available options of the Employee Program */
		vDispMainOption( ) ;
		
		/* To scan the option you choose from the main options of the Employee Program */
		cout<<endl <<"\nKindly, select the option number: " ;
		cin>>L_u16SelectOption ;
		
		/* 
		
		 * 	To handle entering a number other than the available ones (0,1,2,3,4):
		 
		 * 	If you enter a number other than (0,1,2,3,4) 
			the program will (display Not a choice.try again, please.)
			and will ask you to enter your choice again and repeat that if you enter 
			a not available choice, until you enter one of the available choices then the program 
			will continue.
			
		*/
		while( NOT_AN_OPTION )
		{
			
			cout<<"\n\nNot a choice.try again, please.\n" ;
			
			/* To scan the option you choose from the main options of the Employee Program */
			cout<<endl <<"\nKindly, select the option number: " ;
			cin>>L_u16SelectOption ;
	     
		}
		
		
		/* To switch on your selection from the main options */
		switch( L_u16SelectOption )
		{
			
			/* The Add new employee option */ 
			case ADD_EMPLOYEE :
			
			/* Call the function that let you add a new employee */
			vAddNewEmployee( ) ;
			
			break ;
			
			/*--------------------------------------------------------------------------------------------------------*/
	
			case PRINT_EMPLOYEES :
			
			/* Call the function that let you print all employees */
			vPrintAllEmployees( ) ;
			
			break ;
			
			/*--------------------------------------------------------------------------------------------------------*/
	
			case DELETE :
			
			/* Call the function that let you delete an employee by entering his age */
			vDeleteEmployeeByAge( ) ;
			
			break ;
	
			/*--------------------------------------------------------------------------------------------------------*/
	
			case UPTADE_SALARY :
			
			/* Call the function that let you update an employee salary by entering his name */
			vUpdateEmployeeSalaryByName( ) ;
			
			break ;
	
			/*--------------------------------------Exit from the main options-----------------------------------------*/
			
			case Exit:
			
			cout<<"\n\nThe program has been implemented\n" ;
			
			cout<<"\nYou now signed out from the Employee Program\n" ;
			
			/* Is a function from stdlib.h to terminate the program */
			exit( Exit ) ;
			
			break ;

			/*--------------------------------------The End of Switch-------------------------------------------------*/
			
		}	
		
		
		// Do that until the user choose to exit from the Employee Program option.
	}while( L_u16SelectOption != Exit ) ;
	

	return 0 ;
}
