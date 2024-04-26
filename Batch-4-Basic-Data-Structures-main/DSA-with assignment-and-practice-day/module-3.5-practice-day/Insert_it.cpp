#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> t(n);
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int a;
    cin>>a;
    t.insert(t.begin()+a,b.begin(),b.end());
    for(int i=0;i<t.size();i++)
    {
    cout<<t[i]<<" ";
    }
    return 0;
}
