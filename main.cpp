#include <iostream>

#include "include/time_converter.h"

int main() {
    int hour, minute;
    std::string period;
    std::cout << "Enter time (hour minute period(am/pm)): ";
    std::cin >> hour >> minute >> period;
    std::string converted_time = time_converter(hour, minute, period);
    std::cout << "Converted time (24-hour format): " << converted_time << std::endl;
    return 0;
}