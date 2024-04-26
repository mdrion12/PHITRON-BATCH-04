#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        bool flag=true;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]<=s[i+1])
            {
             continue;
            }
           else
           {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}