
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i,j,t,tCase,q;
    long long b,mod,temp;
    string a;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>a>>b;

        if(a.at(0)=='-')
        q=1;
        else
        q=0;

        temp=0;
        for(i=q; i<a.size(); i++)
        {
            temp=temp*10+(a.at(i)-48);

            temp=temp%b;
        }


        cout<<"Case "<<t;

        if(temp==0)
        cout<<": divisible"<<endl;
        else
        cout<<": not divisible"<<endl;

    }

    return 0;
}
