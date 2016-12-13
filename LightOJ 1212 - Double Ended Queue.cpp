#include<bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> mydeque;
    int tCase, t, n, m, x;
    string command;
    char ch;

    scanf("%d", &tCase);

    for(t=1; t<=tCase; t++)
    {
        printf("Case %d:\n", t);
        mydeque.clear();
        scanf("%d %d", &n, &m);
        for(int i=1; i<=m; i++)
        {
            cin>>command;
            getchar();
            if(command=="pushLeft" || command=="pushRight")
                cin>>x;

            if(command=="pushLeft")
            {
                if(mydeque.size()<n)
                {
                    mydeque.push_front(x);
                    printf("Pushed in left: %d\n", x);
                }
                else
                    printf("The queue is full\n");
            }
            else if(command=="pushRight")
            {
                if(mydeque.size()<n)
                {
                    mydeque.push_back(x);
                    printf("Pushed in right: %d\n", x);
                }
                else
                    printf("The queue is full\n");
            }
            else if(command=="popLeft")
            {
                if(mydeque.empty())
                    printf("The queue is empty\n");
                else
                {
                    printf("Popped from left: %d\n", mydeque.front());
                    mydeque.pop_front();
                }

            }
            else if(command=="popRight")
            {
                if(mydeque.empty())
                    printf("The queue is empty\n");
                else
                {
                    printf("Popped from right: %d\n", mydeque.back());
                    mydeque.pop_back();
                }
            }
        }
    }


    return 0;
}
