#include "Restaurant/FoodItem.h"
#include <iostream>


FoodItem::FoodItem(const std::string& name, double price, DishType dishType) : name(name), price(price), dishType(dishType) {

}

std::string FoodItem::getName() const {
    return name;
}

double FoodItem::getPrice() const {
    return price;
}

DishType FoodItem::getDishType() const {
    return dishType;
}