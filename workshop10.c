
//-(2^32)to(2^31)-1 int datatype range
#include <stdio.h>
void solve()
{
    int a=3;
    int res= a++ + ++a + a++ + ++a;
    printf("%d",res);
}
int main()
{
    solve();
    return 0;
}
