#include<stdio.h>
int main(){
int t,n,k,sum=0,sub_sum=0,count_neg=0,flag=0,sum_new=0,i,j,temp;
scanf("%d", &t);
while(t--){
    scanf("%d %d", &n, &k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        sum+=a[i];
        if(a[i]<0)
            count_neg++;
        if(a[i]==0)
            flag=1;
   }
   if(k<=count_neg){
    for(i=0;i<k;i++){
        sub_sum+=a[i];
        a[i]=(-1)*a[i];
     }
     sum=sum-2*sub_sum;
     printf("%d\n",sum);
   }
   else{
    for(i=0;i<count_neg;i++){
        sub_sum+=a[i];
        a[i]=(-1)*a[i];
    }
    if(flag){
    sum=sum-2*sub_sum;
    printf("%d\n",sum);
    }
    else{
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<k-count_neg;i++)
        a[i]=(-1)*a[i];
    for(i=0;i<n;i++)
        sum_new+=a[i];
    printf("%d\n",sum_new);
    }
   }
     flag=0;
     sum=0;
     sub_sum=0;
     sum_new=0;
     count_neg=0;
   }
   return 0;
}
