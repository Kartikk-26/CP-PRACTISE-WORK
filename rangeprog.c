#include<stdio.h>
int main(){
    int x;
    printf("ENTER THE NUMBER \n");
    scanf("%d",&x);
    if(x>0 && x<20){
        printf("RANGE IS BETWEEN [0,20]");
    }
    else if(x>20 && x<40){
        printf("RANGE IS BETWEEN [20,40]");
    }
    else if(x>40 && x<60){
        printf("RANGE IS BETWEEN [40,60]");
    }
    else if(x>60 && x<80){
        printf("RANGE IS BETWEEN [60,80]");
    }
    else if(x>80 && x<100){
        printf("RANGE IS BETWEEN [80,100]");
    }
}