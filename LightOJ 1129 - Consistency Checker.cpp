#include<bits/stdc++.h>

using namespace std;

struct node
{
	bool endmark;
	node *next[11];
	node()
	{
		endmark=false;
		for(int i=0;i<11;i++)
            next[i]=NULL;
	}
}*root;

void insert(string str,int len)
{
	node *curr=root;

	for(int i=0;i<len;i++)
	{
		int id=str[i]-'0';
		//cout<<"ID: "<<id;
		if(curr->next[id]==NULL)
			curr->next[id]=new node();
		curr=curr->next[id];
	}
	curr->endmark=true;

}
bool search(string str,int len)
{
	node *curr=root;
	for(int i=0;i<len;i++)
	{
		int id=str[i]-'0';
		if(curr->next[id]!=NULL && curr->endmark==true)
            return true; //matches two numbers

		curr=curr->next[id];
    }

	return false; //doesn't match yet
}
void del(node *cur)
{
      for(int i=0;i<11;i++)
      {
          if(cur->next[i])
                  del(cur->next[i]) ;
      }

         delete(cur) ;
}

int main()
{
    int tCase,n,i,t=0;
    bool flag;//,f;

    cin>>tCase;

    while(tCase--)
    {
        t++;
        cin>>n;
        root=new node();

        vector <string> vc;
        flag=false;

        for(i=1; i<=n; i++)
        {
            //getchar(); // cin>> for string doesn't work like gets(). more like scanf("%s"), so no need for getchar()
            string number;
            cin>>number;
            vc.push_back(number);
        }

        //sort (vc.begin(), vc.begin()+n);
        sort(vc.begin(),vc.end());

        for (i=0; i<n; i++)
        {
            insert(vc[i],vc[i].length());
            flag=search(vc[i],vc[i].length());

            if(flag==true)//not consistence
            {
                //flag=false;
                break;
            }
        }



        if(flag) //flag true means consistency found
            cout<<"Case "<<t<<": NO"<<endl;
        else
            cout<<"Case "<<t<<": YES"<<endl;

        del(root);
    }

    return 0;
}

