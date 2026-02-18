#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

/* ====================== Includes ====================== */
#include <string>

/* =================== Namespace Usage ================== */
using std::string;

/* ===================== Class Declarations =============== */
class Employee 
{
private:
    int id;
    string name;
    int age;
    double salary;
    char gender;

public:
    // Constructors
    Employee();
    Employee(int id, const string& name, int age, double salary, char gender);
    
    // Getters
    int get_id() const;
    string get_name() const;
    int get_age() const;
    double get_salary() const;
    char get_gender() const;
    
    // Setters
    void set_salary(double new_salary);
    void set_age(int new_age);
    
    // Utility methods
    void display() const;
    bool matches_name(const string& search_name) const;
    bool is_in_age_range(int min_age, int max_age) const;
};





#endif