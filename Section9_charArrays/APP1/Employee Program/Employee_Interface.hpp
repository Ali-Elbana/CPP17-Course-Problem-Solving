/*
 * @file 		Employee_Interface.hpp
 * @author 		Ali El_bana (alitheboss922@gmail.com)
 * @brief 
 * @version 	0.1
 * @date 		2022-11-4
 * 
 * @copyright 	Copyright (c) 2022
 * 
 */



	/*------------------------------------------------The main Macros---------------------------------------------------------*/
	
	// Is a macro for defining Add new employee choice number of the Employee Program options.
	#define ADD_EMPLOYEE  	1
	
	// Is a macro for defining Print all employees number of the Employee Program options.
	#define PRINT_EMPLOYEES 2
	
	// Is a macro for defining Delete employee by age number of the Employee Program options.
	#define DELETE 			3
	
	// Is a macro for defining Update the employee salary number of the Employee Program options.
	#define UPTADE_SALARY 	4
	
	// Is a macro for defining Exit choice number of the Employee Program options.
	#define Exit   						0
	

	/*------------------------------------------------The Conditional Macros---------------------------------------------------------*/
	
	// Is a macro for a condition when the user selects a number other than the available ones (0,1,2,3,4).
	#define NOT_AN_OPTION	( (L_u16SelectOption !=  1 ) && ( L_u16SelectOption !=  2 ) && ( L_u16SelectOption !=  3 ) && ( L_u16SelectOption !=  4 ) && ( L_u16SelectOption !=  0 ) )
	
	
	/*---------------------------------------------The fuctions prototype part------------------------------------------------*/
	
	// @Function  info. : Display the main available windows of the Employee Program.
	void vDispMainOption			 ( void ) 	;
	
	// @Function  info. : Add new employee.
	void vAddNewEmployee			 ( void ) 	;
	
	// @Function  info. : Print all employees.
	void vPrintAllEmployees          ( void ) 	;

	// @Function  info. : Delete employee by age number.
	void vDeleteEmployeeByAge        ( void ) 	;

	// @Function  info. : Update the employee salary number.
	void vUpdateEmployeeSalaryByName ( void ) 	;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	