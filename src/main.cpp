#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <random>

#include "Restaurant/Waiter.h"
#include "Kitchen/Chef.h"
#include "Restaurant/Customer.h"
#include "Restaurant/FoodItem.h"

int main() {

    std::srand(std::time(0));

    //List of waiters. 3 will be randomly chosen for a shift.
    std::vector<Waiter> waiters = {
        Waiter("Pam", 1 ,'F'),
        Waiter("Jim", 2 ,'M'),
        Waiter("Dwight", 3, 'M'),
        Waiter("Oscar", 4, 'M'),
        Waiter("Erin", 5, 'F')
    };

    //List of chefs. One will be randomly chosen.
    std::vector<Chef> chefs = {
        Chef("Kevin", 6, 'M'),
        Chef("Creed", 7, 'M'),
        Chef("Meredith", 8, 'F')
    };

    //Shuffle vectors
    // In future
    Chef todaysChef = chefs[0];

    std::vector<FoodItem> menu = {
        FoodItem("Antipasti", 10.99, DishType::APPETIZER),
        FoodItem("Caesar Salad", 8.99, DishType::APPETIZER),
        FoodItem("Spaghetti Bolognese", 12.99, DishType::PASTA),
        FoodItem("Zuppa di Pesce", 10.99, DishType::MAIN_DISH),
        FoodItem("Tiramisu", 6.99, DishType::DESSERT)
    };

    std::string playerName;
    char playerSex;
    bool isRegular;
    char regular;

    std::cout << "Welcome to the Restauran Experience!\n";
    std::cout << "We're so glad the you've joined us. But first we need some information about you.\n";
    std::cout << "Enter your name: \n";
    std::cin >> playerName;
    std::cout << "Enter your sex (M/F): \n";
    std::cin >> playerSex;
    std::cout << "Great! Nice to meet you " << playerName << ". My name is "<< waiters[0].getName() << " and I will be your waiter today.\n";
    std::cout << waiters[0].getName() << ": Is this your first time here? (Y/N): \n";

    std::cin >> regular; 
    if (regular == 'Y' || regular == 'y'){
        isRegular = true;
    } else if (regular == 'N' || regular == 'n'){
        isRegular = false;
    }
    
    Customer playerCustomer(playerName, playerSex, isRegular);

    if (isRegular == true){
        std::cout << waiters[0].getName() <<": Great! I'll give you our special menu for regular clients!\n";
        playerCustomer.viewMenu(menu);
    } else {
        std::cout << waiters[0].getName() << ": Perfect! Here's the menu.\n";
        playerCustomer.viewMenu(menu);
    }

}