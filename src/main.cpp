// Your First C++ Program

#include <iostream>
#include "buddy.h"

int main()
{
    buddy tim = buddy("Tim", "Cortex");
    std::cout << tim.get_name() << std::endl;
    return 0;
}