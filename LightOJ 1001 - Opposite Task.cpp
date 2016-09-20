#include<stdio.h>

int main()
{
    int tCase,a,i;

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%d",&a);
        printf("%d %d\n",(a/2),(a-(a/2)));
    }


    return 0;
}
