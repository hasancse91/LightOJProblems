#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int func(string a,string b)
{
    int arr1[110],arr2[110],add=0,i,j;

    for(i=0; a[i]; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        arr1[add++]=(int)a[i];
        else if(a[i]>='A' && a[i]<='Z')
        arr1[add++]=(a[i]+32);
    }

    int add1=0;
    for(i=0; b[i]; i++)
    {
        if(b[i]>='a' && b[i]<='z')
        arr2[add1++]=(int)b[i];
        else if(b[i]>='A' && b[i]<='Z')
        arr2[add1++]=(b[i]+32);

    }


    sort(arr1,arr1+add);
    sort(arr2,arr2+add1);

    int flag=1;
    if(add!=add1)
    return 0;
    else
    {
        for(i=0; i<add; i++)
        {
            if(arr1[i]!=arr2[i])
            {
                flag=0;
                //cout<<arr1[i]<<"---"<<arr2[i]<<endl;
                break;
            }
        }

        if(flag)
        return 1;
        else
        return 0;
    }

}

int main()
{
    int tCase,t;
    string a,b;
    char ch;

    cin>>tCase;
    getchar();

    for(t=1; t<=tCase; t++)
    {

        getline(cin,a);
        getline(cin,b);

        if(func(a,b))
        cout<<"Case "<<t<<": Yes"<<endl;
        else
        cout<<"Case "<<t<<": No"<<endl;
    }

    return 0;
}

/*
3
Tom Marvolo Riddle
I am Lord Voldemort
I am not Harry Potter
Hi Pretty Roar to man
Harry and Voldemort
Tom and Jerry and Harry



*/
