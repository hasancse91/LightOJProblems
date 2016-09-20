#include<stdio.h>
#include<algorithm>


using namespace std;

int main()
{
    int tCase,n,my[60],opp[60],i,j,k,start,res;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%d",&n);

        res=0;

        for(j=0; j<n; j++)
            scanf("%d",&my[j]);

        for(j=0; j<n; j++)
            scanf("%d",&opp[j]);

        sort(my,my+n);
        sort(opp,opp+n);


        for(j=0; j<n; j++)
        {
            if(opp[0]<my[j])
            {
                start=j;
                break;
            }
        }

        for(j=start,k=0; j<n; j++,k++)
        {
            if(my[j]>opp[k])
            res+=2;
            else if(my[j]==opp[k])
            res+=1;

        }

        printf("Case %d: %d\n",i,res);


    }

    return 0;
}
