#include<stdio.h>
#include<math.h>
int main(){double t,a,b,r,m,n,s,c,u,v;scanf("%lf",&t);while(t--){scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&r,&m,&n,&s);c=sqrt((a-m)*(a-m)+(b-n)*(b-n));if(c>(r-s)){u=2*acos(0)*r*r-0.5*r*r*(1-sin(2*acos((r*r+c*c-s*s)/(2*r*c))))+0.5*s*s*(1-sin(2*acos((s*s+c*c-r*r)/(2*s*c))));v=2*acos(0)*s*s-0.5*r*r*(1-sin(2*acos((r*r+c*c-s*s)/(2*r*c))))+0.5*s*s*(1-sin(2*acos((s*s+c*c-r*r)/(2*s*c))));u>v?printf("%.2lf\n",u-v):printf("%.2lf\n",v-u);}else{r>s?printf("%.2lf\n",2*acos(0)*(r*r-s*s)):printf("%.2lf\n",2*acos(0)*(s*s-r*r));}}return 0;}
//challenge wrong answer
