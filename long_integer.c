#include <stdio.h>

int main() {
    long int myLongInteger = 1234567890L; // The 'L' suffix indicates a long integer
    printf("My long integer: %ld\n", myLongInteger);
    return 0;
}

//All store integers, but consume different memory and have different ranges. 
//For eg: short int consumes 16bits, long int consumes 32bits and long long int consumes 64bits. 
//The maximum value of short int is 32767. So of you need to store big values you need to use long int 