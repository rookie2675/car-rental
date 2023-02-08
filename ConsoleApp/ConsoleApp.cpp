using namespace std;

#include <iostream>
#include <string>
#include <regex>

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
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    regex expression("/^[a-z ,.'-]+$/i");

    if (regex_match(name, expression))
        cout << "The name is valid";
    
    Car cars[] = 
    { 
        Car("Fiat", "Bravo"), 
        Car("Peugeot", "206"), 
        Car("Honda", "Civic") }
    ;

    printCars(cars);
}