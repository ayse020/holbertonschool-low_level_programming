#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            _putchar((hour / 10) + '0');  /* Saatın onluq rəqəmi */
            _putchar((hour % 10) + '0');  /* Saatın təklik rəqəmi */
            _putchar(':');                /* Ayırıcı */
            _putchar((minute / 10) + '0'); /* Dəqiqənin onluq rəqəmi */
            _putchar((minute % 10) + '0'); /* Dəqiqənin təklik rəqəmi */
            _putchar('\n');               /* Yeni sətir */
        }
    }
}
