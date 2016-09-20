#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t,tCase,i,j,k,account,op,donation;
    string ins;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>op;
        cout<<"Case "<<t<<":"<<endl;
        account=0;

        for(i=1; i<=op; i++)
        {
            cin>>ins;


            if(ins=="donate")
            {
                cin>>donation;
                account+=donation;
            }
            else
            {
                cout<<account<<endl;
            }

        }
    }



    return 0;
}
