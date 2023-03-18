#include "Buddy.h"

buddy::buddy()
{
    buddy("NOT", "PROVIDED");
}

buddy::buddy(std::string first_name, std::string last_name)
{
    this->age = 0;
    this->set_name(first_name, last_name);
    this->phone_number = "UNAVAILABLE";
}

void buddy::set_name(std::string first_name, std::string last_name)
{
    this->first_name = first_name;
    this->last_name = last_name;
}

void buddy::set_age(uint8_t age)
{
    this->age = age;
}

void buddy::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}

std::string buddy::get_name()
{
    return this->first_name + " " + this->last_name;
}
uint8_t buddy::get_age()
{
    return this->age;
}
std::string buddy::get_phone_number()
{
    return this->phone_number;
}