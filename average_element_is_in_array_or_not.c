#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,avg,count=0,s=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        s=s+a[i];
    }
    avg=s/N;
    for(i=0;i<N;i++)
    {
        if(a[i]==avg)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}    