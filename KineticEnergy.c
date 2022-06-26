#include "global.h"
#include "functions.h"
//This file contains all the equations for Kinetic energy in English languague.
//Starts with one dimension -> 2 dimention -> 3 dimention

double getDisplacement(double FinalPos, double IntPos)
{
	double Displacement= 0.0;
	Displacement = FinalPos - IntPos;
	printf("Displacement =%f\n", Displacement);
	return Displacement;
}
double getTimeElapsed(double t2, double t1)
{
	double TimeElapsed = 0.0;
	TimeElapsed= t2 - t1; 
	printf("Time Elapsed = %f\n", TimeElapsed);
	return TimeElapsed;
}
//Average Velocity
double getAverageVelocity (double Displacement, double TimeElapsed)
{
		//printf("Displacement is: %f\n", Displacement);
	//printf("TimeElapsed is: %f\n", TimeElapsed);

	double AverageVelocity = 0.0;
	AverageVelocity = Displacement / TimeElapsed;
	printf("AverageVelocity is: %f\n", AverageVelocity);
	return AverageVelocity;
}
double getAverageAcceleration (double Displacement, double TimeElapsed)
{
		//printf("Displacement is: %f\n", Displacement);
	//printf("TimeElapsed is: %f\n", TimeElapsed);

	double AverageAcceleration= 0.0;
	AverageAcceleration = Displacement / TimeElapsed;
	printf("AverageVelocity is: %f\n", AverageAcceleration);
	return AverageAcceleration;
}