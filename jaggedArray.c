#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int array0[4] = {1,2,3,4};
	int array1[2] = {5,6};
	int array2[3] = {7,8,9};
	
	int* jaggedArray[3] = {array0, array1, array2};
	
	int arraySizes[3] = {4, 2, 3};
	
	for (int i = 0; i < 3; i++){
		int* ap = jaggedArray[i];
		for (int j = 0; j < arraySizes[i]; j++){
			printf("%d ", *ap);
			ap++;
		} 
		printf("\n");
	} 
	return 0; 
}
