#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i;
    float sum=0,avg=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/N;
    printf("%0.2f",avg);
}