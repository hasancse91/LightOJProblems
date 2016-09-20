#include<iostream>

using namespace std;

int main()
{
    int i,tCase,a,b,res;

    cin>>tCase;

    for(i=1; i<=tCase; i++)
    {
        cin>>a>>b;

        if(a<=b)
        res=b*4+19;
        else
        {
            res=(a-b)*4+a*4+19;
        }

        cout<<"Case ";
        cout<<i<<": "<<res<<endl;
    }



    return 0;
}

