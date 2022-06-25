#include "Varibles.h"
//This file contains all the equations for Kinetic energy in English languague.
//Starts with one dimension -> 2 dimention -> 3 dimention

float getDisplacement(float FinalPos, float IntPos)
{
	float Displacement= 0.0;
	Displacement = FinalPos - IntPos;
	printf("Displacement =%f\n", Displacement);
	return Displacement;
}
float getTimeElapsed(float t2, float t1)
{
	float TimeElapsed = 0.0;
	TimeElapsed= t2 - t1; 
	printf("Time Elapsed = %f\n", TimeElapsed);
	return TimeElapsed;
}
//Average Velocity
float getAverageVelocity (float Displacement, float TimeElapsed)
{
		//printf("Displacement is: %f\n", Displacement);
	//printf("TimeElapsed is: %f\n", TimeElapsed);

	float AverageVelocity = 0.0;
	AverageVelocity = Displacement / TimeElapsed;
	printf("AverageVelocity is: %f\n", AverageVelocity);
	return AverageVelocity;
}
float getAverageAcceleration (float Displacement, float TimeElapsed)
{
		//printf("Displacement is: %f\n", Displacement);
	//printf("TimeElapsed is: %f\n", TimeElapsed);

	float AverageAcceleration= 0.0;
	AverageAcceleration = Displacement / TimeElapsed;
	printf("AverageVelocity is: %f\n", AverageAcceleration);
	return AverageAcceleration;
}