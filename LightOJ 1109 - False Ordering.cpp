#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int status[1100];

void sieve()
{
    int i,j,add=0,range=34;
    status[0]=1;
    status[1]=1;

    for(i=2; i<=range; i++)
    {
        if(status[i]==0)
        {
            for(j=i+i; j<=1001; j=j+i)
            {
                status[j]=1;
            }
        }

    }
}

int NOD(int n)
{
    int i,j,ran,cnt=0;

    ran=sqrt(n);

    for(i=1; i<=ran; i++)
    {
        if(n%i==0)
        cnt++;
    }

    if(ran*ran==n)
    cnt=2*cnt-1;
    else
    cnt=2*cnt;

    return cnt;

}

struct rest_num
{
    int pos,num;
};

bool comp(rest_num x, rest_num y)
{
    if(x.num==y.num)
    	return  x.pos>y.pos;

    return x.num<y.num;
}

int main()
{
    sieve();

    int i,j,t,tCase,n;
    rest_num arr[1010];

    arr[0].num=0;
    arr[0].pos=0;
    arr[1].num=1;
    arr[1].pos=1;


    for(i=2; i<=1005; i++)
    {
        if(status[i]==1)
        {
            arr[i].pos=i;
            arr[i].num=NOD(i);
        }
        else
        {
            arr[i].pos=i;
            arr[i].num=2;
        }

    }


    sort(arr,arr+1001,comp);
/*
    cout<<arr[1000].pos<<endl;

    for(i=1; i<=10; i++)
    cout<<i<<"->> "<<arr[i].pos<<endl;
*/
    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n;

        cout<<"Case "<<t<<": "<<arr[n].pos<<endl;
    }

    return 0;
}
