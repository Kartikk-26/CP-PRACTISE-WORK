#include <stdio.h>

int main() {
    int s, e,t=0;
    printf("Enter the range : ");
    scanf("%d %d", &s, &e);

    int sum = 0;
    printf("Prime numbers between %d and %d are:\n", s, e);

    for (int num = s; num <= e; num++) {
        int isPrime = 1;

        if (num <= 1)
            isPrime = 0;
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
           sum =sum+num;
           t++;
        }
    }

    printf("\nSum of prime numbers: %d\n", sum);
    
    printf("\nCount of prime numbers: %d\n", t);

    return 0;
}
