#include<stdio.h>

int power(int x,int y);

int main()

{
    int a, b, exponential;

    while(1)
    printf("Enter a base number : ");
    scanf("%d", &a);

    printf("Enter it's power : ");
    scanf("%d", &b);

    exponential = power(a, b);

    printf("The value of %d raised to the power of %d is = %d", a, b, exponential);
}

int power(int x, int y)

{
    for (int i = y; i > 1; i--)
    {
        x = x*x;
    }

    return(x);
}