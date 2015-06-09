#include<stdio.h>
#include<math.h>
int main(){
long long int i,t,n,x;
scanf("%lld", &t);
for(i=0;i<t;i++){
    scanf("%lld", &n);
    x=sqrt(n);
    if((x*x)==n)
        printf("Case %lld: Yes\n",(i+1));
    else
        printf("Case %lld: No\n",(i+1));
}
return 0;
}
