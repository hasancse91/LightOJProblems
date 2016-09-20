#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>


using namespace std;

int main()
{
    int i,j,k,n,m,tCase,t,end,num;
    string temp,bin;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>n;
        temp="";
        bin="";
        num=0;


        while(n)
        {
            if(n&1)
            temp+='1';
            else
            temp+='0';
            n=(n>>1);
        }


        bin='0';
        for(i=temp.size()-1; i>=0; i--)
        {
            bin+=temp.at(i);
        }


        next_permutation(bin.begin(),bin.end());


        if(bin.at(0)=='0')
        end=1;
        else
        end=0;
        for(i=bin.size()-1,j=0; i>=end; i--,j++)
        {
            num+=(bin.at(i)-'0')*pow(2,j);
        }

        cout<<"Case "<<t<<": ";
        cout<<num<<endl;
    }


    return 0;
}

