#include "Kitchen/Chef.h"
#include <iostream>

Chef::Chef(const std::string name, int employeeID, char sex) : Employee(name, employeeID, sex) {

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

//Methods
void Chef::performDuties() const {
    std::cout << "Cook" << std::endl;
}

void Chef::talkShit() const {
    std::cout << "They can't even write an order correctly... " << std::endl;
    // std::cout << Method randomly choosing dialog;
}

void Chef::complain() const {
    std::cout << "What am I doing here..." << std::endl;
    // std::cout << 5 seconds delay, random generator of reaction
}

void Chef::handleOrder() const {
    //Take order from waiter and start cooking
}