#include<stdio.h>

int exponential(int x,int y);

int main()

{
    int a, b, expo;

    printf("Enter a base number : ");
    scanf("%d", &a);

    printf("Enter it's power : ");
    scanf("%d", &b);

    expo = exponential(a, b);

    printf("The value of %d raised to the power of %d is = %d", a, b, expo);
}

int exponential(int x, int y)

{
    for (int i = y; i > 1; i--)
    {
        x = x*x;
    }

    return(x);
}