#include <stdio.h>

int main(void){
	int myInts[] = {0,1,2,3,4};
	int *pi = myInts;
	
	double myDoubles[] = {0.1, 1.2, 2.3, 3.4, 4.5};
	double *pd = myDoubles;
	
	char myChars[] = {'a','e','i','o','u'};
	char *pc = myChars;

	for (int counter = 0; counter < 5; counter++){ 
		printf("Address: %p Value %d\n",pi, *pi); 
		pi += 1;
	}
	
	for (int counter = 0; counter < 5; counter++){ 
		printf("Address: %p Value %f\n",pd, *pd); 
		pd += 1;
	} 
	
	for (int counter = 0; counter < 5; counter++){ 
		printf("Address: %p Value %c\n",pc, *pc); 
		pc += 1;
	}
	/* The output from this program helps define the size a variable
	 * takes within an array. With additional knowledge that arrays
	 * store variables as the size of the data type, one could figure
	 * out by substracting data addresses in hex to get the size of 
	 * that variable. It is also helpful that different data types 
	 * change the storage size of an array index depending on that data 
	 * type, giving away that data types size.
	 * */
	 
	return 0;
}
