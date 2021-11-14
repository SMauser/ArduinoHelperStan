#include <Arduino.h>
#include "TimeLib.h"

class Helper
{
public:
    // Convert the given bool value to an int.
    // True = 1
    // False = 0
    int boolToInt(bool bValue);

    // Delay for the given Seconds.
    void delayInS(double seconds);

    // Safe method to divide given Sum by dividing value.
    // Return 0.0 in kind of any errors.
    float getDivOrDefault(float valueSum, float valueDivBy);

    // Return the given time_t object as formated DateTime String.
    String getDateTimeAsString(time_t t);
};