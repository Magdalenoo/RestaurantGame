#include <iostream>
#include "Restaurant/Waiter.h"

Waiter::Waiter(const std::string name, int employeeID, char sex) : Employee(name, employeeID, sex) {

}

//Getters
std::string Employee::getName() const {
    return name;
}

int Employee::getEmployeeID() const {
    return employeeID;
}

char Employee::getSex() const {
    return sex;
}

//Methods
void Waiter::performDuties() const {
    std::cout << "Welcome in our restaurant! Table for one?" << std::endl;
}

void Waiter::talkShit() const {
    std::cout << "Talking shit about customers " << std::endl;
    // std::cout << Method randomly choosing dialog;
}

void Waiter::complain() const {
    std::cout << "Waiter is listening your complains with emptiness in their eyes..." << std::endl;
    // std::cout << 5 seconds delay, random generator of reaction
}

void Waiter::handleOrder() const {
    //Take order from customer and give it to Chef
}

void Waiter::argue() const {
    //Argue with cutomer, random generator line
}