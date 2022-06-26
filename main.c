#include <stdio.h>
#include <stdlib.h>
#include "KineticEnergy.h"
int main()
{
double a = 30.5;
double b = 50.0;
double t2 = 40.0;
double t1 = 30.0;
double displacement;
double timeElapsed;
double averageVelocity;
displacement = getDisplacement(a,b);
timeElapsed = getTimeElapsed(t2,t1);
averageVelocity = getAverageVelocity(displacement, timeElapsed);
return 0;
}