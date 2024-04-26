#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>v;
 
    while(true)
    {   int t;
        cin>>t;
        if(t==-1)
        {
            break;
        }
        v.push_back(t);
    }
 v.sort();
    v.unique();
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}