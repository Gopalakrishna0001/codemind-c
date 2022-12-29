#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,x;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2!=0)
        {
            if(i%2!=0)
            {
                x=0;
            }
            else
            {
                x=1;
                break;
            }
        }
    }
    if(x==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}    