#ifndef DATABASE_HPP
#define DATABASE_HPP

/* ====================== Includes ====================== */
#include "Employee.hpp"
#include <vector>

/* =================== Namespace Usage ================== */
using std::string;
using std::vector;

/* ===================== Class Declarations =============== */
class Database {
private:

    vector<Employee> employees;
	
    int next_id;

public:
    // Constructor
    Database();
    
    // Employee management methods
    bool add_employee(const string& name, int age, double salary, char gender);
    bool remove_by_id(int id);
    int remove_by_name(const string& name);
    int remove_by_age_range(int min_age, int max_age);
    
    // Search methods
    int find_by_name(const string& name) const;
    int find_by_id(int id) const;
    
    // Update methods
    bool update_salary_by_name(const string& name, double new_salary);
    
    // Query methods
    int get_count() const { return employees.size(); }
    bool is_empty() const { return employees.empty(); }
    const Employee* get_employee(int index) const;
    
    // Display method
    void display_all() const;
};

#endif
