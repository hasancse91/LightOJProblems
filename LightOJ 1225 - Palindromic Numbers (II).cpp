#include<stdio.h>
#include<string.h>

int main()
{
    int tCase,i,j,k,len,m;
    char num[10000],rev[10000];

    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {

        scanf("%s",num);


        len=strlen(num);

        for(k=0,m=len-1; k<len; k++,m--)
        rev[k]=num[m];
        rev[len]=NULL;

        if(strcmp(num,rev)==0)
        printf("Case %d: Yes\n",i);
        else
        printf("Case %d: No\n",i);

    }


    return 0;
}
