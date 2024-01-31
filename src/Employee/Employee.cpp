#include "Employee/Employee.h"
#include <iostream>

//Parameterized constructor
Employee::Employee(const std::string name, int employeeID, char sex) : name(name), employeeID(employeeID), sex(sex) {

}

//Getters
std::string Employee::getName() const {
    return name;
}
/*
std::vector<std::string> getSpeech() const {
    return speech;
    Random Lines Generator etc.
}
*/
int Employee::getEmployeeID() const {
    return employeeID;
}

char Employee::getSex() const {
    return sex;
}