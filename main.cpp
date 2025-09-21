#include <iostream>

#include "include/time_converter.h"

int main() {
    int hour, minute;
    std::string period;
    std::cin >> hour >> minute >> period;
    std::string converted_time = time_converter(hour, minute, period);
    std::cout << "Converted time" << converted_time << std::endl;
    return 0;
}