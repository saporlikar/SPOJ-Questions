#include<stdio.h>
#include<math.h>
int main(){
int n,i,t;
int sum_men=0,sum_women=0;
double z;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
int men[n],women[n];
for(i=0;i<n;i++){
 scanf("%d",&men[i]);
 sum_men+=(men[i]*men[i]);
}
for(i=0;i<n;i++){
 scanf("%d",&women[i]);
 sum_women+=(women[i]*women[i]);
}
z=sqrt((double)sum_men*(double)sum_women);
printf("%lld\n",(long long int)z);
sum_men=0,sum_women=0;
}
return 0;
}
