#include <stdio.h>
int main()
{
    int n[5][4],i,j,sum[5],max=0,k=0;
    for(i=0;i<5;i++)
    {
        sum[i]=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&n[i][j]);
            sum[i]=sum[i]+n[i][j];
        }
        if(max<sum[i])
        {
            max=sum[i];
            k=i+1;
        }
    }
    printf("%d %d",k,max);
    return 0;
}

