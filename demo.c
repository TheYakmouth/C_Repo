#include <stdio.h>

int main(void){
	int i = 42;
	int *ip = &i;
	printf("i: %d\naddress: %p\nPointer address value: %d\nValue of pointer: %p\n",i, ip, *&i, &*ip);
	return 0;
	//Second test comment updated on github
}
