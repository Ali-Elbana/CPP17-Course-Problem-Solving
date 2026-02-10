/*
============================================================
* Project: [Employee program]
* File:    [main.cpp]
* Author:  [Ali El-bana]
* Date:    [2026-02-10]
* Version: [v1.0]
------------------------------------------------------------
* Description:
* [Help our factory in managing his employees. Create a program that does the
following:
■ 1) Add new employee
■ 2) Print all employees
■ 3) Delete by age
■ 4) Delete by name
■ 5) Delete by ID
■ 6) Update Salary by name]
------------------------------------------------------------
* Notes:
* [Any important notes, limitations, or assumptions]
============================================================
*/

/* ====================== Includes ====================== */
#include <iostream>
#include <stdlib.h>
#include "Employee.hpp"


/* =================== Namespace Usage ================== */
using std::cout;
using std::cin;
using std::endl;
// [Add more as needed]

/* =================== Global Constants ================= */


/* ==================== Main Application ================= */
int main(void) 
{
    // ----- Initialization -----
    system("cls");
    cout << "Employee program started...\n";
	
    int selectedOption {0};
	
    // ----- Logic -----
    GUI gui;
	gui.display_options();
	selectedOption = gui.get_option();
	
	switch(selectedOption)
	{
		case Menu::EXIT:
            std::cout << "\nExit selected" << std::endl;
            break;
            
        case Menu::ADD_EMPLOYEE:
            std::cout << "\nAdd Employee selected" << std::endl;
            break;
            
        case Menu::PRINT_EMPLOYEES:
            std::cout << "\nPrint Employees selected" << std::endl;
            break;
            
        case Menu::DELETE_BY_AGE:
            std::cout << "\nDelete by Age selected" << std::endl;
            break;
            
        case Menu::DELETE_BY_NAME:
            std::cout << "\nDelete by Name selected" << std::endl;
            break;
            
        case Menu::DELETE_BY_ID:
            std::cout << "\nDelete by ID selected" << std::endl;
            break;
            
        case Menu::UPDATE_SALARY:
            std::cout << "\nUpdate Salary selected" << std::endl;
            break;
            
        default:
            std::cout << "\nInvalid choice!" << std::endl;
            break;
	}
	
    // ----- End -----
    return 0;
}

/* ======================= End of File =================== */
