#include<stdio.h>
#include<math.h>
int main(){
long double u,v,m,p,sq;
long long int t,x,y,z,a,n,i,d;
scanf("%lld", &t);
while(t--){
    //scanf("%lld %lld %lld", &x, &y, &z);
    x = 728190161165704306LL;
    y = 728190161165682931LL;
    z = 6553711450491210504LL;
    u=(long double)(z-(5*x))/(long double)12;
    v=(long double)(z-(7*y))/(long double)12;
    m=(long double)(y+x)/(long double)6;
    p=(long double)(y-x);
    sq=sqrtl(((u+v)*(u+v))-(m*p));
    d=(long long int)(u+v-sq);
    a=x-(2*d);
    n=((y-a)/d)+4;
    printf("%lld\n",n);
    for(i=0;i<n;i++){
        printf("%lld ",a+(i*d));
    }
    printf("\n");
}
return 0;
}
