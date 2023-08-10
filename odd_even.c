#include<stdio.h>
int main(){
    int x;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&x);
    if(x&1){
        printf("ODD");
    }
    else{
        printf("EVEN");
    }
}