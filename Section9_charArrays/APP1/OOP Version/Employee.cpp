/* ====================== Includes ====================== */
#include "Employee.hpp"
#include <iostream>
#include <iomanip>

/* =================== Namespace Usage ================== */
using namespace std;

/* ===================== Class Definitions =============== */
// Default constructor
Employee::Employee() : id(0), name(""), age(0), salary(0.0), gender('M') 
{
	
}

// Parameterized constructor
Employee::Employee(int id, const string& name, int age, double salary, char gender) 
    : id(id), name(name), age(age), salary(salary), gender(gender) 
{
	
}

// Getters
int Employee::get_id() const 
{
    return id;
}

string Employee::get_name() const 
{
    return name;
}

int Employee::get_age() const 
{
    return age;
}

double Employee::get_salary() const 
{
    return salary;
}

char Employee::get_gender() const 
{
    return gender;
}

// Setters
void Employee::set_salary(double new_salary) 
{
    salary = new_salary;
}

void Employee::set_age(int new_age) 
{
    age = new_age;
}

// Display employee information
void Employee::display() const 
{
    cout << "ID: " << setw(5) << left << id 
         << " | Name: " << setw(20) << left << name 
         << " | Age: " << setw(3) << age 
         << " | Salary: $" << setw(10) << fixed << setprecision(2) << salary 
         << " | Gender: " << gender << endl;
}

// Check if name matches (case-insensitive)
bool Employee::matches_name(const string& search_name) const 
{
    return name == search_name;
}

// Check if age is in range
bool Employee::is_in_age_range(int min_age, int max_age) const 
{
    return age >= min_age && age <= max_age;
}