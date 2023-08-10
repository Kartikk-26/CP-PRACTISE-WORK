#include<stdio.h>
int main(){
    int n,x,shift;
    printf("Enter number\n");
    scanf("%d", &n);
    printf("position of the bit to change\n");
    scanf("%d",&shift);
    x=~(1<<(shift-1));
    printf("%d",n&x);
return 0;


}