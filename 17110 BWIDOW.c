#include<stdio.h>
int main(){
int t,n,i,j,max_in,x;
scanf("%d", &t);
POS:
while(t--){
    scanf("%d", &n);
    int r[n][2];
    for(i=0;i<n;i++){
        for(j=0;j<2;j++)
            scanf("%d", &r[i][j]);
    }
    max_in=r[0][0];
    for(i=1;i<n;i++){
        if(r[i][0]>max_in){
            max_in=r[i][0];
            x=i+1;
      }
    }
    r[x-1][1]=0;
    for(i=0;i<n;i++){
        if(r[i][1]>=max_in){
            printf("-1\n");
            goto POS;
        }
    }
    printf("%d\n",x);
}
return 0;
}
