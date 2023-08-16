#include<stdio.h>
int main(){
    int arr[10] = {16, 17, 4, 3, 5, 2}, n=6, i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i]<arr[j+1])
            break;
        }
        if(j==n)
        printf("%d",arr[i]);
    }
   return 0;
}