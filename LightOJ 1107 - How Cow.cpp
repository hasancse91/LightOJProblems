#include<iostream>

using namespace std;

int main()
{
    int t,tCase,m,x1,y1,x2,y2,x,y;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>x1>>y1>>x2>>y2;

        cout<<"Case "<<t<<":\n";

        cin>>m;
        while(m--)
        {
            cin>>x>>y;

            if((x>=x1 && x<=x2) && (y>=y1 && y<=y2))
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
    }

    return 0;
}
