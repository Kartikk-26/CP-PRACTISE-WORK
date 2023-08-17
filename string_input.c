#include<stdio.h>
int main(){
    char arr[50];
    printf("enter the name:");
    fgets(arr,50,stdin);
    printf("%s",arr);
}