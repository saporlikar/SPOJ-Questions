#include<stdio.h>
int gcd(int a,int b)
{
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}
int main()
{
    int n,i,j,x,d;
    scanf("%d", &n);
    int a[n];
    int b[n-1];
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(j=0;j<(n-1);j++)
    {
        b[j]=a[j+1]-a[j];
    }
    x=b[0];
    for(i=0;i<(n-1);i++)
    {
        x=gcd(x,b[i+1]);
    }
    //printf("x=%d\n",x);
    d=(a[n-1]-a[0])/x;
    printf("%d\n",d-n+1);
    return 0;
}
