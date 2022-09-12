#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%4==0)
        {
            printf("The numbers divisible by 4 are : %d\n",i);
        }
    }
    return 0;
}