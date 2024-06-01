#include<stdio.h>  
  
void roman(int num)  
{  
    while(num)  
    {  
        if(num >= 1000)  
        {  
            printf("m");  
            num = num - 1000;  
        }
        else if(num >= 900)
        {
            printf("cmxcix");
            num = num - 900;
        }
        else if(num >= 500)  
        {  
            printf("d");  
            num = num - 500;  
        }
        else if(num == 499)
        {
            printf("cdxcix");
            num = 0;
        }
        else if(num >= 100)  
        {  
            printf("c");  
            num = num - 100;  
        }
        else if(num == 99)
        {
            printf("xcix");
            num = 0;
        }
        else if(num >= 50)  
        {  
            printf("l");  
            num = num - 50;  
        }
        else if(num == 49) 
        {
            printf("xlix");
            num = 0;
        } 
        else if(num >= 10)  
        {  
            printf("x");  
            num = num - 10;  
        }
        else if(num == 9)
        {
            printf("ix");
            num = 0;
        }
        else if(num >= 5)  
        {  
            printf("v");  
            num = num - 5;  
        }  
        else if(num == 4)
        {
            printf("iv");
            num = num - 4;
        }
        else if(num >= 1)  
        {  
            printf("i");  
            num = num - 1;  
        }  
    }  
  
    printf("\n");  
}  
  
int main()  
{  
    int year;  
  
    printf("Input the year to get its Roman Equivalent\n");  
    scanf("%d", &year);  
  
    roman(year);  
  
    return 0;  
}  
