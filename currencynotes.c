#include <stdio.h>
int main()
{
    int amount,a,n;
    printf("Enter the amount:  ");
    scanf("%d", &amount);
    switch (1)
    {
    case 1:
         n=amount/2000;
         printf("\n2000 - %d",n);
         amount=amount-(n*2000);    
    
    case 2:
        n=amount/500;
        printf("\n500 - %d", n);
        amount=amount-(n*500);
    
     case 3:
        n=amount/200;
        printf("\n200 - %d", n);
        amount=amount-(n*200);
    
     case 4:
        n=amount/100;
        printf("\n100 - %d", n);
        amount=amount-(n*100);
    
     case 5:
        n=amount/50;
        printf("\n50 - %d", n);
        amount=amount-(n*50);

     case 6:
        n=amount/20;
        printf("\n20 - %d", n);
        amount=amount-(n*20);

    case 7:
        n=amount/10;
        printf("\n10 - %d", n);
        amount=amount-(n*10);

    case 8:
        n=amount/5;
        printf("\n5 - %d", n);
        amount=amount-(n*5);

    case 9:
        n=amount/2;
        printf("\n2 - %d", n);
        amount=amount-(n*2);
    
    case 10:
        n=amount/1;
        printf("\n1 - %d", n);
        amount=amount-(n*1);

    case 11:
         n=amount/1;
         printf("\n1 - %d",n);
         amount=amount-(n*1);    


    default:
        break;
    }

}
