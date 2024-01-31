#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>
#include <vector>

enum class DishType {
    APPETIZER,
    MAIN_DISH,
    PASTA,
    DESSERT
};


class FoodItem {

    public:
    FoodItem(const std::string& name, double price, DishType dishType);

    std::string getName() const;
    double getPrice() const;
    DishType getDishType() const;

    private:
    std::string name;
    double price;
    DishType dishType;
};

#endif