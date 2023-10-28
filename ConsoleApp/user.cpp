#include "user.h"

void User::setName(std::string name) {
    std::regex expression("^[A-Za-z]{1,20}$");

    if (!std::regex_match(name, expression))
        throw std::invalid_argument("The following name is not valid: " + this->name);

    this->name = name;
}

std::string User::getName() const {
    return name;
}