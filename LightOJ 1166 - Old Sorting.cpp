#include<stdio.h>

int main()
{
    int arr[110],i,j,k,temp,tCase,n,val,cnt,m;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        cnt=0;

        scanf("%d",&n);
        for(j=1; j<=n; j++)
        scanf("%d",&arr[j]);

        for(m=1; m<n; m++)
        for(j=1; j<=n; j++)
        {
            if(arr[j]!=j)
            {
                val=arr[j];
                temp=arr[val];
                arr[val]=val;
                arr[j]=temp;

                cnt++;
            }
        }

        //for(k=1; k<=n; k++)
        //printf("%d ",arr[k]);

/*
2
10
3 4 5 6 10 9 8 1 2 7
10
5 9 3 4 6 7 1 8 10 2

Output: 8 & 5
*/

        printf("Case %d: %d\n",i,cnt);




    }


    return 0;
}
