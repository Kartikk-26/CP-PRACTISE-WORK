#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &n);
    int temp=n;
    //Complete the code to calculate the sum of the five digits on n.
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("SUM OF %d IS %d",temp,sum);
    
    return 0;
}