#include<stdio.h>

int power(int x,int y);

int main()

{
    int a, b, expo;

    while(1)
    printf("Enter a base number : ");
    scanf("%d", &a);

    printf("Enter it's power : ");
    scanf("%d", &b);

    expo = power(a, b);

    printf("The value of %d raised to the power of %d is = %d", a, b, expo);
}

int power(int x, int y)

{
    for (int i = y; i > 1; i--)
    {
        x = x*x;
    }

    return(x);
}