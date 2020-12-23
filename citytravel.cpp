#include<stdio.h>
int main()
{
	long long int s,x,n,i,temp,days=0;
	scanf("%lld%lld%lld",&s,&x,&n);
	long long int t[n],d[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld%lld",&t[i],&d[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(t[i]>t[j])
			{
				temp=t[i];
				t[i]=t[j];
				t[j]=temp;
				temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(s-((t[i]-1-days)*x)<=0)
		{
			while(s>0)
			{
				s-=x;
				days++;
			}
			break;
		}
		s-=(t[i]-1-days)*x;
		days+=t[i]-1-days;
		if(s-d[i]<=0)
		{
			s-=d[i];
            days++;
			break;
		}
		s-=d[i];
		days++;
	}
	while(s>0)
	{
		s-=x;
		days++;
	}
	printf("%lli",days);
	return 0;
 
}
