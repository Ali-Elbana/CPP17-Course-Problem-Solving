# Makefile for Employee Management System

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Object files
OBJS = main.o Employee.o Database.o GUI.o EmployeeManager.o

# Target executable
TARGET = employee_system

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile main.cpp
main.o: main.cpp EmployeeManager.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile Employee.cpp
Employee.o: Employee.cpp Employee.hpp
	$(CXX) $(CXXFLAGS) -c Employee.cpp

# Compile Database.cpp
Database.o: Database.cpp Database.hpp Employee.hpp
	$(CXX) $(CXXFLAGS) -c Database.cpp

# Compile GUI.cpp
GUI.o: GUI.cpp GUI.hpp Employee.hpp
	$(CXX) $(CXXFLAGS) -c GUI.cpp

# Compile EmployeeManager.cpp
EmployeeManager.o: EmployeeManager.cpp EmployeeManager.hpp Database.hpp GUI.hpp
	$(CXX) $(CXXFLAGS) -c EmployeeManager.cpp

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
