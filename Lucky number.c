#include<stdio.h>

int main()
{
    int n,i,x=0,a=1;
    scanf("%d",&n);
    int k=n;
    for(i=2;k>1;i++)
    {
        if(k%i==0)
        {
            if(a==i)
                break;
            k/=i;
            a=i;
            i=1;
            x++;
        }
    }
    if(x==3)
        printf("%d is a Lucky Number.",n);
    else
        printf("%d is not a Lucky Number.",n);
    return 0;
}
