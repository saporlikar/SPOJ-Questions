#include<stdio.h>
#include<string.h>
long long int gcd(long long int a,long long int b)
{
    if(b>a)
    return gcd(b,a);
    if(b==0)
    return a;
    return gcd(b,a%b);
}
long long int lcm(long long int a,long long int b)
{
    long long int k=gcd(a,b);
    a/=k;
    return a*b;
}
int main()
{
    char a[100];
    long long int b[100],i,j,j1,k,x;
    scanf("%s", a);
    while(a[0]!='*')
    {
        x=strlen(a);
        for(i=x;i<100;i++)
            a[i]='0';
        for(i=0;i<100;i++)
            b[i]=0;
        j=0;
        for(i=0;i<x;i++)
        {
            if(a[i]=='Y')
            {
                b[j]=i+1;
                j++;
            }
        }
            if(a[0]=='N')
            {
                printf("-1\n");
                goto POS;
            }
            else if(a[3]=='Y' && a[1]=='N')
            {
                printf("-1\n");
                goto POS;
            }
            else if((a[5]=='Y' && (a[1]=='N' || a[2]=='N')) || (a[5]=='N' && (a[1]=='Y' && a[2]=='Y')))
            {
                printf("-1\n");
                goto POS;
            }
            else if(a[7]=='Y' && (a[1]=='N' || a[3]=='N'))
            {
                printf("-1\n");
                goto POS;
            }
            else if(a[8]=='Y' && a[2]=='N')
            {
                printf("-1\n");
                goto POS;
            }
            else if((a[9]=='Y' && (a[1]=='N' || a[4]=='N')) || (a[9]=='N' && (a[1]=='Y' && a[4]=='Y')))
            {
                printf("-1 6\n");
                goto POS;
            }
            else if((a[11]=='Y' && (a[1]=='N' || a[2]=='N' || a[3]=='N' || a[5]=='N'))|| (a[11]=='N' && ((a[1]=='Y' && a[5]=='Y') || (a[2]=='Y' && a[3]=='Y'))))
            {
                printf("-1\n");
                goto POS;
            }
            else if((a[13]=='Y' && (a[1]=='N' || a[6]=='N')) || (a[13]=='N' && (a[1]=='Y' && a[6]=='Y')))
            {
                printf("-1\n");
                goto POS;
            }
            else if((a[14]=='Y' && (a[2]=='N' || a[4]=='N')) || (a[14]=='N' && (a[2]=='Y' && a[4]=='Y')))
            {
                printf("-1 9\n");
                goto POS;
            }
            else if(a[15]=='Y' && (a[1]=='N' || a[3]=='N' || a[7]=='N'))
            {
                printf("-1\n");
                goto POS;
            }
            else if((a[17]=='Y' && (a[1]=='N' || a[2]=='N' || a[5]=='N' || a[8]=='N')) || (a[17]=='N' && ((a[1]=='Y' && a[8]=='Y') || (a[5]=='Y' && a[2]=='Y'))))
            {
                printf("-1\n");
                goto POS;
            }
            else if((a[19]=='Y' && (a[1]=='N' || a[3]=='N' || a[4]=='N' || a[9]=='N')) || (a[19]=='N' && ((a[1]=='Y' && a[9]=='Y') || (a[4]=='Y' && a[3]=='Y'))))
            {
                printf("-1\n");
                goto POS;
            }
        j1=j;
        j--;
        k=b[0];
        while(j>=1)
        {
           k=lcm(k,b[j--]);
        }

        printf("%lld\n",k);
        POS:
        scanf("%s", a);
    }
    return 0;
}
