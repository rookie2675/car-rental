using namespace std;

#include <iostream>
#include <string>
#include <regex>
#include "car.h"
#include "user.h"

void printCars(Car cars[]) {
    for (int i = 0; i < 3; i++)
        std::cout << i + 1 << ". " << cars[i].getBrand() << " " << cars[i].getModel() << endl;
}

int main()
{
    User user = User();

    do
    {
        string name;
        cout << "Please enter your name: ";
        cin >> name;

        try { user.setName(name); }
        catch (exception & exception) { cout << exception.what() << endl;}
    } while (user.getName().empty());

    Car cars[] = 
    { 
        Car("Fiat", "Bravo"), 
        Car("Peugeot", "206"), 
        Car("Honda", "Civic") }
    ;

    printCars(cars);
    string option;
    int index;

    do {
        cout << "Please choose one of the cars above: ";
        getline(cin, option);
    } while (!isdigit(option[0]));

    index = stoi(option);
    cout << "You have chosen " << cars[index].getBrand() << " " << cars[index].getModel();
}