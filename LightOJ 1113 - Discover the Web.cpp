#include<iostream>

using namespace std;

int main()
{
    int tCase,t,i,top,num,pos;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        top=0;
        pos=0;
        string url[110],op,link;
        url[0]="http://www.lightoj.com/";

        cout<<"Case "<<t<<":\n";

        while(true)
        {
            cin>>op;

            if(op=="QUIT")
            break;
            else if(op=="VISIT")
            {
                pos++;
                top=pos;
                cin>>link;
                url[pos]=link;

                cout<<link<<endl;

            }
            else if(op=="BACK")
            {
                pos--;

                if(pos==-1)
                {
                    pos=0;
                    cout<<"Ignored"<<endl;
                }
                else
                cout<<url[pos]<<endl;
            }
            else if(op=="FORWARD")
            {
                pos++;

                if(pos>top)
                cout<<"Ignored"<<endl;
                else
                cout<<url[pos]<<endl;
            }
        }

    }


    return 0;
}
