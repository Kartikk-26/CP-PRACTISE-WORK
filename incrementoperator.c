#include<stdio.h>
int main(){
    int a=0,b=0,x;
    x=a++||++b;
    printf("a= %d and b=%d",a,b);
    printf("\nx=%d",x);
    return 0;
}