#include <stdio.h>

int main()
{
    int a[50], b[100], n, i, j, r1, swap;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("PRINTING THE ARRAY ENTERED BY USER:\n");    
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        r1 = a[i] % 10;
        a[i] = a[i] / 10;
        b[i] = a[i];
        b[n + i] = r1;
    }
    printf("SORTED ARRAY BEFORE OUTPUT :\n");
    for (i = 0; i < (2 * n); i++) // Changed loop condition here
    {
        printf("%d ", b[i]);
    }
    for (i = 0; i < (2 * n); i++)
    {
        for (j = i + 1; j < (2 * n); j++)
        {
            if (b[i] < b[j])
            {
                swap = b[i];
                b[i] = b[j];
                b[j] = swap;
            }
        }
    }
    printf("\n");
    printf("PRINTING THE MAIN OUTPUT :\n");
    for (i = 0; i < (2 * n); i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
