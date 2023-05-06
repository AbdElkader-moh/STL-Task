#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1;
     vector<int>v2;
    int noofstairs=1;
    int noofstories=1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        v1.push_back(data);
    }
    for(int i=1;i<n;i++)
    {
        if(v1[i]==1)
        {
            v2.push_back(noofstairs);
            noofstairs=1;
            noofstories++;
        }
        else
        {
            noofstairs++;
        }
    }
    v2.push_back(noofstairs);
    cout<<noofstories<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}
