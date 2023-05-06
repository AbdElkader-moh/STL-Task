#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int>s1;
    int numberofque;
    scanf("%d",&numberofque);
    for(int i=0;i<numberofque;i++)
    {
        int quer;
        scanf("%d",&quer);
        if(quer==1)
        {
            int data;
            scanf("%d",&data);
            s1.push(data);
        }
        else if(quer==2)
        {   if(!s1.empty())
            s1.pop();

        }
        else{
            if(s1.empty())
            {
                printf("Empty!\n");
            }
            else
            {
                printf("%d\n",s1.top());
            }
            }
        }


    return 0;
}
