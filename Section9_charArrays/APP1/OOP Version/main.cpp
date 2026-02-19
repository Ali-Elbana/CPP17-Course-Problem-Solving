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
* Not all cases are handeled yet
============================================================
*/

/* ====================== Includes ====================== */
#include <iostream>
#include <stdlib.h>
#include "GUI.hpp"
#include "EmployeeManager.hpp"

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
	
    // ----- Logic -----

	EmployeeManager manager;
    manager.run();

    // ----- End -----
    return 0;
}

/* ======================= End of File =================== */
