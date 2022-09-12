#include<stdio.h>
int main()
{
    int a,s=0;
    printf("Enter a number \n");
    scanf("%d", &a);

    for(int i=1;i<=a;i++)
        {
            s=s+i;
            printf("sum is %d\n",s);
        }
    return 0;

}