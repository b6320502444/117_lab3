#include<stdio.h>
int main()
{
    int n,i=3,count,x,max;
    scanf("%d",&n);
    for(count=2;count<=n;i++)
    {
        for(x=2;x<=n;x++)
        {
            if(i%x==0)
                break;
        }
        if(x==i)
        {
            max=i;
            count++;
        }
        if(i==n)
            break;
    }
    printf("%d",max);
    return 0;
}
