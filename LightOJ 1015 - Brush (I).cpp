#include<iostream>

using namespace std;

int main()
{
    int tCase,t,i,n,val,sum;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n;
        sum=0;
        for(i=1; i<=n; i++)
        {
            cin>>val;

            if(val>0)
            sum+=val;
        }

        cout<<"Case "<<t<<": ";
        cout<<sum<<endl;
    }

    return 0;
}
