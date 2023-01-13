#include<stdio.h>
int main(){
    int a[5],i,swap,j;
    printf("ENTER THE NUMBER \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<=5;j++){
            if(a[i]>a[j]){
            swap=a[i];
            a[i]=a[j];
            a[j]=swap;
            }
        }
        
        }
        printf("ARRAY IN ASSENDING ORDER \n");
        for(i=0;i<5;i++){
            printf("%d ",a[i]);
        }
    
   
    printf("\nLARGEST ELEMNT IS %d ",a[4]);
    printf("\nSMALLEST ELEMNT IS %d ",a[0]);
}
