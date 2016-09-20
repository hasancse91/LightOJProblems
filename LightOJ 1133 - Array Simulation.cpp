#include<iostream>

using namespace std;

int main()
{
    int i,j,n,m,d,arr[110],y,z,temp,t,tCase;
    char ch;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        cin>>arr[i];

        for(i=1; i<=m; i++)
        {
            cin>>ch;
            if(ch=='P')
            {
                cin>>y>>z;

                temp=arr[y];
                arr[y]=arr[z];
                arr[z]=temp;
            }
            else if(ch=='S')
            {
                cin>>d;

                for(j=0; j<n; j++)
                arr[j]=arr[j]+d;
            }
            else if(ch=='M')
            {
                cin>>d;

                for(j=0; j<n; j++)
                arr[j]=arr[j]*d;
            }
            else if(ch=='D')
            {
                cin>>d;

                for(j=0; j<n; j++)
                arr[j]=arr[j]/d;
            }
            else if(ch=='R')
            {
                for(j=1; j<=n/2; j++)
                {
                    temp=arr[j-1];
                    arr[j-1]=arr[n-j];
                    arr[n-j]=temp;
                }
            }
        }
        cout<<"Case "<<t<<":\n";
        for(i=0; i<n; i++)
        {
            cout<<arr[i];
            if(i!=n-1)
            cout<<" ";
        }
        cout<<endl;

    }

    return 0;
}
