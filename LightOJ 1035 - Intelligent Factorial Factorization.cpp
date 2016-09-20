#include<iostream>
#include<cstring>
#include<vector>
#define M 110

using namespace std;

bool status[M];
int primes[110],add;

void sieve()//Running time 0.14 s
{
    int i,j,pos;
    add=0;

    primes[add++]=2;

    for (int i=3; i*i<M; i+=2)
    {
        if (status[i] == false)
        {
              primes[add++]=i;
              pos=i;

              for (int j=i*i; j<=M; j+=i+i)
              {
                status[j] = true;
              }
        }
    }


    for(i=pos+2; i<M; i+=2)
    {
        if(status[i] == false)
            primes[add++]=i;
    }


}



int main()
{
    int fact[105];
    int i,j,n,N,t,tCase,flag;
    sieve();

    //cout<<add;



    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        memset(fact,0,sizeof(fact));
        flag=1;
        cin>>n;
        N=n;

        for(j=2; j<=n; j++)
        {

            N=j;

            for(i=0; N>1 && i<add; i++)
            {

                while(N%primes[i]==0 && N>1)
                {
                    //if(N==13)
                    //cout<<"ho->>"<<primes[i];
                    fact[primes[i]]++;
                    N/=primes[i];
                    //cout<<primes[i]<<endl;
                }
            }
        }


        cout<<"Case "<<t<<": "<<n<<" =";
        for(i=2; i<=n; i++)
        {
            if(fact[i]>0)
            {
                if(flag==0)
                {
                    cout<<" * "<<i<<" ("<<fact[i]<<")";
                }
                else
                {
                    cout<<" "<<i<<" ("<<fact[i]<<")";
                    flag=0;
                }

            }

        }
        cout<<endl;
    }


    return 0;
}
