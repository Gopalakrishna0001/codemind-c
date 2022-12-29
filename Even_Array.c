#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,c=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2==0)
        {
            c+=1;
        }
    }
    if(N==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}