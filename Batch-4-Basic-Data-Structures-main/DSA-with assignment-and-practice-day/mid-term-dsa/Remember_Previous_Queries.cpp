#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    int t;
    cin>>t;
    while(t--)
    {
        int x,v;
        cin>>x>>v;
       if(x==0)
       {
        l.push_front(v);
       }
       else if(x==1)
       {
        l.push_back(v);
       }
       else if(x==2)
       {
        if(v<l.size())
        {
            auto it=next(l.begin(),v);
            l.erase(it);
        }
     
       }
       cout<<"L -> ";
       for(int i:l)
       {
        cout<<i<<" ";
       }
       cout<<endl;
       l.reverse();
       cout<<"R -> ";
       for(int i:l)
       {
        cout<<i<<" ";
       }
       cout<<endl;
       l.reverse();
    }
    return 0;
}