#include<stdio.h>
int main(){
    int seconds;
    printf("ENTER THE SECONDS SPEND\n");
    scanf("%d",&seconds);
    //LOGIC TO CONVERT SECONDS TO MINUTES
    //1 MIN =60SEC......1 HOUR=3600SEC
    int hours=seconds/3600;
    int minutes=seconds/60;
    printf("%d SECONDS CONVERTED TO %d HOURS\n",seconds,hours);
    printf("%d SECONDS CONVERTED TO %d MINUTES\n",seconds,minutes);
    
}