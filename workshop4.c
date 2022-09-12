#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks of the student : \n");
    scanf("%d", &marks);
    if(marks <=100 && marks >=75)
    {
        printf("Grade=A:");
    }
    else if(marks< 75 && marks >=50)
    {
        printf("Grade=B:");
    }
    else if(marks<50 && marks >=35)
    {
        printf("Grade=C:");
    }
    else if(marks<35 && marks >=0)
    {
        printf("Fail!");
    }
    else
    {
        printf("enter a valid score between 0 and 100");
    }
    return 0;
}