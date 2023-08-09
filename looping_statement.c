#include<stdio.h>
int main(){
    int x,w,h,count=0;
    printf("ENTER THE NUMBER OF BOYS ");
    scanf("%d",&x);
    printf("ENTER THE DETAILS OF WEIGHT AND HEIGHT \n");
    for(int i=1;i<=x;i++)
    {
        scanf("%d %d",&w,&h);
        if(h>170 && w<50)
        {
            count++;
        
        }

    }
    printf("OUTPUT IS %d",count);
}