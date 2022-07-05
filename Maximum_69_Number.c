#include<stdio.h>
int main()
{
    int a,m,n,o,p;
    scanf("%d",&a);
    m=a%10;
    a=a/10;
    n=a%10;
    a=a/10;
    o=a%10;
    a=a/10;
    p=a%10;
    a=a/10;
    if(p==6)
    {
        p=9;
    }
    else if(o==6)
    {
        o=9;
    }
    else if(n==6)
    {
        n=9;
    }
    else if(m==6)
    {
        m=9;
    }
    printf("%d%d%d%d",p,o,n,m);
}