#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    stack<int>st;
    for(int i=0;i<x;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
   queue<int>q;
   for(int i=0;i<y;i++)
   {
    int v;
    cin>>v;
    q.push(v);
   }
   bool flag=true;
   if(st.size()!=q.size())
   {
    cout<<"NO"<<endl;
    return 0;
   }
   else
   {
    while(!st.empty())
    {
     if(st.top()!=q.front())
     {
      flag=false;
      break;
     }
     else{
        st.pop();
        q.pop();
     }
    }
   }
   if(flag==true)
   {
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
}