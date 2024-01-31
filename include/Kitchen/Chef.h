#ifndef CHEF_H
#define CHEF_H

#include <string>
#include "Employee/Employee.h"

class Chef : public Employee {
    public:
    Chef(const std::string name, int employeeID, char sex);
    
    void performDuties() const override;
    virtual void talkShit() const override;
    virtual void complain() const override;
    virtual void handleOrder() const override;
};

#endif