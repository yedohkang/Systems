// Yedoh Kang
// Systems pd4
// HW02
// 9/16/17

#include <stdio.h>
#include <stdlib.h>

// Problem 6
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum

int difference() {
	int sumsquare = 0;
	int i;
	for (i = 1; i < 101; i++) {
		sumsquare += i * i;
	}
	int squaresum = 0;
	int j;
	for (j = 1; j < 101; j++) {
		squaresum += j;
	}
	return (squaresum * squaresum) - (sumsquare);
}

// Problem 1
// Find the sum of all the multiples of 3 or 5 below 1000

int sum() {
	int i;
	int sum = 0;
	for (i = 0; i < 1000; i += 3) {
		sum += i;
	}
	int j;
	for (j = 0; j < 1000; j += 5) {
		sum += j;
	}
	int h;
	for (h = 0; h < 1000; h += 15) {
		sum -= h;
	}
	return sum;
}

int main() {
	printf("result for Problem 6: %d", difference());
	printf("\n");
	printf("result for Problem 1: %d", sum());
	printf("\n");
}