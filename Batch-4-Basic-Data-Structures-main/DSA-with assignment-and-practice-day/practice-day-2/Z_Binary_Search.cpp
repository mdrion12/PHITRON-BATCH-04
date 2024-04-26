#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int s[a];
    for(int i=0;i<a;i++)
    {
        cin>>s[i];
    }
    sort(s,s+a);
while(b--)
{     
    int x;
    cin>>x;
     int l=0;
    int r=a-1;
    bool flag=false;
    while(l<=r)
    {
        
        int mid=(l+r)/2;
        if(s[mid]==x)
        {
            flag=true;
            break;
        }
        if(x>s[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        
    }
    if(flag==true) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
}
    return 0;
}