#include<stdio.h>
int main(){
    char a;
    printf("ENTER THE CHARCTER\n");
    scanf("%c",&a);
    if(a>=65 && a<=97){
        printf("UPPERCASE\n");
    }
    else{
        printf("LOWER CASE\n");
    }
}