/* ====================== Includes ====================== */
#include "GUI.hpp"
#include <iostream>

/* =================== Namespace Usage ================== */
using std::cout;
using std::cin;
using std::endl;

/* =================== Templates ================= */
template<typename T>
constexpr bool IsValidOption(T option) 
{
    return (option >= static_cast<T>(0) && option <= static_cast<T>(6));
}

/* ===================== Class Definitions =============== */

// Display the main menu
void GUI::display_menu() const
{
	cout<<endl ;
	cout<<"+===========================================================================================+\n"   ;
    cout<<"|             		Welcome to \"Employee Management System\"                             |\n"  ;
    cout<<"+===========================================================================================+\n"   ;
    cout<<"| 1 | Add new employee                                                                      |\n"   ;
    cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
    cout<<"| 2 | Print all employees                                                                   |\n"   ;
    cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
    cout<<"| 3 | Delete by age                                                                   	    |\n"  ;
    cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
    cout<<"| 4 | Delete by name                                                                   	    |\n"  ;
	cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
    cout<<"| 5 | Delete by ID                                                                   	    |\n"  ;
    cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
	cout<<"| 6 | Uptade salary by name                                                                 |\n"   ;
	cout<<"|---|---------------------------------------------------------------------------------------|\n"   ;
    cout<<"| 0 | Exit                                                                                  |\n"   ;
    cout<<"+===========================================================================================+\n"   ;
}

// Get menu choice with validation
int GUI::get_menu_choice() const
{
	int inputOption {0};
	
	cout << endl <<"\nKindly, select the option number (0-6): ";
	cin >> inputOption;
	
	while(IsValidOption(inputOption) == false)
	{
		cout << "\n\nInvalid choice. Please enter a number from 0 to 6.\n";
	
		cout << endl << "\nKindly, select the option number: ";
		cin >> inputOption;
	}
	
	return inputOption;	
}

// Get employee input from user
void GUI::get_employee_input(string& name, int& age, double& salary, char& gender) const
{
	cout << "\n--- Add New Employee ---" << endl;
	
	cout << "Enter name: ";
	getline(cin, name);
	getline(cin, name); // Repeat it to ignore the enter (\n)
	// Validate name is not empty
    while(name.empty() == true) 
	{
        cout << "Name cannot be empty. Please enter name: ";
        getline(cin, name);
    }
	
	// Get age with validation
	cout << "Enter age: ";
	cin >> age;
	while(age < 16 || age > 75) 
	{
        cout << "Invalid age. Please enter age between 16 and 75: ";
        cin >> age;
    }
	
	// Get salary with validation
	cout << "Enter salary: ";
	cin >> salary;
	while(salary < 0) 
	{
        cout << "Invalid salary. Please enter a positive number: ";
        cin >> salary;
    }
	
	// Get gender with validation
    cout << "Enter gender (M/F): ";
	cin >> gender;
	while(gender != 'M' && gender != 'F' && gender != 'm' && gender != 'f') 
	{
        cout << "Invalid gender. Please enter M or F: ";
        cin >> gender;
    }
	
	// Convert to uppercase
    if (gender == 'm') gender = 'M';
    if (gender == 'f') gender = 'F';
}

// Get name input
string GUI::get_name_input() const
{
	string name{""};
	cout << "Enter name: ";
	getline(cin, name);
	getline(cin, name); // Repeat it to ignore the enter (\n)
	// Validate name is not empty
    while(name.empty() == true) 
	{
        cout << "Name cannot be empty. Please enter name: ";
        getline(cin, name);
    }
	
	return name;
}

// Get age range input
void GUI::get_age_range(int& min_age, int& max_age) const
{
	cout << "Enter minimum age: ";
	cin >> min_age;
	while(min_age < 0) 
	{
        cout << "Invalid age. Please enter a positive number: ";
        cin >> min_age;
    }
	
	cout << "Enter maximum age: ";
	cin >> max_age;
	while(max_age < min_age) 
	{
        cout << "Invalid age. Please enter age >= " << min_age << ": ";
        cin >> max_age;
    }
}

// Get ID input
int GUI::get_id_input() const
{
	int id{0};
    cout << "Enter employee ID: ";
	cin >> id;
	while(id < 1) 
	{
        cout << "Invalid ID. Please enter a positive number: ";
        cin >> id;
    }
	return id;
}

// Get salary input
double GUI::get_salary_input() const
{
	double salary{0};
	cout << "Enter salary: ";
	cin >> salary;
	while(salary < 0) 
	{
        cout << "Invalid salary. Please enter a positive number: ";
        cin >> salary;
    }
	return salary;
}

// Display single employee
void GUI::display_employee(const Employee& emp) const 
{
    emp.display();
}

// Display success message
void GUI::display_success_message(const string& message) const 
{
    cout << "\n[SUCCESS] " << message << endl;
}

// Display error message
void GUI::display_error_message(const string& message) const 
{
    cout << "\n[ERROR] " << message << endl;
}

// Display info message
void GUI::display_info_message(const string& message) const 
{
    cout << "\n[INFO] " << message << endl;
}

// Pause for user to read
void GUI::pause() const 
{
    cout << "\nPress Enter to continue...";
    cin.get(); // read one single char (\n)
}

// Clear screen (simple version - prints newlines)
void GUI::clear_screen() const 
{
    // For cross-platform compatibility, we just print newlines
    for(int i = 0; i < 3; i++) 
	{
        cout << endl;
    }
}

