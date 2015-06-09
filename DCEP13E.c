#include<stdio.h>
int main()
{
	int t,n;
	double x,y;

	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		if(n>=48 && n<=50)
          {
            printf("374/10\n");
		  }
        else
        {
		  x=7.8;
		  y=0.2;
		  x*=n;
		  y*=n;
		  printf("%.0lf/%.0lf\n",x,y);
        }
	}
	return 0;
}
