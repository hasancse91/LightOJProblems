#include<cstdio>
#include<iostream>
using namespace std;

#define LL long long

int main()
{
    LL a,b,c,t,test,i,m,n,num;

    cin>>test;

    for(t=1;t<=test;t++)
    {
        cin>>num;
        cout<<"Case "<<t<<": ";
        if(num&1)
            cout<<"Impossible";
        else
        {
            m=2;
            for(m=2; m<=num; m*=2)
            {
                if((num/m)&1)
                {
                   cout<<(num/m)<<" "<<m;
                    break;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
