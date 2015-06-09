#include<stdio.h>
#include<math.h>//wrong answer
int main(){
int t;
long long int n,i,count=0,prod=1;
scanf("%d", &t);
while(t--){
    scanf("%lld", &n);
for(i=3;i<=sqrt(n);i+=2){
    while(n%i==0){
        count++;
        n=n/i;
    }
    prod=prod*(count+1);
    count=0;
}
if(n>2){
    prod=prod*2;
}
printf("%lld\n",prod/2);
prod=1;
}
return 0;
}

