#ifndef USER_H
#define USER_H

#include <string>
#include <regex>
#include <stdexcept>

class User 
{
    private:
        std::string name;

    public:
        void setName(std::string name);
        std::string getName() const;
};

#endif