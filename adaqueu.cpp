#include <iostream>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> l1;
    int numberofque;
    scanf("%d",&numberofque);
    int reversed=0;
    for (int i=0;i < numberofque;i++)
    {
        string s;
        cin>>s;
        if(s=="toFront"||(s=="push_back"&&reversed==1))
        {int data;
         scanf("%d",&data);
         l1.push_front(data);
        }
        else if(s=="push_back"||(s=="toFront"&&reversed==1))
        {
            int data;
            scanf("%d",&data);
            l1.push_back(data);
        }
        else if(s=="reverse")
        {
            if(reversed==1)
                reversed=0;
            else
                reversed=1;
        }
        else if(s=="back"||(s=="front"&&reversed==1))
        {
            if(!l1.empty())
            {
                cout<<l1.back()<<endl;
                l1.pop_back();
            }
            else
            {
                cout<<"No job for Ada?"<<endl;
            }

        }
        else if(s=="front"||(s=="back"&&reversed==1)){

            if(!l1.empty())
            {
                cout<<l1.front()<<endl;
                l1.pop_front();
            }
            else
            {
                cout<<"No job for Ada?"<<endl;
            }
        }
    }
}
