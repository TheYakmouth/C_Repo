#include <stdio.h>
#include <string.h>

int main(void){
	int int_array[] = {1,2,3,4};
	int *p;
	p = int_array;
	int *end = p+4;
	
	printf("start %p + 4 * 4 = end %p\n",int_array, end);
	
	do{ 
		printf("address %p contains value %d\n",p, *p); 
		p++;
	} while(p<end);
	
	return 0;
}
