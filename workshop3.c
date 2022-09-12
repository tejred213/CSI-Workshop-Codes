//check whether an integer is odd or even

#include<stdio.h>

int main()
{
    int number = 0;
    printf("enter an integer :");
    scanf("%d", &number);

    //true if remainder is 0
    if (number%2==0)
    {
        printf("%d is an even integer.",number);
    }
    else
    {
        printf("%d is an odd integer.",number);
    }
    return 0;
}