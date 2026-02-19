#ifndef EMPLOYEE_MANAGER_HPP
#define EMPLOYEE_MANAGER_HPP

/* ====================== Includes ====================== */
#include "Database.hpp"
#include "GUI.hpp"

/* ===================== Class Declarations =============== */
class EmployeeManager 
{
private:
    Database database;
    GUI gui;
    
    // Handler methods for each menu option
    void handle_add_employee();
    void handle_print_all();
    void handle_delete_by_age();
    void handle_delete_by_name();
    void handle_delete_by_id();
    void handle_update_salary();

public:
    // Constructor
    EmployeeManager() = default;
    
    // Main program loop
    void run();
};

#endif
