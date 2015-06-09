#include<stdio.h>
int main(){
int t,n;
double x;
scanf("%d", &t);
while(t--){
    scanf("%d", &n);
    if(n==1){
        printf("0.50000000\n");
    }
    else{
    x=(double)(n-1)/(double)n;
    printf("%.8lf\n",x);
    }
}
return 0;
}
