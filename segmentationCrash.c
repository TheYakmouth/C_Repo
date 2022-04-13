#include <stdio.h>

int * getX() {
	int x = 42;
	return &x;	
}

void doNothing(){
	for(int i = 0; i < 10000; i++){}
}

int main(int argc, char **argv){
	
	int *x = getX();
	doNothing();
	printf("%d\n", *x);	
}
