#include<Stdio.h>
int main(){
    int a[100],max=9999,numpos=0,i,j;
    printf("INPUT 5 NUMBER\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<5;j++){
        if(a[j]<max){
            max=a[j];
            numpos=j+1;
        }
    }
    printf("LOWEST NUMBER IS %d AT POSITION %d",max,numpos);
}