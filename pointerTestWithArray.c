#include <stdio.h>

int main(void){
	int int_array[] = {1,2,3,4,5};
	int index0 = 0, index4 = 4;
	int *p1 = &int_array[index0], *p2=&int_array[index4];
	long unsigned int_size = sizeof(int), distance = p2 - p1;
	printf("The distance in bytes from address %p to address %p is %lu times %lu.\n",p1, p2, distance, int_size);
	return 0;
}
