#include <stdio.h>
#include <math.h>

double triples[3][3];

void inTwoSides(double sideA, double sideB, int index){
		double hyp = sqrt(pow(sideA, 2)+pow(sideB, 2));
		
		triples[index][0] = sideA;
		triples[index][1] = sideB;
		triples[index][2] = hyp;
	}
	
void inOneAndHyp(double sideA, double hyp, int index){
		double sideB = sqrt(pow(hyp, 2)-pow(sideA, 2));
		
		triples[index][0] = sideA; 
		triples[index][1] = sideB; 
		triples[index][2] = hyp;
	}

int main(void) {
	
	inOneAndHyp(3, 5, 0); 
	inOneAndHyp(1, sqrt(2), 1); 
	inTwoSides(2,3,2);
	
	for (int i = 0; i < sizeof(triples)/sizeof(triples[0]); i++) {
		printf("Pyth Triple [side A: %f, side B: %f, hypotenuse: %f]\n",triples[i][0],triples[i][1],triples[i][2]);
	}
	return 0;
}
