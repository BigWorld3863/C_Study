// Zeno's paradoxes
#include <stdio.h>

int main()
{	
	/*
		Simulation of a Moving object
		- Speed = 1.0 m/s
		- dt = 1.0 s
		- Distance traveled during dt = Speed * dt
		
		- Step 1 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m
		- Step 2 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m + 1.0 m = 2.0 m
		- Step 3 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m + 1.0 m + 1.0 m = 3.0 m
		- ... ...
	*/
	
	const double spd = 1.0;
	
	double dt = 1.0;
	double time = 0.0;
	double dist = 0.0;
	
	for (int step = 1; step <= 100; step++)
	{
		time += dt;
		dist += spd * dt;
		dt *= 0.5;	// dt /= 2.0; but multiplication is faster than division
		
		printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);
	}
	
	// Note: infinite geometric series
	
	return 0;
}