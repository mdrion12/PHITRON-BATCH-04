#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     list<int>l;
    int x;
    cin>>x;
     
    for(int i=0;i<x;i++)
    {
        int n;
        cin>>n;
        l.push_back(n);
    }
    l.sort();
    l.unique();
   for(int v:l)
   {
    cout<<v<<" ";
   }
   cout<<endl;
  }

    return 0;
}