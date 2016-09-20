#include<stdio.h>

int main()
{
    int tCase,i,j;
    long long int n,m,res;


    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%lld %lld",&n,&m);

        res=(n*m)/2;

        printf("Case %d: %lld\n",i,res);

    }


    return 0;
}
