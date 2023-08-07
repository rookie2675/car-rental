#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;

public:
    Car(std::string brand, std::string model);
    std::string getBrand();
    std::string getModel();
};

#endif // CAR_H
