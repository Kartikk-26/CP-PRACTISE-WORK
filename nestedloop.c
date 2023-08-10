#include<stdio.h>
int main(){
    int x,num=0;
    printf("ENTER THE NUMBER :");
    scanf("%d",&x);
    for(int j=x;j>0;j--){
        num=num+j;
    }
    printf("TOTAL IS %d",num);
}