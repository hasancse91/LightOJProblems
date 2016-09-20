#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main()
{
    long long int tCase,t,res,res1,x1,y1,x2,y2,result;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>x1>>y1>>x2>>y2;

        res=abs(x1-x2);
        res1=abs(y1-y2);

        result= __gcd(res, res1)+1;

        cout<<"Case "<<t<<": ";

        cout<<result<<endl;

    }


    return 0;
}
