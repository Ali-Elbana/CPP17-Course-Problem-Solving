/* ====================== Includes ====================== */
#include <iostream>
#include "GUI.hpp"

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
// ▼▼▼ Class: GUI ▼▼▼
void GUI::display_options(void)
{
	cout<<endl ;
	cout<<"+===========================================================================================+\n"   ;
    cout<<"|                           Welcome to my \"Employee Program\"                          	    |\n"  ;
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int GUI::get_option(void)
{
	int inputOption {0};
	
	cout << endl <<"\nKindly, select the option number: ";
	cin >> inputOption;
	
	while(IsValidOption(inputOption) == false)
	{
		cout << "\n\nInvalid choice. Please enter a number from 0 to 6.\n";
	
		cout << endl << "\nKindly, select the option number: ";
		cin >> inputOption;
	}
	
	return inputOption;
	
}

// ▲▲▲ End of GUI ▲▲▲