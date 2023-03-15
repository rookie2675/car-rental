using namespace std;

#include <iostream>
#include <string>
#include <regex>

class Car {
    private:
        string brand;
        string model;

    public:
        Car(string brand, string model)
        {
            this->brand = brand;
            this->model = model;
        }

        string getBrand() {
            return brand;
        }
};

class User {
    private:
        string name;

        void setName(string name) {
            regex expression("/^[a-z ,.'-]+$/i");

            if (!regex_match(name, expression))
                throw invalid_argument("The following name is not valid: " + this->name);

            this->name = name;
        }

    public:
        User(string name) {
            setName(name);
        }

        string getName() {
            return name;
        }
};

void printCars(Car cars[]) {
    for (int i = 0; i < 3; i++)
        std::cout << i + 1 << ". " << cars[i].getBrand() << "\n";
}

int main()
{
    string name;
    cout << "Please enter your name: ";
    cin >> name;

    User user = User(name);
    cout << "Welcome " << user.getName();
    
    Car cars[] = 
    { 
        Car("Fiat", "Bravo"), 
        Car("Peugeot", "206"), 
        Car("Honda", "Civic") }
    ;

    printCars(cars);
}