#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s1;
    int dist=0;
    cin>>s1;
    int sze=s1.size();
    for(int i=0;i<26;i++)
    {
        int counter=0;
        int found=0;
        char x='a'+i;
        for(int m=0;m<sze;m++)
        {
            if(x==s1[m])
            {
                found=1;
            }
        }
        if(found==1)
        {
            dist++;
        }

    }
    if(dist%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
