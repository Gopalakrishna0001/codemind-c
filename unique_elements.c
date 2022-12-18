#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,j;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            break;
        }
        if(i==j)
        {
            printf("%d ",a[i]);
        }
    }
}