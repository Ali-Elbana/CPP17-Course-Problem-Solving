#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

/* =================== Namespaces ================= */
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
/* =================== Templates ================= */
template<typename T>
constexpr bool IsValidOption(T option) 
{
    return (option >= static_cast<T>(0) && option <= static_cast<T>(6));
}
/* ===================== Class Declarations =============== */
// ▼▼▼ Class: GUI ▼▼▼
class GUI 
{
	public:
	// Methods
	void display_options(void);
	int get_option(void);
};
// ▲▲▲ End of GUI ▲▲▲





#endif