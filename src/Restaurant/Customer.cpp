#include "Restaurant/Customer.h"
#include <iostream>

// Parameterized constructor
Customer::Customer(const std::string& name, char sex, bool isRegular) : name(name), sex(sex), isRegular(isRegular){

}

//Getters
std::string Customer::getName() const {
    return name;
}

char Customer::getSex() const {
    return sex;
}

bool Customer::getRegular() const {
    return isRegular;
}

//Methods
void Customer::viewMenu(const std::vector<FoodItem>& menu) const {
    
    std::cout << "Menu: " << std::endl;
    for (DishType dishType : {DishType::APPETIZER, DishType::MAIN_DISH, DishType::PASTA, DishType::DESSERT}) {
        std::cout << "----- " << getTypeString(dishType) << " -----\n";
        for (const auto& item : menu) {
            if (item.getDishType() == dishType) {
                std::cout << item.getName() << " - $" << item.getPrice() << std::endl;
            }
        }
    }
    
}

std::string Customer::getTypeString(DishType type) const {
    switch (type) {
        case DishType::APPETIZER:
            return "Appetizers";
        case DishType::MAIN_DISH:
            return "Main Dishes";
        case DishType::PASTA:
            return "Pasta";
        case DishType::DESSERT:
            return "Desserts";
        default:
            return "Unknown Type";
    }
}

void Customer::placeOrder(std::vector<FoodItem>& menu, const std::string foodName, int quantity) const {
    for (auto& item : menu) {
        if(item.getName() == foodName) {
            std::cout << name << ": " <<"I'd like to order: " << quantity << " " << foodName << "\n";
        }
    }
    std::cout << "Sorry, " << foodName << " is not on the menu... \n";
}

void Customer::feedback() const {
    //give feedback (probably bad) to waiter
}

void Customer::argue() const {
    //Argue with a waiter 
}

void Customer::sendFood() const {
    //Based on randomly generated quality of food
    //Shows up only if the food quality is medium - nasty
}

void Customer::leaveTip() const {
    //Depends on arguing with waiter and quality of the food
    // In extreme cases you can also run away without paying
}
