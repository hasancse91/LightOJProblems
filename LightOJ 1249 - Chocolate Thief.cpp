#include<iostream>
#include<algorithm>

using namespace std;

struct info
{
   int vol;
   string name;
};

bool comp(info a, info b)
{
    return a.vol<b.vol;
}

int main()
{
    int a,b,c,t,i,tCase,n;

    info arr[101];

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n;

        for(i=1; i<=n; i++)
        {
            cin>>arr[i].name>>a>>b>>c;
            arr[i].vol=a*b*c;

        }

        sort(arr+1, arr+n+1, comp);

        cout<<"Case "<<t<<": ";
        if(arr[1].vol==arr[n].vol)
        cout<<"no thief\n";
        else
        cout<<arr[n].name<<" took chocolate from "<<arr[1].name<<endl;


    }



    return 0;
}
