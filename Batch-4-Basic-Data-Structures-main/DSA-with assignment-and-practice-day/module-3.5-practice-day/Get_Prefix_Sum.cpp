#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>s(n),t(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    t[0]=s[0];
      for(int i=1;i<n;i++)
      {
       t[i]=t[i-1]+s[i];
      }
      reverse(t.begin(),t.end());
      for(int i=0;i<n;i++)
    {
        cout<<t[i]<<" ";
    }

    return 0;
}