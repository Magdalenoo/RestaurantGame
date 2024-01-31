#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "FoodItem.h"

class Customer {
    
    public:
    //Constructor
    Customer(const std::string& name, char sex, bool isRegular);

    //Getters
    std::string getName() const;
    char getSex() const;
    bool getRegular() const;
    std::string getTypeString(DishType dishType) const;

    //No setters as I don't want to modify Customer class after creation.

    //Methods
    void viewMenu(const std::vector<FoodItem>& menu) const;
    void placeOrder(std::vector<FoodItem>& menu, const std::string foodName, int quantity) const;
    void feedback() const;
    void argue() const;
    void sendFood() const;
    void leaveTip() const;

    private:
    std::string name;
    char sex;
    bool isRegular;

};


#endif