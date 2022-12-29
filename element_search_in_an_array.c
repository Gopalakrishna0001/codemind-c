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
    scanf("%d",&x);
    for(i=0;i<N;i++)
    {
        if(a[i]==x)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}