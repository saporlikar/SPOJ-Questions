#include<stdio.h>
int main(){
int t,n,i,j,count=0,count_new=0,count_sp=0;
scanf("%d", &t);
POS:
while(t--){
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
        printf("COUNT_SP=%d\n",count_sp);
        printf("COUNT_NEW=%d\n",count_new);
    for(i=0;i<n;i++){
        if(a[i]<=0 || a[i]>=n){
            printf("NO because elements are out of bounds\n");
            count_sp=0;
            count_new=0;
            count=0;
            goto POS;
        }
        if(a[i]==(n-1))
           count_sp++;
        if(n%2==1 && a[i]==(n-1)/2)
            count_new++;
    }
    if(count_sp!=2){
        printf("count_sp=%d\n",count_sp);
        printf("NO because last element is not used twice\n");
        count_sp=0;
        count_new=0;
        count=0;
        goto POS;
    }
    if(count_new>1){
        printf("count_new=%d\n",count_new);
        printf("NO because middle element repeated more than once\n");
        count_new=0;
        count_sp=0;
        count=0;
        goto POS;
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]==a[j] && i!=j)
                count++;
        }
        if(count>1){
            printf("NO because no element cannot appear more than twice\n");
            count_new=0;
            count_sp=0;
            count=0;
            goto POS;
        }
        count=0;
    }
    printf("YES\n");
}
return 0;
}
