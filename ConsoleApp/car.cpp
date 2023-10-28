#include "car.h"

Car::Car(std::string brand, std::string model) 
{
    this->brand = brand;
    this->model = model;
}

std::string Car::getBrand() const 
{
    return brand;
}

std::string Car::getModel() const
{
    return model;
}