#include<stdio.h>
int main()
{
    int i=1,a;

    printf("Enter the number of times I need to say sorry: \n",a);
    scanf("%d",&a);

    while(i<=a)
    {
        printf("%d times : Sorry i wont disturb the class \n",i);
        i++;
    }
    return 0;
}