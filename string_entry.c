#include<stdio.h>
int main(){
    int rnum;
    char arr[50];
    printf("ENTER THE ROLL NUMBER & NAME :");
    scanf("%d",&rnum);
    scanf("%[^\n]",arr);
    printf("\nRoll Number : %d",rnum);
    printf("\nHello %s",arr);
   
}