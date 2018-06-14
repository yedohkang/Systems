// Yedoh Kang
// Systems pd4
// HW3
// 9/25/17

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// create new array
	int arr[10];
	
	// generate random numbers
	srand(time(NULL));
	
	printf("the first array: \n");
	
	// populate each element of the array
	int k;
	for (k = 0; k < 9; k++) {
		arr[k] = rand();
		printf("arr[%d]: %d\n", k, arr[k]);
	}
	
	arr[9] = 0;

	printf("arr[9]: %d\n", arr[9]);
	
	// pointers
	int *a = &arr[0];
	int *b = &arr[1];
	int *c = &arr[2];
	int *d = &arr[3];
	int *e = &arr[4];
	int *f = &arr[5];
	int *g = &arr[6];
	int *h = &arr[7];
	int *i = &arr[8];
	int *j = &arr[9];
	
	// create new array
	int brr[10];
	
	// de-reference pointers
	brr[0] = *j;
	brr[1] = *i;
	brr[2] = *h;
	brr[3] = *g;
	brr[4] = *f;
	brr[5] = *e;
	brr[6] = *d;
	brr[7] = *c;
	brr[8] = *b;
	brr[9] = *a;
	
	printf("the second array: \n");
	
	int p;
	for (p = 0; p < 10; p++) {
		printf("brr[%d]: %d\n", p, brr[p]);
	}
}