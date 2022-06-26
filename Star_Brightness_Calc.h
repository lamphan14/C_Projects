#include "global.h"

/*
*This function will calculate the star brightness
*defined as the power crossing unit area at the Earth perpendicular to the path of the light
*Luminosity = L is the total power radiated in watts
*Apparent brightness b
*d is the distance from the star to Earth
* b = L/(4*pi*d^2)
*/
void Star_Brightness_Calc(double L, double d)
{
    double b; //brightness of the star
    b = L/(4*pi*pow(d,2);
}
