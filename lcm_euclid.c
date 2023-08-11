#include<stdio.h>
int main()
{
    int x,y,numerator,denominator,remainder,gcd,lcm;
    printf("ENTER TWO NUMBERS :\n");
    scanf("%d %d",&x,&y);

    if(x>y){
        numerator=x;
        denominator=y;
    }
    else{
        numerator=y;
        denominator=x;
    }
    remainder=numerator%denominator;

    while(remainder!=0){
        numerator = denominator;
        denominator = remainder;
        remainder = numerator%denominator;
    }

    gcd=denominator;
    lcm=(x*y)/gcd;

    printf("GCD IS %d\n",gcd);
    printf("LCM IS %d\n",lcm);

}