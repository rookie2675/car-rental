#ifndef CAR_H
#define CAR_H

#include <string>

class Car 
{
    private:
        std::string brand;
        std::string model;

    public:
        Car(std::string brand, std::string model);
        std::string getBrand() const;
        std::string getModel() const;
};

#endif // CAR_H