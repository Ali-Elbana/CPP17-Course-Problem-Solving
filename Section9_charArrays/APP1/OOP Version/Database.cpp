/* ====================== Includes ====================== */
#include "Database.hpp"
#include <iostream>
#include <algorithm>

/* =================== Namespace Usage ================== */
using namespace std;

/* ===================== Class Definitions =============== */

// Default constructor
Database::Database() : next_id(1)
{
	
}

// Add new employee
bool Database::add_employee(const string& name, int age, 
                             double salary, char gender)
{
	employees.push_back(Employee(next_id, name, age, salary, gender));
    next_id++;
    return true;
}

// Find employee by name - returns index or -1
int Database::find_by_name(const string& name) const 
{
	int result {-1};
	int i {0};
	
    for(i = 0; i < static_cast<int>(employees.size()); i++) 
	{
        if(employees[i].matches_name(name) == true) 
		{
			result = i;
            break;
        }
    }
	
	if(i >= static_cast<int>(employees.size())) // Finish looping on the DB and not found
	{
		result = -1;
	}
	
    return result;  
}

// Find employee by ID - returns index or -1
int Database::find_by_id(int id) const 
{
	int result {-1};
	int i {0};
	
    for(i = 0; i < static_cast<int>(employees.size()); i++) 
	{
        if(employees[i].get_id() == id) 
		{
			result = i;
            break;
        }
    }
	
	if(i >= static_cast<int>(employees.size())) // Finish looping on the DB and not found
	{
		result = -1;
	}

    return result; 
}

// Remove employee by ID
bool Database::remove_by_id(int id) 
{
	bool result {true};
	
    int index = find_by_id(id);
	
	if(index == -1)
	{
		result = false; // Not found
	}
	else
	{
		employees.erase(employees.begin() + index);
	}
	
    return result;
}

// Remove employee(s) by name - returns number of employees removed
int Database::remove_by_name(const string& name) 
{
    int removed {0};

    for(auto it = employees.begin(); it != employees.end(); ) 
	{
        if(it->matches_name(name)) 
		{
            it = employees.erase(it);  // erase returns next valid iterator
            removed++;
        } 
		else 
		{
            it++;
        }
    }

    return removed;
}

// Remove employees by age range - returns number of employees removed
int Database::remove_by_age_range(int min_age, int max_age) {
    int removed = 0;

    for(auto it = employees.begin(); it != employees.end(); ) 
	{
        if(it->is_in_age_range(min_age, max_age) == true) 
		{
            it = employees.erase(it); // erase returns next valid iterator
            removed++;
        } 
		else 
		{
            it++;
        }
    }

    return removed;
}

// Update salary by name
bool Database::update_salary_by_name(const string& name, double new_salary) 
{
	bool result {true};
	
    int index = find_by_name(name);
    
    if(index == -1) 
	{
        result = false;  // Not found
    }
	else
	{
		employees[index].set_salary(new_salary);
	}
    
    return result;
}

// Get employee at specific index
const Employee* Database::get_employee(int index) const 
{
	const Employee* result {nullptr};
	
    if(index >= 0 && index < static_cast<int>(employees.size())) 
	{
        result = &employees[index];
    }
	
    return result;
}

// Display all employees
void Database::display_all() const 
{
    if(employees.empty() == true) 
	{
        std::cout << "No employees in database.\n";
    }
	else
	{
		std::cout << "\n=== All Employees (" << employees.size() << ") ===\n";
		for(const auto& emp : employees) 
		{  
			emp.display();
		}
	}
}

