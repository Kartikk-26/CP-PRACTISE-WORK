#include <stdio.h>
int main(){
int a[100],n,c1=0,c2=0,c3=0;
printf("ENTER THE SIZE OF ARRAY :\n");
scanf("%d",&n);
printf("ENTER THE VALUES OF ARRAY :\n");
for (int i = 0; i <n; i++)
{
    scanf("%d",&a[i]);
    if (a[i]%2==0 && a[i]!=8){
        c1++;                                  //EVEN
    }
    else if (a[i]%2==1 ) 
    {
        c2++;                                 //ODD

    }
    else {
        c3++;                                 //EIGHT
    }

}
c1=c1*1;
c2=c2*3;
c3=c3*5;
int x;                                        //TOTAL POINTS 
x=c1+c2+c3 ;

printf("POINTS ARE : %d",x);
}
