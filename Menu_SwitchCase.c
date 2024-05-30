#include<stdio.h>

int main()

{
    int choice, num, factorial = 1, flag, x=1;

        while(x)
        {
        printf("1. Factorial");
        printf("\n2. Prime");
        printf("\n3. Odd/Even");
        printf("\n4. Exit");
        printf("\nYour choice? ");

        scanf("%d", &choice);

        switch (choice)
        {
        
        //logic for factorial:

        case 1:
            printf("\nEnter a number: ");
            scanf("%d", &num);

            for (int i = 1; i <= num; i++)
            {
                factorial = factorial*i;
            }
            printf("Factorial of the input number is %d\n", factorial);
            break;

        //logic for prime number:    
        
        case 2:
            printf("\nEnter a number: ");
            scanf("%d", &num);            

            for (int i = 2; i <= num; i++)        
            {      
                flag = 1;

                for (int j = 2; j <= i/2; j++)
                {
                    if(i % j == 0)
                    {
                        flag = 0;
                        break;
                    }    
                }   
            }   

            if (flag)
               printf("The Input Number is a Prime Number\n");
            else
                printf("The Input Number is a Composite number\n");
            break;
        
        case 3:
            printf("\nEnter a number: ");
            scanf("%d", &num);
        
        case 4:
            x=0;
            printf("You have exit the program.");
            break;
            
        
        default:
            break;
        }
    }
}
