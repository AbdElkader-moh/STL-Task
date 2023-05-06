#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
}
int main() {
    fast();
map<string,int>mp;
int n,l;
string s1;
cin>>n;
for(int i=0;i<n;i++)
{
    l=mp.size();
    cin>>s1;
    mp.insert({s1,0});
    if(mp.size()>l)
    cout<<"OK"<<endl;
    else{
        mp[s1]=mp[s1]+1;
        cout<<s1<<mp[s1]<<endl;
    }
}
        return 0;
}
