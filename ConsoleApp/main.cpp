#include <iostream>
#include <string>
#include <regex>
#include "car.h"
#include "user.h"

void printCars(std::vector<Car>& cars) {

    int i = 1;

    for (auto& car : cars) 
    {
        std::cout << i++ << ". " << car.getBrand() << " " << car.getModel() << std::endl;
    }
}

int main()
{
    User user = User();

    do
    {
        std::string name;
        std::cout << "Please enter your name: ";
        std::cin >> name;

        try { user.setName(name); }
        catch (std::exception & exception) { std::cout << exception.what() << std::endl;}
    } while (user.getName().empty());

    std::vector<Car> cars = 
    { 
        Car("Fiat", "Bravo"), 
        Car("Peugeot", "206"), 
        Car("Honda", "Civic") }
    ;

    printCars(cars);
    std::string option;
    int index;

    do {
        std::cout << "Please choose one of the cars above: ";
        std::getline(std::cin, option);
    } while (!isdigit(option[0]));

    index = stoi(option);
    index--;
    Car& selectedCar = cars[index];

    std::cout << "You have chosen " << selectedCar.getBrand() << " " << selectedCar.getModel();

    return 0;
}