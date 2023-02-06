using namespace std;

#include <iostream>
#include <string>

class Car 
{
    public:
    string brand;
    string model;

    Car(string brand, string model)
    {
        this->brand = brand;
        this->model = model;
    }
};

void printCars(Car cars[]) {
    for (int i = 0; i < 3; i++)
        std::cout << i + 1 << ". " << cars[i].brand << "\n";
}

int main()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    
    Car cars[] = 
    { 
        Car("Fiat", "Bravo"), 
        Car("Peugeot", "206"), 
        Car("Honda", "Civic") }
    ;

    printCars(cars);
}