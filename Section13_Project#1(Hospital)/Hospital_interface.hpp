/* FILENAME: Hospital_interface.hpp
*  Author:  Ali El-bana
*  Version:  V1.0
*  DATE:   Fri 07/21/2023
*/

using namespace std ;

////////////////////////////////////////////////////////////////////
////////////////////// Interfacing Macros /////////////////////////
//////////////////////////////////////////////////////////////////

#define MAX_SPECIALIZATION 	20
#define MAX_PATIENTS 		5

#define ADD 	1
#define PRINT 	2
#define NEXT 	3
#define EXIT 	4

#define REGULAR	0
#define URGENT 	1

////////////////////////////////////////////////////////////////////
///////////////////// Functions Declaration ///////////////////////
//////////////////////////////////////////////////////////////////

void Disp_vGUIWindow( void ) ;

////////////////////////////////////////////////////////////////

void Get_vWindowChoice( unsigned int & A_uintChoice ) ;

////////////////////////////////////////////////////////////////

bool Check_bValidWindowChoice( unsigned int A_uintChoice ) ;

////////////////////////////////////////////////////////////////

void Get_vSpecializationNum( unsigned int & A_uintSpecializationNum ) ;

////////////////////////////////////////////////////////////////

bool Check_bValidSpecializationNum( unsigned int A_uintSpecializationNum ) ;

////////////////////////////////////////////////////////////////

bool Check_bSpecializationQueueFull( unsigned int A_uintspecializationQueue[],
									 unsigned int A_uintSpecializationNum	
								   ) ;

////////////////////////////////////////////////////////////////

void Get_vPatientName( string & A_strName ) ;

////////////////////////////////////////////////////////////////

bool Check_bEmptyString( string A_strString ) ;

////////////////////////////////////////////////////////////////

bool Check_bNumInString( string A_strString ) ;

////////////////////////////////////////////////////////////////

bool Check_bSpecialCharInString( string A_strString ) ;

////////////////////////////////////////////////////////////////

bool Check_bValidPatientName( string A_strName ) ;

////////////////////////////////////////////////////////////////

void Get_vPatientStatus( int & A_intPatientStatus ) ;

////////////////////////////////////////////////////////////////

bool Check_bValidPatientStatus( int A_intPatientStatus ) ;

////////////////////////////////////////////////////////////////

void Add_vPatient( unsigned int A_uintSpecializationNum		,
				   int A_intPatientStatus[][MAX_PATIENTS]	,  
				   unsigned int A_uintspecializationQueue[]	,
				   string patientsNames[][MAX_PATIENTS]
				 ) ;

////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////










