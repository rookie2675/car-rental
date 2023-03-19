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

        string getModel() {
            return model;
        }
};

class User {
    private:
        string name;

    public:
        void setName(string name) {
            regex expression("^[A-Za-z]{1,20}$");

            if (!regex_match(name, expression))
                throw invalid_argument("The following name is not valid: " + this->name);

            this->name = name;
        }

        string getName() {
            return name;
        }
};

void printCars(Car cars[]) {
    for (int i = 0; i < 3; i++)
        std::cout << i + 1 << ". " << cars[i].getBrand() << endl;
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

    short option;
    cout << "Please choose one of the cars above: ";
    cin >> option;
    cout << "You have chosen " << cars[option].getBrand() << " " << cars[option].getModel();
}