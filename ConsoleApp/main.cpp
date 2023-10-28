#include <iostream>
#include <string>
#include <regex>
#include "car.h"
#include "user.h"

void printCars(const std::vector<Car>& cars) {

    int i = 1;

    for (const auto& car : cars) 
    {
        std::cout << i++ << ". " << car.getBrand() << " " << car.getModel() << std::endl;
    }
}

void printChosenCar(const Car& car) 
{
    std::cout << "You have chosen " << car.getBrand() << " " << car.getModel();
}

std::string promptForName() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    return name;
}

std::vector<Car> loadCars() 
{
    return {
        Car("Fiat", "Bravo"),
        Car("Peugeot", "206"),
        Car("Honda", "Civic")
    };

}

int main()
{
    User user;

    do
    {
        try 
        { 
            user.setName(promptForName());
        }
        catch (const std::exception & exception) 
        { 
            std::cout << exception.what() << std::endl;
        }
    } while (user.getName().empty());

    std::vector<Car> cars = loadCars();

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

    printChosenCar(selectedCar);

    return 0;
}