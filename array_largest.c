#include <stdio.h>

int main() {
    int arr[10] = {16, 17, 4, 3, 5, 2}, n = 6, i,j;
    int maxRight = arr[n - 1];  

    for (i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            printf("%d ", arr[i]);
            maxRight = arr[i];  
        }
    }

    return 0;
}
