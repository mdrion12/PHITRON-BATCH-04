#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b)
{
if(a.first<b.first)
{
    return true;
}
 if(a.first==b.first)
{
    if(a.second>b.second)
    {
        return true;
    }
    else return false;
}
else return false;
}
int main()
{
   int t;
   cin>>t;
    pair<string,int>pr[t];
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int v;
        cin>>v;
        pr[i].first=s;
        pr[i].second=v;

    }
   sort(pr,pr+t,cmp);
   for(pair<string,int> v:pr)
   {
    cout<<v.first<<" "<<v.second<<endl;
   }
    

    return 0;
}