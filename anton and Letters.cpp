#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> a;
    char x;
    while (x!='}')
    {
        cin>>x;
        if(x>='a'&&x<='z')
        {
            a.insert(x);
        }
    }
    cout<<a.size();
    return 0;
}
