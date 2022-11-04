/*
 * @file 		Employee_Program.c
 * @author 		Ali El_bana (alitheboss922@gmail.com)
 * @brief 
 * @version 	0.1
 * @date 		2022-11-4
 * 
 * @copyright 	Copyright (c) 2022
 * 
 */

#include <iostream>

#include "Employee_Interface.hpp"
#include "Employee_Private.hpp"
#include "Employee_Config.hpp"

using namespace std ;


static int 		GS_s16Index 			{-1} ; // Is a variable for the index of the arrays.

static int 		GS_s16ReserveIndecesNum {0}  ; // This variable is used to reserve the number of the entred employees out of the arithemtic operations.

string 			G_strName	[100] 			 ; // Is an array of strings for the employees name.

unsigned int 	G_u16Age   	[100] 			 ; // Is a variable for the employees age.

unsigned int 	G_u16Salary	[100] 			 ; // Is a variable for the the employees salary.

string 			G_strGender	[100] 			 ; // Is an arrray of strings for the employees gender.


/*****************************************************************************************************************************************/
/****************************************************************************************************************************************/

/*
 * @Function  name 		:	vDispMainOption( ).
 * @Function  info. 	:	Display the main available windows of the Employee Program. 
 * @Function  input		:	None.
 * @@Function return	:	None.
 * 
 */
void vDispMainOption( void )
{

	cout<<endl ;
	cout<<"+===========================================================================================+\n"   ;
    cout<<"|                           Welcome to my \"Employee Program\"                          	    |\n"  ;
    cout<<"+===========================================================================================+\n"   ;
    cout<<"| 1 | Add new employee                                                                      |\n"   ;
    cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
    cout<<"| 2 | Print all employees                                                                   |\n"   ;
    cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
    cout<<"| 3 | Delete by age                                                                   	    |\n"  ;
    cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
	cout<<"| 4 | Uptade salary by name                                                                 |\n"   ;
	cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
    cout<<"| 0 | Exit                                                                                  |\n"   ;
    cout<<"+===========================================================================================+\n"   ;

}

/*****************************************************************************************************************************************/
/****************************************************************************************************************************************/

/*
 * @Function  name 		:	vAddNewEmployee( ).
 * @Function  info. 	:	Add new employee. 
 * @Function  input		:	None.
 * @@Function return	:	None.
 * 
 */
void vAddNewEmployee( void )
{

	GS_s16Index++ ; // Start from employee with index ZERO.

	GS_s16ReserveIndecesNum = GS_s16Index ; // Reserve the employees number.

	cout<<endl <<"Enter the name: "   ;
	getline( cin, G_strName[GS_s16Index] )  ; // Enter the employee name.
	getline( cin, G_strName[GS_s16Index] )  ; // Repeat it to ignore the issue happened rom cin>> ;
	
	cout<<endl <<"Enter the age: " 	  ;
	cin>> G_u16Age   [GS_s16Index] 	; // Enter the employee age.

	cout<<endl <<"Enter the salary: " ;
	cin>> G_u16Salary[GS_s16Index] 	; // Enter the employee salary.

	cout<<endl <<"Enter the gender: " ;
	getline( cin, G_strGender[GS_s16Index] ) ; // Enter the employee gender.
	getline( cin, G_strGender[GS_s16Index] ) ; // Repeat it to ignore the issue happened rom cin>> ;
	
}

/*****************************************************************************************************************************************/
/****************************************************************************************************************************************/

/*
 * @Function  name 		:	vPrintAllEmployees( ).
 * @Function  info. 	:	Print all employees. 
 * @Function  input		:	None.
 * @@Function return	:	None.
 * 
 */
void vPrintAllEmployees( void )
{

	do
	{
		cout<<endl <<"*****************************************************" <<endl ;
		
		cout<<G_strName		[GS_s16Index] <<",  " ; // Display the employee name.
		
		cout<<G_u16Age 		[GS_s16Index] <<",  " ; // Display the employee age.
	
		cout<<G_u16Salary	[GS_s16Index] <<",  " ; // Display the employee salary.
	
		cout<<G_strGender 	[GS_s16Index] <<".  " ; // Display the employee gender.
     
		cout<<endl ;
		
		GS_s16Index-- ; // Iterate on all the entered employees.
	 
	}while( GS_s16Index >= 0 ) ;

	GS_s16Index = GS_s16ReserveIndecesNum ; // Return the number of the entered employees.

}

/*****************************************************************************************************************************************/
/****************************************************************************************************************************************/

/*
 * @Function  name 		:	vDeleteEmployeeByAge( ).
 * @Function  info. 	:	Delete employee by age number. 
 * @Function  input		:	None.
 * @@Function return	:	None.
 * 
 */
void vDeleteEmployeeByAge( void )
{

	unsigned int L_u16StartAge 		{0}  ; // Is a variable for the starting range of the deleted age.

	unsigned int L_u16EndAge   		{0}  ; // Is a variable for the ending range of the deleted age.

	int 		 L_s16DeleteIndex	{-1} ; // Is a variable for making the index of this age rage = -1 to be out of the scope(deleted).


	cout<<endl <<"Enter the start age: " ;
	cin>>L_u16StartAge ;// Enter the start age of the range.

	cout<<endl <<"Enter the end age: " 	 ;
	cin>>L_u16EndAge   ; // Enter the end age of the range.

	while( GS_s16Index >= 0 )
	{
		
		// Find the input ages that falls in this range and delete them.
		if( (G_u16Age[GS_s16Index] >= L_u16StartAge) && (G_u16Age[GS_s16Index] <= L_u16EndAge) )
		{
			GS_s16Index = L_s16DeleteIndex ; // Push this employee out of the array.
			
			GS_s16ReserveIndecesNum-- ; // Decrese the array size from the deleted employees.
		}
		
		GS_s16Index-- ;
		
	}

	GS_s16Index = GS_s16ReserveIndecesNum ; // Return the number of the entered employees.

}

/*****************************************************************************************************************************************/
/****************************************************************************************************************************************/

/*
 * @Function  name 		:	vUpdateEmployeeSalaryByName( ).
 * @Function  info. 	:	Update the employee salary number. 
 * @Function  input		:	None.
 * @@Function return	:	None.
 * 
 */
void vUpdateEmployeeSalaryByName( void )
{

	string 			L_strName 		; // Is a string used to search for in the database.
	
	unsigned int 	L_u16NewSalary 	; // Is a varaible used to update the employee salary.
	
	cout<<endl <<"Enter the name: " 	  ;
	getline( cin, L_strName ) ; // Enter the employee name.
	getline( cin, L_strName ) ; // Repeat it to ignore the issue happened rom cin>> ;
	
	cout<<endl <<"Enter the new salary: " ;
	cin>>L_u16NewSalary 	  ; // Enter the employee new salary.

	while( GS_s16Index >= 0 )
	{
		
		// Find the name of the employee and update his salary.
		if( G_strName[GS_s16Index] == L_strName )
		{
			G_u16Salary[GS_s16Index] = L_u16NewSalary ; // Update the salary.
			
			break ;
		}
		
		GS_s16Index-- ;
		
	}

	GS_s16Index = GS_s16ReserveIndecesNum ; // Return the number of the entered employees.

}

/*****************************************************************************************************************************************/
/****************************************************************************************************************************************/














