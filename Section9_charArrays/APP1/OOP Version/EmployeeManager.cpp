/* ====================== Includes ====================== */
#include "EmployeeManager.hpp"
#include <iostream>
#include <string>

/* =================== Namespace Usage ================== */
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

namespace Menu 
{
    constexpr int EXIT = 0;
    constexpr int ADD_EMPLOYEE = 1;
    constexpr int PRINT_EMPLOYEES = 2;
    constexpr int DELETE_BY_AGE = 3;
    constexpr int DELETE_BY_NAME = 4;
    constexpr int DELETE_BY_ID = 5;
    constexpr int UPDATE_SALARY = 6;
}

/* ===================== Class Definitions =============== */

// Main program loop
void EmployeeManager::run() 
{
    cout << "Welcome to Employee Management System!" << endl;
	
	int choice{0};
	
	do
	{
		gui.clear_screen();
		gui.display_menu();
        choice = gui.get_menu_choice();
		
		switch(choice)
		{
			case Menu::EXIT:
				cout << "\nThank you for using Employee Management System!" << endl;
				cout << "Goodbye!" << endl;
				break;
				
			case Menu::ADD_EMPLOYEE:
				handle_add_employee();
				break;
				
			case Menu::PRINT_EMPLOYEES:
				handle_print_all();
				break;
				
			case Menu::DELETE_BY_AGE:
				handle_delete_by_age();
				break;
				
			case Menu::DELETE_BY_NAME:
				handle_delete_by_name();
				break;
				
			case Menu::DELETE_BY_ID:
				handle_delete_by_id();
				break;
				
			case Menu::UPDATE_SALARY:
				handle_update_salary();
				break;
				
			default:
				gui.display_error_message("Invalid choice!");
				break;
		}
		
	}while(choice != Menu::EXIT);
}

// ==================== HANDLER METHODS ====================

// Handle adding a new employee
void EmployeeManager::handle_add_employee() 
{
	string name;
    int age;
    double salary;
    char gender;
    
    gui.get_employee_input(name, age, salary, gender);
    
    if(database.add_employee(name, age, salary, gender)) 
	{
        gui.display_success_message("Employee added successfully!");
    } 
	else 
	{
        gui.display_error_message("Failed to add employee.");
    }
}

// Handle printing all employees
void EmployeeManager::handle_print_all() 
{
    database.display_all();
}

// Handle deleting employees by age range
void EmployeeManager::handle_delete_by_age() 
{
    if(database.is_empty() == true) 
	{
        gui.display_info_message("No employees in database.");
    }
	else
	{
		int min_age{0};
		int max_age{0};
		
		cout << "\n--- Delete by Age Range ---" << endl;
		gui.get_age_range(min_age, max_age);
		
		int removed = database.remove_by_age_range(min_age, max_age);
		
		if(removed > 0) 
		{
			gui.display_success_message(to_string(removed) + " employee(s) deleted successfully!");
		} 
		else 
		{
			gui.display_info_message("No employees found in the specified age range.");
		}
	}
}

// Handle deleting employees by name
void EmployeeManager::handle_delete_by_name() 
{
    if(database.is_empty() == true) 
	{
        gui.display_info_message("No employees in database.");
    }
	else
	{
		cout << "\n--- Delete by Name ---" << endl;
		string name = gui.get_name_input();
		
		int removed = database.remove_by_name(name);
		
		if(removed > 0) 
		{
			gui.display_success_message(to_string(removed) + " employee(s) with name '" + name + "' deleted successfully!");
		} 
		else 
		{
			gui.display_info_message("No employee found with name '" + name + "'.");
		}
	}
}

// Handle deleting employee by ID
void EmployeeManager::handle_delete_by_id() 
{
    if(database.is_empty() == true) 
	{
        gui.display_info_message("No employees in database.");
    }
    else
	{
		cout << "\n--- Delete by ID ---" << endl;
		int id = gui.get_id_input();
		
		if(database.remove_by_id(id) == true) 
		{
			gui.display_success_message("Employee with ID " + to_string(id) + " deleted successfully!");
		} 
		else 
		{
			gui.display_error_message("No employee found with ID " + to_string(id) + ".");
		}
	}
}

// Handle updating salary by name
void EmployeeManager::handle_update_salary() 
{
    if(database.is_empty() == true) 
	{
        gui.display_info_message("No employees in database.");
    }
	else
	{
		cout << "\n--- Update Salary by Name ---" << endl;
		string name = gui.get_name_input();
		double new_salary = gui.get_salary_input();
		
		if(database.update_salary_by_name(name, new_salary) == true)
		{
			gui.display_success_message("Salary updated successfully for employee '" + name + "'!");
		} 
		else 
		{
			gui.display_error_message("No employee found with name '" + name + "'.");
		}
	}
}

