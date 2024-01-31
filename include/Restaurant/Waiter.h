#ifndef WAITER_H
#define WAITER_H

#include <string>
#include "Employee/Employee.h"

class Waiter : public Employee {

    public:
    Waiter(const std::string name, int employeeID, char sex);

    std::string getName() const;
    int getEmployeeID() const;
    char getEmployeeSex() const;
     
    void performDuties() const override;
    
    void talkShit() const override;
    void complain() const override;
    void handleOrder() const override;
    void argue() const;
};

#endif