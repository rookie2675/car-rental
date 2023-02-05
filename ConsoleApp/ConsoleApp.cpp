#include <iostream>
#include <string>
#include "../Domain/Car.cpp"

int main()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    
    Car fiat;
    fiat.brand = "Fiat";
    fiat.model = "Bravo";

    Car peugeot;
    peugeot.brand = "Peugeot";
    peugeot.model = "206";

    Car honda;
    honda.brand = "Honda";
    honda.model = "Civic";

    const Car cars[3] = { fiat, peugeot, honda};
    for (int i = 0; i < 3; i++)
        std::cout << i + ". " << cars->brand[i] << "\n";
}