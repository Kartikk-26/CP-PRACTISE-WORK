#include<stdio.h>
int main(){
    int a;
    printf("ENTER THE NUMBER \n");
    scanf("%d",&a);
    if(a>0 && a%2==0){
        printf("NUMBER IS POSITIVE EVEN\n");
    }
    else if (a<0 && a%2==0){
        printf("NUMBER IS NEGATIVE EVEN\n");
    }
    else if (a>0 && a%2==1){
        printf("NUMBER IS POSITIVE ODD\n");
    }
    else if (a<0 && a%2==1){
        printf("NUMBER IS NEGATIVE ODD\n");
    }
}