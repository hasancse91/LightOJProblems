#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

/* Another solution
#include<iostream>
#include<string>
#include<cstdio>


using namespace std;

int main()
{
    int a,b,c,d,arr[]={128,64,32,16,8,4,2,1},a_f,b_f,c_f,d_f,t,tCase,i;
    string num,a_bin,b_bin,c_bin,d_bin;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        cin>>num;

        a_f=b_f=c_f=d_f=i=0;

        a_bin=num.substr(0,8);
        b_bin=num.substr(9,8);
        c_bin=num.substr(18,8);
        d_bin=num.substr(27,8);

        while(i<8)
        {
            if(a_bin.at(i)=='1')
            a_f+=arr[i];

            if(b_bin.at(i)=='1')
            b_f+=arr[i];

            if(c_bin.at(i)=='1')
            c_f+=arr[i];

            if(d_bin.at(i)=='1')
            d_f+=arr[i];

            i++;

        }

        if(a==a_f && b==b_f && c==c_f && d==d_f)
        cout<<"Case "<<t<<": Yes"<<endl;
        else
        cout<<"Case "<<t<<": No"<<endl;

    }


    return 0;
}


*/



int a,b,c,d,cnt=0;
string final;

void bin(int x)
{
    int i,len,number=x;
    string temp;

    temp="";
    while(x)
    {
        temp+=x%2+'0';
        x/=2;
    }

    if(number!=0)
    len=8-temp.size();
    else
    len=8;
    for(i=1; i<=len; i++)
        final+="0";

    if(number!=0)
    for(i=temp.size()-1; i>=0; i--)
    {
        final+=temp.at(i);
    }
    cnt++;

    if(cnt!=4)
    final+=".";


}

int main()
{
    int tCase,t;
    string num;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        cin>>num;

        bin(a);
        bin(b);
        bin(c);
        bin(d);

        //cout<<final<<endl;

        if(num==final)
        cout<<"Case "<<t<<": Yes"<<endl;
        else
        cout<<"Case "<<t<<": No"<<endl;

        final="";
        cnt=0;
    }

    /*
1.2.3.0
00000001.00000010.00000011.00000000

    */

    return 0;
}
