#include<stdio.h>
long long int gcd(long long int,long long int);
int main(){
long long int a,b,x,res;
scanf("%lld %lld", &a, &b);
while(a||b){
    x=gcd(a,b);
    res=(a*b)/x;
    printf("%lld\n",res);
    scanf("%lld %lld", &a, &b);
}
return 0;
}
long long int gcd(long long int n1,long long int n2){
  if (n2!=0)
       return gcd(n2, n1%n2);
    else
       return n1;
}
