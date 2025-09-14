#include "../include/time_converter.h"

#include <string>
std::string time_converter(int hour, int minute, const std::string &period) {
    if (period == "am") {
        if (hour == 12) {
            hour = 0;
        }
    } else if (period == "pm") {
        if (hour != 12) {
            hour += 12;
        }
    }

    char buffer[5];
    snprintf(buffer, sizeof(buffer), "%02d%02d", hour, minute);
    return std::string(buffer);
}
