#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,sum1=0,sum2=0,d;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+a[i];
        }
    }
    for(i=0;i<N;i++)
    {
        if(i%2!=0)
        {
            sum2=sum2+a[i];
        }
    }
    d=sum1-sum2;
    printf("%d",d);
}