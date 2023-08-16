#include <stdio.h>
int main()
{
    int n, i, a;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        a=i%10;
        printf("%d", a);
        for(int j=i+1;j<=n;j++)
        {
            a=j%10;
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}