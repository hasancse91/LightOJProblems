
#include<stdio.h>
#include<math.h>

double arr[1000010];

int main()
{
    int i,j,k,n,b,tCase,digit;


    arr[0]=log(1);
    arr[1]=arr[0];
    for(i=2; i<=1000000; i++)
    arr[i]=arr[i-1]+log(i);


    scanf("%d",&tCase);

    for(i=1; i<=tCase; i++)
    {
        scanf("%d %d",&n,&b);

        digit=floor((arr[n]/log(b))+1);


        printf("Case %d: %d\n",i,digit);



    }



    return 0;
}
