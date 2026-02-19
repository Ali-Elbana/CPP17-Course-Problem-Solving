#ifndef GUI_HPP
#define GUI_HPP

/* ====================== Includes ====================== */
#include "Employee.hpp"

/* ===================== Class Declarations =============== */
class GUI 
{
public:
    // Menu display
    void display_menu() const;
    
    // Input methods
    int get_menu_choice() const;
    void get_employee_input(string& name, int& age, double& salary, char& gender) const;
    string get_name_input() const;
    void get_age_range(int& min_age, int& max_age) const;
    int get_id_input() const;
    double get_salary_input() const;
    
    // Display methods
    void display_employee(const Employee& emp) const;
    void display_success_message(const string& message) const;
    void display_error_message(const string& message) const;
    void display_info_message(const string& message) const;
    
    // Utility
    void pause() const;
    void clear_screen() const;
};

#endif