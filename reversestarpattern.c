#include<stdio.h>
int main(){
    int a,i,j;
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&a);
    for(i=a;i>0;i--){
        for(j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
}