// Zeno's paradoxes 2
#include <stdio.h>

int main()
{	
	const double spd = 1.0;
	
	
	double time = 0.0;
	
	double dist_arch = 0.0;
	double dist_turtle = 1.0;
	
	double spd_arch = 10.0;
	double spd_turtle = 0.001;
	
	double dt = 0.01;
	
	unsigned i;
	
	printf("Time = %fs, dt = %fs, Arch = %fm, turtle = %fm\n", time, dt, dist_arch, dist_turtle);
	
	for (i = 0; i <= 50; ++i)
	{
		time += dt;
		dist_arch += spd_arch * dt;
		dist_turtle += spd_turtle * dt;
		dt *= 0.5;	// dt /= 2.0; but multiplication is faster than division
		
		printf("Time = %fs, dt = %fs, Arch = %fm, turtle = %fm\n", time, dt, dist_arch, dist_turtle);
	}
	
	// Note: infinite geometric series
	
	return 0;
}