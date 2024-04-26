#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        if(c[i]<0)
        {
            c[i]=2;
        }
        else if(c[i]>0)
        {
            c[i]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}