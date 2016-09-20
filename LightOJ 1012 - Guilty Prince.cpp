#include<iostream>


using namespace std;

char grid[25][25];
bool flag[25][25];
int x,y,cnt;

void DFS(int a, int b)
{


    if(a<1 || a>y || b<1 || b>x)
    return;

//cout<<grid[a][b]<<"->> "<<flag[a][b]<<endl;

    if((grid[a][b]=='.'|| grid[a][b]=='@') && flag[a][b]==0)
    {
        //cout<<a<<"->>"<<b<<endl;
        flag[a][b]=1;
        cnt++;

        DFS(a+1, b);
        DFS(a-1, b);
        DFS(a, b+1);
        DFS(a, b-1);
    }

}

int main()
{
    int t,tCase,i,j,px,py;

    cin>>tCase;

    for(t=1; t<=tCase; t++)
    {
        cin>>x>>y;
        cnt=0;

        for(i=1; i<=y; i++)
        {
            for(j=1; j<=x; j++)
            {
                cin>>grid[i][j];

                if(grid[i][j]=='@')
                {
                    px=i,py=j;
                    //cout<<"X,Y->>"<<px<<" "<<py<<endl;
                }
                flag[i][j]=0;
            }
        }



        DFS(px,py);

        cout<<"Case "<<t<<": "<<cnt<<'\n';
    }

    return 0;
}
