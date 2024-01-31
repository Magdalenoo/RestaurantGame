#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>

class Employee {

    public:
    //Constructor
    Employee(const std::string name, int employeeID, char sex);

    //Getters
    std::string getName() const;
    int getEmployeeID() const;
    char getSex() const;

    //Again, no setters, a group of non-modifable employees will be created.

    //Deconstructor
    virtual ~Employee() = default;

    //Methods
    // Pure virtual function for specific duties; All employees have some duties, that cannot be specified now.
    virtual void performDuties() const = 0;
    virtual void talkShit() const = 0;
    virtual void complain() const = 0;
    virtual void handleOrder() const = 0;


    private:
    std::string name;
    int employeeID;
    char sex;

};


#endif