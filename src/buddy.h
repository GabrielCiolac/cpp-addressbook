#include <string>
#ifndef BUDDY_H
#define BUDDY_H
class buddy
{
public:
    buddy();
    buddy(std::string first_name, std::string last_name);

    void set_name(std::string first_name, std::string last_name);
    void set_age(uint8_t age);
    void set_phone_number(std::string phone_number);

    std::string get_name();
    uint8_t get_age();
    std::string get_phone_number();

private:
    uint8_t age;
    std::string first_name;
    std::string last_name;
    std::string phone_number;
};

#endif