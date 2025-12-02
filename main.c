#include <stdio.h>

int isPositive(int n)
{
    return n > 0;
}

int main()
{

    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if (isPositive(n))
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }


    return 0;
}
