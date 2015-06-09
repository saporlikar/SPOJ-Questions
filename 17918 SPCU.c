#include<stdio.h> //Wrong answer on 6th test case
int main(){
int t,n,i,j;
scanf("%d", &t);
POS:
while(t--){
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]==a[i]){
                printf("NO\n");
                goto POS;
        }
     }
    }
    printf("YES\n");
}
return 0;
}
