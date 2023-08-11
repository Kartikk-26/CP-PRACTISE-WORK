#include<stdio.h>
int main(){
    int num=1;
    start:
          printf("\nHELLO WORLD");
          num++;
    if(num<=5){
        goto start;
    }      
}