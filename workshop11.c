#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i=0;i<T;i++)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]>=10)
            {
                c+=1;
            }
        }
        printf("%d\n",c);
    }

    return 0;

}

