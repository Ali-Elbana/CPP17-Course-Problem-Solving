/* FILENAME: Hospital_program.cpp
*  Author:  Ali El-bana
*  Version:  V1.0
*  DATE:   Fri 07/21/2023
*/

#include <iostream>
#include <cstdio>
#include <string>

#include "Hospital_interface.hpp"
#include "Hospital_config.hpp"
#include "Hospital_private.hpp"

using namespace std ;

////////////////////////////////////////////////////////////////////
///////////////////// Functions Implementation ////////////////////
//////////////////////////////////////////////////////////////////

void Disp_vGUIWindow( void )
{
	
	cout<<endl								;
	cout<<endl <<"1) Add new patient" 		;
	cout<<endl <<"2) print all patients" 	;
	cout<<endl <<"3) Get next patient" 		;
	cout<<endl <<"4) Exit" 					;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

void Get_vWindowChoice( unsigned int & A_uintChoice )
{
	
	cout<<endl <<"Enter your choice: " ;
	cin>> A_uintChoice ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

bool Check_bValidWindowChoice( unsigned int A_uintChoice )
{
	
	bool isValid{true} ;
	
	if( (A_uintChoice != ADD)  && (A_uintChoice != PRINT) 
		&& 
		(A_uintChoice != NEXT) && (A_uintChoice != EXIT) )
	{
		
		isValid = false ;
		
	}
	else
	{
		isValid = true ;
	}
	
	return isValid ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

void Get_vSpecializationNum( unsigned int & A_uintSpecializationNum )
{
	
	cout<<endl <<"Enter specialization number(1-->20): " ;
	cin>> A_uintSpecializationNum ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

bool Check_bValidSpecializationNum( unsigned int A_uintSpecializationNum ) 
{
	
	bool isValid{true} ;
	
	if( (A_uintSpecializationNum - 1) < 0 || (A_uintSpecializationNum - 1) > (MAX_SPECIALIZATION-1) )
	{
		isValid = false ;
	}
	else
	{
		isValid = true ;
	}
	
	return isValid ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

bool Check_bSpecializationQueueFull( unsigned int A_uintspecializationQueue[],
									 unsigned int A_uintSpecializationNum	)
{
	bool isFull{false} ;
	
	if( A_uintspecializationQueue[A_uintSpecializationNum] >= MAX_PATIENTS )
	{
		isFull = true ;
	}
	else
	{
		isFull = false ;
	}
	
	return isFull ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

void Get_vPatientName( string & A_strName )
{
	
	// Empty the input buffer, to recieve another input //
	fflush( stdin ) ;
	
	cout<<endl <<"Enter patient name: " ;
	getline( cin, A_strName ) ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

bool Check_bEmptyString( string A_strString )
{
	
	bool isEmpty{false} ;
	
	if( A_strString.empty( ) != 0 ) 
	{
		isEmpty = true ;
	}
	else
	{
		isEmpty = false ;
	}
	
	for( char ch : A_strString ) 
	{
		
		// if you found any thing other than spaces break, cause it's not empty //  
		if( isspace(ch) == 0 ) 
		{
			isEmpty = false ;
			
			break ;
		}
		else
		{
			isEmpty = true ;
		}
	}

	return isEmpty ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

bool Check_bNumInString( string A_strString )
{
	
	bool foundNum{false} ;
	
	for( char ch : A_strString )
	{
		
		if( isdigit(ch) != 0 )
		{
			foundNum = true ;
			
			break ;
		}
		else
		{
			foundNum = false ;
		}
		
	}
	
	return foundNum ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

bool Check_bSpecialCharInString( string A_strString )
{
	
	bool foundSpecialChar{false} ;
	
	for( char ch : A_strString )
	{
		
		if( (isalnum(ch) == 0) && (ch != ' ') )
		{
			foundSpecialChar = true ;
			
			break ;
		}
		else
		{
			foundSpecialChar = false ;
		}
		
	}
	
	return foundSpecialChar ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

bool Check_bValidPatientName( string A_strName )
{
	
	bool isValid{true} 				;
	bool isEmpty{true} 				;
	bool containsNum{true} 			;
	bool containsSpecialChar{true} 	;
	
	isEmpty = Check_bEmptyString( A_strName ) ;
	
	if( isEmpty == true )
	{
		isValid = false ;
		
		cout<<endl <<"Invalid, you entered an empty name" ;
	}
	else
	{
		isValid = true ;
		
		containsNum = Check_bNumInString( A_strName ) ;
	
		if( containsNum == true )
		{
			isValid = false ;
		
			cout<<endl <<"Invalid, you entered number in the name" ;
		}
		else
		{
			isValid = true ;
			
			containsSpecialChar = Check_bSpecialCharInString( A_strName ) ;
	
			if( containsSpecialChar == true )
			{
				isValid = false ;
			
				cout<<endl <<"Invalid, you entered special character in the name" ;
			}
			else
			{
				isValid = true ;
			}
		}
		
	}
	
	return isValid ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

void Get_vPatientStatus( int & A_intPatientStatus )
{
	
	cout<<endl <<"Enter patient status(0-->regular, 1-->urgent): " ;
	cin>> A_intPatientStatus ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

bool Check_bValidPatientStatus( int A_intPatientStatus )
{
	
	bool isValid{true} ;
	
	if( (A_intPatientStatus != REGULAR) && (A_intPatientStatus != URGENT) )
	{
		isValid = false ;
	}
	else
	{
		isValid = true ;
	}
	
	return isValid ;
	
}

////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////













