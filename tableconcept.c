#include<stdio.h>
int main(){
    int a,sum=0;
   printf("ENTER THE NUMBER TIL WHERE YOU WANT TO PRINT:");
   scanf("%d",&a);
   for(int i=1;i<=10;i++){
    int t=i*a;
     printf("%d\n",t);
   }
}