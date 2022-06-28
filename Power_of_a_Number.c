#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,o,r;
    scanf("%d%d%d%d",&m,&n,&o,&r);
    r=pow(m,n);
    printf("%d",r%o);
}