// Yedoh Kang
// Systems pd4
// HW4
// 9/29/17


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcpy(char * dst, const char * src); 
// dest -- pointer to the destination array
// src -- the string to be copied
// returns a pointer to the destination string

// strncpy(char * dst, const char * src, size_t len);
// dest -- pointer to the destination array
// src -- the string to be copied
// n -- number of characters to be copied from the source
// returns final copy of the copied string

int main() {
	
	// strcpy
	
	char src[10];
	char dest[10];
	
	strcpy(src, "hello");
	strcpy(dest, src);
	
	printf("copied string: %s\n", src);
	printf("final copied string: %s\n", dest);
	
	// strncpy
	// strncpy (src, "hello", sizeof(src));
	
	char src1[40];
	char dest1[40];
	
	strcpy(src1, "hello my name is yedoh");
	strncpy(dest1, src1, 13);
	
	printf("copied string: %s\n", src1);
	printf("final copied string: %s\n", dest1);
	
	return 0;
}