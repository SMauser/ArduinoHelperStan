#include "Helper.h"

int Helper::boolToInt(bool bValue)
{
    if (bValue)
    {
        return 1;
    }

    return 0;
}

// Delay for the given Seconds.
void Helper::delayInS(double seconds)
{
    delay(long(seconds * 1000));
}

float Helper::getDivOrDefault(float valueSum, float valueDivBy)
{
    // #ifdef DEBUG_STAN_MODE
    //     Serial.println("Values given in getDivOrDefault");
    //     Serial.print("valueSum = ");
    //     Serial.println(valueSum);
    //     Serial.print("valueDivBy = ");
    //     Serial.println(valueDivBy);
    // #endif

    float result = 0.0;

    if (!isnan(valueDivBy))
    {
        if (valueDivBy != 0.0)
        {
            result = valueSum / valueDivBy;
        }
    }

    // #ifdef DEBUG_STAN_MODE
    //     Serial.print("Divide Value in getDivOrDefault: ");
    //     Serial.println(result);
    // #endif

    return result;
}

String Helper::getDateTimeAsString(time_t t)
{
    char buf[25];
    char m[4]; // temporary storage for month string (DateStrings.cpp uses shared buffer)

    strcpy(m, monthShortStr(month(t)));
    sprintf(buf, "%.2d:%.2d:%.2d %s %.2d %s %d",
            hour(t), minute(t), second(t), dayShortStr(weekday(t)), day(t), m, year(t));

    return String(buf);
}