/*
						Random Walker program
*/

//											Sergi Roca Bonet, Barcelona 2016

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

	int timesteps = 1000000;              //number of timesteps
	int coord = 2;				          //number of coordinates (x and y)
	int L = 20;							  //dimension of the grid
	float positions[timesteps][coord];    //positions of the particles in time
	float random_x, random_y; 			  //random numbers, needed to move

	FILE *file;

	float dx = 0.07 ; float dy = 0.5;
	positions[0][0] = 0.0;   //initialy, we have the particle at the center

	for (int i = 1; i < timesteps; i++){

		float r1 = (rand()%10)/19.0 ; float r2 = (rand()%10)/19.0;
		float pi = acos(-1.0);

		float random_x = sqrt(-2.0*log(r1))*cos(2.0*pi*r2)/4.0;
		float random_y = sqrt(-2.0*log(r1))*sin(2.0*pi*r2)/4.0;

		if (random_x < 0.5) {
			positions[i][0] = positions[i-1][0] - dx;
		} else {
			positions[i][0] = positions[i-1][0] + dx;
		}
		if (random_y < 0.5) {
			positions[i][1] = positions[i-1][1] - dy;
		} else {
			positions[i][1] = positions[i-1][1] + dy;
		}
	}

	file = fopen("positions.txt","w");
	for(int i=0;i<timesteps;i++) {
		for(int j=0;j<coord;j++) {
    		fprintf(file,"%f   ",positions[i][j]);
		}
		fprintf(file,"\n");
	}
}
