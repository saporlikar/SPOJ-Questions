#include<stdio.h>
#include<math.h>//Wrong answer
int main(){
int t;
char c;
long long int n,x,p,a;
scanf("%d", &t);
while(t--){
    scanf("%lld", &n);
    if(n%2){
        x=log2(n);
        a=pow(2,x)+1;
        p=((n-a)/2)+1;
      if(x%2)
        c='i';
      else
        c='m';
      if(c=='i' && ((p%4==1)||(p%4==2)))
        printf("Ivica\n");
      else if(c=='i' && ((p%4==3)||(p%4==0)))
        printf("Marica\n");
      else if(c=='m' && ((p%4==1)||(p%4==2)))
        printf("Marica\n");
      else if(c=='m' && ((p%4==3)||(p%4==0)))
        printf("Ivica\n");
    }
    else
        printf("Marica\n");
}
return 0;
}
