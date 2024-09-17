//Jason Gutierrez
//CSC-341
//Pointer program

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[]){
	int *values;
	int i;

	values = (int *)malloc(sizeof(int)*5);

	for(i=0; i<5;i++){
		values[i] = 1;
	}
	
	printf("argc address is %p \n", &argc);
	printf("stack variable addresses are %p \n", &i);
	printf("heap variable addresses are: \n");
	for(i=0; i < 5; i++){
		printf("values[%d] = %p \n", i, &values[i]);
	}
	printf("unititialized data address is %p \n", &x);
	printf("initialized data address is %p \n", &y);
return EXIT_SUCCESS;
}
