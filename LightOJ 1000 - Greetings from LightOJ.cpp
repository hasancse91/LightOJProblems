#include<stdio.h>

int main()
{
    int i,tCase,a,b;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d",&a,&b);

        printf("Case %d: %d\n",i,a+b);
    }


    return 0;
}
