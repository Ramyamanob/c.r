# c.r
#include<stdio.h>
int main()
{
    int n,r,a=1;
    scanf("%d%d",&n,&r);
    for(int i=1;i<=r;i++)
    {
        a=a*n;
    }
    printf("\%d",a);
    return 0;
}
