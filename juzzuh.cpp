#include <iostream>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

int main()
{
deque<int> l1;
deque<int>l2;
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++)
{
    int data;
    cin>>data;
    l1.push_back(data);
    l2.push_back(i+1);
}
int erasedind;
while(!l1.empty())
{
    if(l1.front()-m<=0)
    {
        erasedind=l2.front();
        l1.pop_front();
        l2.pop_front();
    }
    else
    {
        int tempdata=l1.front();
        int tempidx=l2.front();
        l1.pop_front();
        l2.pop_front();
        l1.push_back(tempdata-m);
        l2.push_back(tempidx);
    }
}
cout<<erasedind;
return 0;
}
